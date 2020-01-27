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
{if(root == NULL)
	{root = getnode(data);
	}
else if(root->data>=data)
{root->left=insert(root->left,data);	
}
else if(root->data<=data)
{root->right=insert(root->right,data);
}
return root;
}
int i=0,s;
void inorder(nodeptr root)
{if(root == NULL) return;
inorder(root->left);
if(i==0)
{s=root->data;
	i++;}
else
{if(root->data>=s)
{cout<<root->data<<" ";}

else
{cout<<"not a binary search tree";
	return ;}
}
inorder(root->right);
}


int main()
{
 root = insert(root,10);
	root = insert(root,67);
	root = insert(root, 23);
	root = insert(root,49); 
	root = insert(root,34); 
	root = insert(root,52);
	
	inorder(root);
	return 0;
}
