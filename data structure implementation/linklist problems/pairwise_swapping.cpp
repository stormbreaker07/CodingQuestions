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

void print(nodeptr head)
{   
	if(head!=NULL)
	{cout<<head->data<<" ";
	print(head->next);}
else
{return;}
}
int nom;
void swapping(nodeptr p)
{
if(p!=NULL && p->next!=NULL)
{nom=p->data;
	p->data=p->next->data;
p->next->data=nom;	
swapping(p->next->next);
}
else
{return;}

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
	swapping(head);
	cout<<"and the list will be: ";
	print(head);
	
	return 0;
}

