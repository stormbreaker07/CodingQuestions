
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


int n,c,con=0;
void loop(nodeptr head)
{curr=head;
temp=curr->next;
n=curr->data;
if(temp->next==NULL)
{return;}
c=temp->next->data;
if(n==c)
{con++;
loop(head->next);
}
}

	


int main()
{int n,num;
	cin>>n;
	for(int i=0;i<n;i++)
	{cin>>num;
		insertion2(num);}
        loop(head);
        
        cout<<con;	
	return 0;
}
