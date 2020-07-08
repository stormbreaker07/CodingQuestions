#include <bits/stdc++.h>
using namespace std;

typedef struct tree {
	int data;
	tree* left;
	tree* right;
}* nodeptr;

nodeptr root = NULL;

nodeptr getnode(int data)
{nodeptr newnode = new tree;
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;
return newnode;
}

nodeptr insert(nodeptr root,int data)
{
	if( root == NULL )
	{root = getnode(data);}
	else if( root->data>=data)
	{root->left = insert(root->left,data);
	}
	else if( root->data<=data)
	{root->right = insert(root->right,data);
	}
	return root;
}

int main()
{
	root = insert(root,12);
    root = insert(root,20);
    root = insert(root,32);
    root = insert(root,45);
    root = insert(root,59);
    
    return 0;
}
