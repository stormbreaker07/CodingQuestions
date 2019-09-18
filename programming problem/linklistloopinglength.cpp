
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
vector<int> v;
nodeptr rabb;
nodeptr turt;
int j=0;
void find_if_loop(nodeptr p)
{turt=head;
rabb=head;
while(turt->next!=NULL && rabb->next->next!=NULL)
{j++;
	turt=turt->next;
rabb=rabb->next->next;
if(turt->data==rabb->data)
{v.push_back(j);
	c++;
}
if(c==2)
{cout<<"yes it a looping linklist ";
	break;}
}
}

int main()
{head=NULL;
temp=NULL;
curr=NULL;	
	int n,num,len;
	cin>>n;
	for(int i=0;i<n;i++)
	{cin>>num;
		insertion2(num);
	}
	createloop(head);
	find_if_loop(head);
	len=v[1]-v[0];
	cout<<len;
	return 0;
	
}
