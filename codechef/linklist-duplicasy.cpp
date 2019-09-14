#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct node{
	int data;
	node* next;
}* nodeptr;
nodeptr head;
nodeptr temp;
nodeptr curr;


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

int a;	
void rem_duplicate(nodeptr p)
{a=p->data;
while(p->next!=NULL)
{if(p->next->data==a)
	{
		curr=p;
		temp=p->next->next;
		curr->next=temp;	
	}
	else
	{a=p->next->data;
	p=p->next;}

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


int main()
{head=NULL;
	curr=NULL;
	temp=NULL;
	
	int n,num;
	cin>>n;
	for(int i=0;i<n;i++)
	{cin>>num;
	insertion2(num);
	}
	print(head);
	cout<<endl;
	rem_duplicate(head);
	cout<<"and the list will be: ";
	print(head);
	
	return 0;
}
