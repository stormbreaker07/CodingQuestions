#include <bits/stdc++.h>
#include <queue>
using namespace std;

typedef struct tree {
	char data;
	tree* left;
	tree* right;
}* nodeptr;
nodeptr root =NULL;

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



void BFS(nodeptr root)
{
	if(root == NULL) return;
	queue<nodeptr> q;
	q.push(root);
	while(!q.empty(n))
	{nodeptr curr = q.front();
		cout<<curr->data<<" ";
	if(curr->left!=NULL)
	{
		q.push(curr->left);
	}
	if(curr->right!=NULL)
	{
		q.push(curr->right);
	}
    q.pop();
	}
}
	





int main()
{
	/*Code To Test the logic
	  Creating an example tree

	            M
			   / \
			  B   Q
			 / \   \
			A   C   Z
    */
    
    root = insert(root,'M');
    root = insert(root,'B');
	root = insert(root,'Q'); 
	root = insert(root,'Z'); 
	root = insert(root,'A'); 
	root = insert(root,'C');
    
    BFS(root);
	return 0;
}
