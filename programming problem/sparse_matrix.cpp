#include<bits/stdc++.h>
using namespace std;

typedef struct node {
int row;
int col;
int value;
node *next; 
}* nodeptr;

nodeptr insert(nodeptr start,int a1,int b1,int c1)
{
if(start == NULL)
{nodeptr n = new node;
n->row = a1;
n->col = b1;
n->value = c1;
n->next =NULL;
start = n;
}		
else
{
nodeptr temp = start;	
nodeptr n = new node;
n->row = a1;
n->col = b1;
n->value = c1;
n->next =NULL;
while(temp->next!=NULL)
{
temp = temp->next;	
}
temp->next = n;
}
return start;
}

nodeptr transverse(nodeptr start ,nodeptr temp)
{
if(start == NULL)
{nodeptr n = new node;
n->row = temp->col;
n->col = temp->row;
n->value = temp->value;
n->next =NULL;
start = n;
}		
else
{
nodeptr temp1 = start;	
if(temp1->row <= temp->row)
{
nodeptr n = new node;
n->row = temp->col;
n->col = temp->row;
n->value = temp->value;
n->next =NULL;
while(temp1->next!=NULL)
{
temp1 = temp1->next;	
}
temp1->next = n;
}	

if(temp1->row >= temp->row)
{
nodeptr n = new node;
n->row = temp->col;
n->col = temp->row;
n->value = temp->value;
while(temp1->next->row < n->row  && temp->next!=NULL)
{
temp1=temp1->next;	
} 
n->next = temp1->next;
temp1->next = n;
}
}
return start;
}


int main()
{
nodeptr start = NULL;


int a[3][5] = {0,0,3,0,1,0,0,0,3,5,1,0,0,0,0};
			 	

for(int i=0;i<3;i++)
{for(int j=0;j<5;j++)
{if(a[i][j] != 0)
{start = insert(start,i,j,a[i][j]);}
}}

	

nodeptr curr = start;	
while(curr!=NULL)
{
cout<<"value "<<curr->value<<" row  "<<curr->row<<" col  "<<curr->col<<endl;
curr=curr->next;
}	
nodeptr temp = start;
nodeptr  start1 = NULL ;
while(temp!=NULL)
{
start1 = transverse(start1,temp);
temp = temp->next;
}	


nodeptr curr1 = start1;	
while(curr1!=NULL)
{
cout<<"value"<<curr1->value<<" ";
cout<<"row"<<curr1->row<<" ";
cout<<"col"<<curr1->col<<" ";
cout<<endl;
curr1=curr1->next;
}	


return 0;	
}



/*
 
int main()
{
int n=10;	
int a[n][n];	
int m = 4;


int a1,b1,value;
for(int i=0;i<m;i++)
{cin>>a1>>b1>>value;
a[a1][b1] = value;	
}



vector<int> v[m];
int c=0;
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if(a[i][j]!=0)
		{v[c].push_back(a[i][j]);
			v[c]push_back(i);
			v[c]push_back(j);
			c++;
		}
	}
}

for(int i=0;i<m;i++)
{cout<<"value"<<v[i][0]<<endl;
cout<<"row"<<v[i][1]<<endl;
cout<<"column"<<v[i][2]<<endl;
}
	
	return 0;
}
*/
 export PATH="$PATH:/home/tanuj/flutter/bin"
 if [ "`id -u`" -eq 0 ]; then
   PATH="..."
else
   PATH="/usr/local/bin:...:[PATH_TO_FLUTTER_GIT_DIRECTORY]/flutter/bin"
fi
export PATH

