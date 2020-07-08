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

void createloop(nodeptr p)
{
for(int i=1;i<3;i++)
{p=p->next;}
curr=p;
while(curr->next!=NULL)
{curr=curr->next;}
curr->next=p;	
}

void print(nodeptr head)
{   if(head!=NULL)
	{cout<<head->data<<" ";
	print(head->next);}
else
{return;}
}
nodeptr rabb;
nodeptr turt;

void find_if_loop(nodeptr p)
{turt=head;
rabb=head;
while(turt->next!=NULL && rabb->next->next!=NULL)
{turt=turt->next;
rabb=rabb->next->next;
if(turt->data==rabb->data)
{cout<<"yes it a looping linklist ";
	break;}
}
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
createloop(head);
find_if_loop(head);	
	return 0;
}

