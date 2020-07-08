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



void print(nodeptr head)
{   if(head!=NULL)
	{cout<<head->data<<" ";
	print(head->next);}
else
{return;}

}
	
	
void delete1(int num)
{curr=head;
	for(int i=0;i<num-2;i++)
	{curr=curr->next;}
	temp=curr;
	curr=curr->next->next;
	temp->next=curr;
}


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

int main()
{
	int t,n,num,del;
	cin>>t;
	for(int i=0;i<t;i++)
	{cin>>n;
		temp=NULL;
		curr=NULL;
		head=NULL;
		for(int j=0;j<n;j++)
		{cin>>num;
		insertion2(num);
		}
		cin>>del;
		delete1(del);
		print(head);
	}
return 0;
}
