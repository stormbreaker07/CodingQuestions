#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

typedef struct bstnode { 
	int data;
	bstnode* left;
	bstnode* right;
}* nodeptr;
nodeptr root=NULL;

nodeptr getnode(int data)
{
nodeptr newnode = new bstnode;
newnode->data=data ;
newnode->left=NULL;
newnode->right=NULL;
return newnode;
}
nodeptr insert(nodeptr root,int data )
{
if(root == NULL)
{root = getnode(data);
}
else if(root->data >= data)
{root->left = insert(root->left,data);
}	
else if(root->data <= data)
{root->right = insert(root->right,data);
}	
return root;
}

int find_height(nodeptr root)
{
	if(root == NULL)
	{return -1;}
	return max(find_height(root->left),find_height(root->right))+1;
}


int main()
{
root = insert(root,15);
root = insert(root,10);
root = insert(root,20);
root = insert(root,8);
root = insert(root,12);
root = insert(root,17);
root = insert(root,25);
root = insert(root,30);
	

cout<<find_height(root);

return 0;
}
