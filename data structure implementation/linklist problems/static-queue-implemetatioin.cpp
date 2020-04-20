#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;
#define max_size 101
int a[max_size];
int top=-1;
int front=-1,rear=-1;
   

void insertion(int num)
{front=0;

if(rear!=max_size-1)
{a[++rear]=num;}	
else
{cout<<"queue overflow";}
}

void deletion_from_front()
{if(front!=rear)
{front++;}
}

void deletion_from_rear()
{if(front!=rear)
	{rear--;}
}

void print()
{for(int i=front;i<=rear;i++)
{cout<<a[i]<<" ";
}
cout<<endl;
}
  
   
int main()
{
int num;
cout<<"enter your choice : "<<endl;
cout<<"press 1 for insertion"<<endl;
cout<<"press 2 for delete from front"<<endl;
cout<<"press 3 for delete from end"<<endl;
cout<<"press 4 for print"<<endl;
cout<<"press 5 for STOP process"<<endl;
int choice;
cin>>choice;
bool t=true;
while(t)
{
switch(choice)
{
	case 1: cin>>num;
	        insertion(num);
	        break;
	case 2: deletion_from_front();
			break;
	case 3: deletion_from_front();
			break;
	case 4: print();
 	        break;
 	case 5: t=false;
 	        break;
}
}

	
	return 0;
}
