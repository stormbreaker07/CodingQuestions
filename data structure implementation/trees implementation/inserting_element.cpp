#include <bits/stdc++.h>
#include <queue>
using namespace std;

typedef struct tree {
	int  data;
	tree* left;
	tree* right;
}* nodeptr;
nodeptr root =NULL;

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

	
int x;
void bfs(nodeptr root)
{
	if(root == NULL)
	{return ;}
	queue<nodeptr> q;
	q.push(root);
	while(!q.empty())
	{nodeptr root1= q.front();
	q.pop();
	if(root1->left==NULL)
	{cin>>x;
		root1->left = getnode(x);
		q.push(root1->left);
	break;
	}
	else if(root1->left!=NULL)
	{q.push(root1->left);}
	
	if(root1->right==NULL)
	{cin>>x;
		root1->right = getnode(x);
	q.push(root1->right);
	break;
	}
	else if(root1->right!=NULL)
	{q.push(root1->right);}
    }
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
root = insert(root,10);
    root = insert(root,11);
	root = insert(root,9); 
	root = insert(root,7); 
	root = insert(root,15); 
	root = insert(root,8);
	inorder(root);
	bfs(root);
	inorder(root);
		
	return 0;
}
