#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct node{
		int data;
		node* next;
	 }* nodePtr;

nodePtr head;
nodePtr curr;
nodePtr temp;


int main()
{int t,w;
head=NULL;
curr=NULL;
temp=NULL;



/*for adding element in a linklist*/
cout<<"number of adding element in a linklist: ";
cin>>w;
for(int i=0;i<w;i++)
{cin>>t;
nodePtr n=new node;
	n->next=NULL;
	n->data=t;
    
    if(head!=NULL)
    {curr=head;
		while(curr->next != NULL)
		{curr=curr->next;}
		curr->next = n;
	}
	else 
	{head=n;
	}
}





int d;
cout<<"no. of element to delete: ";
cin>>w;

/*for deleting an element*/

for(int i=0;i<w;i++)
{cin>>d;
nodePtr delptr=NULL;
curr=head;
temp=head;
while(curr!=NULL && curr->data!=d)
{temp = curr;
	curr = curr->next;
}
if(curr==NULL)
{cout<<d<<"was not present in lsit\n";
delete delptr; 
}
else
{delptr = curr;
	curr=curr->next;
	temp->next=curr;
	delete delptr;
	cout<<"the element is deleted from the list/n";
}     
}



/*adding alement in a start of a linklist*/
cin>>t;
nodePtr n=new node;
n->data=t;
curr=head;
curr=curr->next;
head=n;
n->next=curr;



/*printing element of linklist*/
curr=head;
while(curr != NULL)
{cout<<curr->data<<endl;
	curr=curr->next;
}



	
	
	return 0;
}
