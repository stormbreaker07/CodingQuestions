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

void insertion1(int num)
{nodeptr n=new node;
	n->data=num;
curr=head;
if(head==NULL)
{head=n;}
else
{n->next=curr;
head=n;
}
}		




void print(nodeptr head)
{   if(head!=NULL)
	{cout<<head->data<<" ";
	print(head->next);}
else
{return;}

}
	
	
	


int main()
{
	
	int t,n,num,pos;
	cin>>t;
	for(int i=0;i<t;i++)
	{cin>>n;
		head=NULL;
		curr=NULL;
		temp=NULL;	
		for(int j=0;j<n;j++)
		{cin>>num>>pos;
			if(pos==0)
			{insertion1(num);}
			if(pos==1)
			{insertion2(num);}
		}
	print(head);
	cout<<endl;
	}
		
return 0;
}				
	
