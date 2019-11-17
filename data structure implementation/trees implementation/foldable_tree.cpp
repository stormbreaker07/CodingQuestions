#include <bits/stdc++.h>
#include <queue>
using namespace std;
vector<int> v1;
vector<int> v2;
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
/*
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
*/

void BFS1(nodeptr root)
{
	if(root == NULL || root == NULL ) return;
	queue<nodeptr> q1;
	
	q1.push(root->left);
	v1.push_back(root->left->data);
	while(!q1.empty())
	{
		nodeptr curr = q1.front();
	
	if(curr->left!=NULL)
	{
		q1.push(curr->left);
	v1.push_back(curr->left->data);
	}
	else
	{v1.push_back(0);
	}
	if(curr->right!=NULL)
	{
		q1.push(curr->right);
	v1.push_back(curr->right->data);
	
	}
	else
	{v1.push_back(0);}
    q1.pop();
	}
}

void BFS2(nodeptr root)
{
	if(root == NULL || root->right == NULL) return;
	queue<nodeptr> q2;
	q2.push(root->right);
	v2.push_back(root->right->data);
	while(!q2.empty())
	{nodeptr curr = q2.front();
	
	if(curr->right!=NULL)
	{
		q2.push(curr->right);
	 v2.push_back(curr->right->data);
	}
	else 
	{v2.push_back(0);}
	if(curr->left!=NULL)
	{
		q2.push(curr->left);
	v2.push_back(curr->left->data);
	}
	else
	{v2.push_back(0);}
    q2.pop();
	}
}

void insert(nodeptr root,int n1,int n2,char lr)
 {
     if(root==NULL)
        return;
     if(root->data==n1)
     {
         switch(lr)
         {
          case 'L': root->left=getnode(n2);
                    break;
          case 'R': root->right=getnode(n2);
                    break;
         }
     }
     else
     {
         insert(root->left,n1,n2,lr);
         insert(root->right,n1,n2,lr);
     }
 }

void inorder(nodeptr root)
{if(root == NULL) return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}	

int main()
{int c=0;
	root=getnode(10);
	insert(root,10,7,'L');
	insert(root,7,9,'L');
	insert(root,10,15,'R');
	insert(root,15,11,'L');
    BFS1(root);
    BFS2(root);
    for(unsigned int i=0;i<v1.size();i++)
	{cout<<v1[i]<<" ";}
	cout<<endl;
    for(unsigned int i=0;i<v2.size();i++)
	{cout<<v2[i]<<" ";}
	cout<<endl;
    if(v1.size()!=v2.size())
    {cout<<"not foldable";}
    else
    {for(unsigned int i=0;i<v1.size();i++)
		{if((v1[i] == 0 && v2[i] != 0) || (v2[i] == 0 && v1[i] != 0 ))
			{c++;
			break;}
		}
	
	if(c==0)
	{cout<<"foldable"<<endl;}
	else
	{cout<<"not foldable"<<endl;}
    } 

return 0;
}
