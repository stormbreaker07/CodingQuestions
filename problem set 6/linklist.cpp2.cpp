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

void print(nodeptr head)
{
   if(head!=NULL)
	{cout<<head->data<<" ";
		print(head->next);
	}
else
{cout<<endl;
	return ;}

}
nodeptr q;
void reverse(nodeptr p)
{
	if(p->next==NULL)
	{head=p;
		return;
	}
 	reverse(p->next);
 	q=p->next;
 	q->next=p;
 	/*can also be written as p->next->next=p;*/
 	p->next=NULL;
}
 	
	
	

int main()
{   
	int t,idata;
	head=NULL;
	temp=NULL;
	curr=NULL;
	cin>>t;
	/*adding element in linklist*/
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
	print(head);
			
	/* inserting element using index */
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
	
	/*delete element by index*/
	/*
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
		*/
    
    /*reverse a number*/
    /*
    nodeptr prev=NULL;
    nodeptr curr=head;
    nodeptr after;
    while(curr!=NULL)
    {after=curr->next;
		curr->next=prev;
		prev=curr;
		curr=after;
	}
	head=prev;
	*/
	/*curr=head;
	while(curr!=NULL)
	{cout<<curr->data<<endl;
		curr=curr->next;
	}
		*/	
    /*print the linklist*/
    
    print(head);
    reverse(head);
	 print(head);	
	*/	return 0;
	}
		
		
