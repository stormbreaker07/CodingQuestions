#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;
int c=0;
typedef struct node{
	int data;
	node* next;
}* nodeptr;
nodeptr head;
nodeptr curr;
nodeptr temp;
stack<int> s;

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

void fill_stack(nodeptr p)
{
while(p!=NULL)
{s.push(p->data);
p=p->next;
}

}

bool check_pel(nodeptr p)
{
	while(p->next!=NULL)
	{
		if(p->data==s.top())
		{p=p->next;
			s.pop();
		}
		else
		{return false;}
     }
    return true; 
 }

int main()
{
	head=NULL;
temp=NULL;
curr=NULL;	
	int n,num;
	cin>>n;
	for(int i=0;i<n;i++)
	{cin>>num;
	insertion2(num);
	}
	fill_stack(head);
	bool t;
	t=check_pel(head);
	if(t==0)
	{cout<<"False";}
	else
	{cout<<"True";}
return 0;
}	
