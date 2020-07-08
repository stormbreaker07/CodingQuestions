#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

typedef struct btsnode {
	int data;
	btsnode* left;
    btsnode* right;
}* nodeptr;
nodeptr root=NULL;

nodeptr getnode(int data)
{nodeptr newnode = new btsnode;
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
	

int find_min(nodeptr root)
{if(root == NULL)
	{cout<<"empty tree";}
 while(root->left != NULL)
 {root=root->left;}
 return root->data;
}

int find_max(nodeptr root)
{if(root == NULL)
	{cout<<"empty tree";}
 while(root->right != NULL)
 {root=root->right;}
 return root->data;
}



	
	
int main()
{
root = insert(root,15);
root = insert(root,10);
root = insert(root,12);
root = insert(root,8);
root = insert(root,20);
root = insert(root,17);
root = insert(root,25);

cout<<"min : "<<find_min(root)<<endl;
cout<<"max : "<<find_max(root)<<endl;


return 0;
}
