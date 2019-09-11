#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct node{
	int data;
	node* next;
}* nodeptr;
nodeptr temp;
nodeptr curr;
nodeptr head;


int main()
{   int t,idata;
	head=NULL;
	temp=NULL;
	curr=NULL;
	cin>>t;
	for(int i=0;i<t;i++)
	{   cin>>idata;
		nodeptr n=new node;
		n->data=idata;
		n->next=NULL;
		
		if(head==NULL)
		{head=n;}
	    else
	    {curr=head;
			while(curr->next!=NULL)
			{curr=curr->next;}
			curr->next=n;
		}
	}
	/*
    int q,num,pos;
    cin>>q;
    for(int i=0;i<q;i++)
    {cin>>num>>pos;
		nodeptr n=new node;
		n->data=num;
		n->next=NULL;
		
	if(pos==1)	
    {n->next=head;
		head=n;
	}
	else
	{
		curr=head;
		for(int j=1;j<pos-1;j++)
		{curr=curr->next;}
		temp=curr->next;
		curr->next=n;
		n->next=temp;
	}    

    
	curr=head;
	while(curr!=NULL)
	{cout<<curr->data<<endl;
		curr=curr->next;}
	}	
		*/
	int pos1;
	cin>>pos1;
	nodeptr delt=NULL; 
	curr=head;
	if(pos1>1)
	{for(int i=1;i<pos1-1;i++)
	{curr=curr->next;}
	delt=curr->next;
	temp=curr;
	temp->next=delt->next;
	delete delt;
    }
    else if(pos1==1)
    {head=head->next;
	}
		curr=head;
	while(curr!=NULL)
	{cout<<curr->data<<endl;
		curr=curr->next;
	}	
		
		
		
		
		
		return 0;
	}
	
		
		
		
