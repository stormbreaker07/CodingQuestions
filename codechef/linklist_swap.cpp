#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;
int n1,n2,n;
typedef struct node{
	int data;
	node* next;
}* nodeptr;
nodeptr head;
nodeptr curr1;
nodeptr curr;
nodeptr curr2;
nodeptr up1;
nodeptr up2;
nodeptr pre1;
nodeptr pre2;

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

void print(nodeptr head)
{   
	if(head!=NULL)
	{cout<<head->data<<" ";
	print(head->next);}
else
{return;}
}

void swaping(nodeptr p)
{
for(int i=1;i<=n;i++)
{	
if(i==n1-1)
{pre1=p;
up1=p->next->next;
curr1=p->next;	
}
if(i==n2-1)	
{pre2=p;
up2=p->next->next;
curr2=p->next;	
}
p=p->next;
}
pre1->next=curr2;
curr2->next=up1;	
pre2->next=curr1;
curr1->next=up2;	
}	


int main()
{head=NULL;
	
	int num;
	cin>>n;
	for(int i=0;i<n;i++)
	{cin>>num;
	insertion2(num);
	}
	print(head);
	cout<<endl;
	cin>>n1>>n2;
	swaping(head);
	cout<<"and the list will be: ";
	print(head);
	
	return 0;
}
