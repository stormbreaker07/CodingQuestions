#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct node{
	int data;
	node* next;
}* nodeptr;
nodeptr head;
nodeptr curr;
nodeptr temp;

void insertion2(int num)
{nodeptr n=new node;
	n->data=num;
curr=head;	
if(head==NULL)
{head=n;
	return;}
else
{while(curr->next!=NULL)
	{curr=curr->next;}
	curr->next=n;
}
}	
int len=0;
void middle(nodeptr head)
{if(head!=NULL)
	{len++;
		middle(head->next);}
	else
	{return;}
}
int middle1;
void ans(int mid)
{
 curr=head;
 for(int i=1;i<mid;i++)
 {curr=curr->next;}
 middle1=curr->data;
 }

void print(nodeptr head)
{   if(head!=NULL)
	{cout<<head->data<<" ";
	print(head->next);}
else
{return;}

}

int main()
{head=NULL;
curr=NULL;
	int n,num,mid;
	cin>>n;
	for(int i=0;i<n;i++)
	{cin>>num;
	insertion2(num);}
	print(head);
	cout<<endl;
	middle(head);
	if(len%2==0)
	{mid=len/2;}
	else
	{mid=(len/2)+1;}
	ans(mid);
	cout<<middle1;
		
		
	return 0;
}
