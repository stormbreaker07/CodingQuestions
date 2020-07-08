#include <bits/stdc++.h>
#include <queue>
using namespace std;

typedef struct tree {
	int data;
	tree* left;
	tree* right;
}* nodeptr;
nodeptr root =NULL;

nodeptr getnode(int data)
{nodeptr newnode = new tree;
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}


void bfs(nodeptr root)
{
if(root == NULL) return;
queue<nodeptr> q;
q.push(root);
while(!q.empty())
{
nodeptr root1 = q.front();
cout<<root1->data<<" ";
q.pop();	
if(root1->left !=  NULL)
{
	q.push(root1->left);
}
if(root1->right != NULL)
{
q.push(root1->right);
}}
}
	
void inorder(nodeptr root)
{if(root == NULL) return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}	

void preorder(nodeptr root)
{if(root == NULL) return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}	

void postorder(nodeptr root)
{if(root == NULL) return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}	
	
	
int main()
{
if(root == NULL)
{root = getnode(1);}
root->left = getnode(2);
root->right = getnode(3);
nodeptr curr = root->left;
curr->left = getnode(4);
curr->right = getnode(5);

cout<<"BFS and DFSs of above Tree"<<endl;
cout<<"Breadth First Traversal : ";
bfs(root); cout<<endl;

cout<<"Depth First Traversals:"<<endl;
cout<<"Preorder Traversal : ";
preorder(root); cout<<endl;
cout<<"Inorder Traversal  :  ";
inorder(root); cout<<endl;
cout<<"Postorder Traversal : ";
postorder(root);
return 0;
}

 	
		
		
