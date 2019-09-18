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

if(rear!=max_size)
{a[++rear]=num;}	
}

void deletion()
{if(front!=rear)
{front++;}
}

void print()
{for(int i=front;i<=rear;i++)
{cout<<a[i]<<" ";
}
cout<<endl;
}
  
   
int main()
{
int n,num;
cin>>n;
for(int i=0;i<n;i++)
{cin>>num;
insertion(num);
print();
}
deletion();		
deletion();
deletion();
print();
	
	return 0;
}
