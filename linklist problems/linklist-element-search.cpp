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
int con=0;
void search(int num)
{nodeptr n=new node;
	n->data=num;
	n->next=NULL;
curr=head;
	while(curr->next!=NULL)
	{
		if(curr->data==n->data)
		{temp=curr;
			break;}
			curr=curr->next;
	}
	curr=head;
	while(curr!=temp)
	{con++;
		curr=curr->next;
	}
}
	
	

int main()
{
head=NULL;
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
    cin>>num;
    search(num);
    cout<<con+1;


return 0;
}
