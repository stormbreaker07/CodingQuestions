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

nodeptr insert(nodeptr root,int data)
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

bool continious(nodeptr root)
{
if(root == NULL) return true;
if(root->left == NULL && root->right == NULL) return true;	
if(root->left == NULL)
{return abs(root->data-(root->right->data))==1 && continious(root->right);}
if(root->right == NULL)
{return abs((root->left->data)-root->data)==1 && continious(root->left);}

return abs((root->left->data)-root->data)==1  &&
       abs(root->data-(root->right->data))==1 && 
       continious(root->left) && 
       continious(root->right);
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
	root = insert(root,1);
	root = insert(root,2);
	root = insert(root,3);
	root = insert(root,4);
	root = insert(root,5);
	print(root);
		bool w=continious(root);
	if(w==1) cout<<"Continious Tree";
	else
	{cout<<"Not Continious Tree";}
	return 0;
}
