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
 newnode->data=data;
 newnode->left = NULL;
 newnode->left = NULL;
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

bool isbstutil(nodeptr root,int minvalue,int maxvalue)
{if(root == NULL) return true;
	if(root->data<maxvalue && root->data>minvalue &&
	   isbstutil(root->left,minvalue,root->data) && 
	   isbstutil(root->right,root->data,maxvalue))
	   {return true;}
	   else
	   {return false;}
}
	   
	

bool isbinarysearchtree(nodeptr root)
{
return isbstutil(root,INT_MIN,INT_MAX);
}

int main()
{
	root = insert(root,12);
	root = insert(root,20);
	root = insert(root,10);
	root = insert(root,26);

cout<<isbinarysearchtree(root);

return 0;
}
