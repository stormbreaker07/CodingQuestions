
#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct node
{
	int data;
	node* next;
}* nodeptr;

nodeptr curr=NULL;
nodeptr temp=NULL;
nodeptr head=NULL;
	
void push(int num)
{nodeptr n=new node;
	n->data=num;
	
n->next=head;
head=n;
return ;
}

void pop()
{
temp=head;
head=head->next;
free(temp);
return ;
}

void print()
{curr=head;
while(curr!=NULL)
{cout<<curr->data<<" ";
	curr=curr->next;
}
cout<<endl;
return ;
}	
	
void top()
{
cout<<head->data<<endl;
return ;
}		
	

int main()
{
int n,num;
cin>>n;	
for(int i=0;i<n;i++)	
{cin>>num;	
push(num);
print();	
}
pop();
print();	
pop();
print();	
push(12);
print();	
cin>>n;	
for(int i=0;i<n;i++)	
{cin>>num;	
push(num);
print();	
}
	
top();
pop();
top();
	
return 0;
}	
