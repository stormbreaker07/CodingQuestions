#include <bits/stdc++.h>
using namespace std;

typedef struct tree {
	int   data;
	tree* left;
	tree* right; 
}* nodeptr;
nodeptr root = NULL;




nodeptr getnode(int data)
{
nodeptr newnode = new tree;
newnode->data=data;
newnode->left=NULL;	
newnode->right=NULL;

return newnode;
}




nodeptr insert(nodeptr root,int data)
{
	if(root == NULL)
	{root = getnode(data);
    }
    else if(data<=root->data)
    {root->left=insert(root->left,data);
    }	
    else if(data>=root->data)
    {root->right=insert(root->right,data);
    }	
    return root;
} 	

nodeptr findmin(nodeptr root)
{while(root->left != NULL)
	{root=root->left;}
	return root;
}

nodeptr Delete(nodeptr root , int data)
{
if(root == NULL)
{return root;}

else if(data<root->data)
{root->left=Delete(root->left,data);}

else if(data>root->data)
{root->right=Delete(root->right,data);}

else
{/*case 1: no child*/
	if(root->left == NULL && root->right == NULL)
	{delete root;
		root = NULL;
	}
	/* case 2 : one child */
	else if(root->left == NULL)
	{nodeptr temp = root;
		root = root->right;
		delete temp;
	}
	else if(root->right == NULL)
	{nodeptr temp = root;
		root =root->left;
		delete temp;	
     }
     
     /* case 3 : two children*/
     else
     {nodeptr temp = findmin(root->right);
		 root->data = temp->data;
		 root->right = Delete(root->right,temp->data);
	 }
 }
 return root;
}
		 
void inorder(nodeptr root)
{
	if(root == NULL) return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right); 
}


int main()
{
root = insert(root,5);
root = insert(root,10);
root = insert(root,3);
root = insert(root,4); 
root = insert(root,1); 
root = insert(root,11);

inorder(root);
int x;
cin>>x;
root = Delete(root,x);

inorder(root);

return 0;
}
