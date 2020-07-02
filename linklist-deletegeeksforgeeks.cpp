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


void print(nodeptr head)
{   if(head!=NULL)
	{cout<<head->data<<" ";
	print(head->next);}
else
{return;}

}
	

void delete1(nodeptr p)
{head=p;
	if(p==NULL)
	{return;}
	else
	{p=p->next;
		delete1(p);
	}
}
int con=0;
void count(nodeptr p)
{head=p;
	if(p!=NULL)
	{con++;
		count(p->next);
	}
	else
	{return ;}
}
	


int main()
{
	int n,num;
	cin>>n;
	for(int i=0;i<n;i++)
	{cin>>num;
	insertion2(num);
    }
    print(head);
    /*
    delete1(head);	
	print(head);
	*/
	
	count(head);
	cout<<con;
return 0;
}
