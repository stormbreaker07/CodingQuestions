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

bool search(nodeptr root,int data)
{if(root == NULL) return false;
	if(root->data == data) return true;
	else if(root->data >=data) return search(root->left,data);
	else return search(root->right,data);
}


int main()
{int x;
	/* root address is same in each step there is it point toward node have value 12*/
	root = insert(root,12);
	cout<<root->data<<" ";
	root = insert(root,20);
	cout<<root->data<<" ";
	root = insert(root,10);
	cout<<root->data<<" ";
	root = insert(root,26);
	cout<<root->data<<" ";
	cout<<"enter a number : ";
	cin>>x;
	bool ans=search(root,x);
	cout<<ans;
	return 0;
}
