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
nodeptr ne;
void operation(nodeptr p)
{curr=p;
	while(curr->next->next!=NULL)
	{curr=curr->next;
	}
	ne=curr->next;
    curr->next=NULL;
    head=ne;
    ne->next=p;
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
	operation(head);
	cout<<"and the list will be: "<<endl;
	print(head);
	
	return 0;
}


