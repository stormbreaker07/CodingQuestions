#include <bits/stdc++.h>
using namespace std;

typedef struct tree {
	char  data;
	tree* left;
	tree* right; 
}* nodeptr;
nodeptr root = NULL;


nodeptr getnode(char data)
{
nodeptr newnode = new tree;
newnode->data=data;
newnode->left=NULL;	
newnode->right=NULL;

return newnode;
}


nodeptr insert(nodeptr root,char data)
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

 

void inorder(nodeptr root)
{
	if(root == NULL) return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right); 
}


int main()
{
	root = insert(root,'M');
	root = insert(root,'B');
	root = insert(root,'Q');
	root = insert(root,'Z'); 
	root = insert(root,'A'); 
	root = insert(root,'C');

inorder(root);
return 0;

}
