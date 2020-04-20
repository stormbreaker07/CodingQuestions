#include <bits/stdc++.h>
#include <queue>
#include <string>
using namespace std;
queue<string> in;

typedef struct tree {
	string data;
	tree* left;
	tree* right;
}* nodeptr;
nodeptr root = NULL;

nodeptr getnode(string data)
{
nodeptr newnode = new tree;
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;
return newnode;
}


void BFS1(nodeptr root)
{
	if(root == NULL ) return;
	queue<nodeptr> q1;
	
	q1.push(root);
	while(!in.empty())
	{
		nodeptr curr = q1.front();
	
	if(curr->left!=NULL)
	{
		q1.push(curr->left);}
	else
	{curr->left = getnode(in.front());
	in.pop();
	q1.push(curr->left);}
	if(curr->right!=NULL)
	{
		q1.push(curr->right);
	}
	else
	{curr->right = getnode(in.front());
		in.pop();
		q1.push(curr->right);}
	
	q1.pop();
}
}
queue<int> st2;
queue<string> st1;

void inorder(nodeptr root)
{
	if(root == NULL) return;
	inorder(root->left);
	inorder(root->right);
	if(root->data == "*" || root->data == "-" || root->data == "+" || root->data == "/")
	{st1.push(root->data);}
	else
	{st2.push(stoi(root->data));}
}	


int main()
{
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++)
	{cin>>s;
		in.push(s);}
	root = getnode(in.front());
	in.pop();
	BFS1(root);
	
    inorder(root);
    while(!st1.empty())
    {int num1=st2.front();   st2.pop();
     int num2=st2.front();   st2.pop(); 
    char m=st1.front()[0];
    switch(m)
         {
          case '*': st2.push(num1*num2);
                    break;
          case '-': st2.push(num1-num2);
                    break;
          case '+': st2.push(num1+num2);
                    break;
          case '/': st2.push(num1/num2);
                    break;
         }
         st1.pop();
	 }
    cout<<st2.front();
    return 0;
}	
	
	
