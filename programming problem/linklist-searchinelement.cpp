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
int con=0;
void search(int n)
{curr=head;
	for(int i=1;i<n;i++)
	{curr=curr->next;}
	con=curr->data;
}

int main()
{curr=NULL;
	head=NULL;
	int n,num;
	cin>>n;
	for(int i=0;i<n;i++)
	{cin>>num;
		insertion2(num);
	}
	cin>>num;
	search(num);
	cout<<con;
	return 0;
}

