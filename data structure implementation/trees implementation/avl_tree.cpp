#include <bits/stdc++.h>
#include <queue>
using namespace std;

typedef struct tree {
	int data;
	tree* left;
	tree* right;
}* nodeptr;
nodeptr root = NULL;

nodeptr getnode(int data)
{
nodeptr newnode = new tree;
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;
return newnode;
}

nodeptr insert(nodeptr root,int data)n
{
if(root == NULL)
{root = getnode(data);}
else if(root->data>=data)
{root->left = insert(root->left,data);}
else if(root->data<=data)
{root->right = insert(root->right,data);
}
return root;
}

void print(nodeptr root)
{
if(root == NULL) return;
print(root->left);
cout<<root->data<<" ";
print(root->right);

}

	
	

int main()
{
	root = insert(root,12);
	root = insert(root,10);
	root = insert(root,20);
	root = insert(root,9);
	root = insert(root,11);
	print(root);
	return 0;
}
