	#include <bits/stdc++.h>
	#include <iostream>
	#include <cstdlib>
	using namespace std;
#define max_size 101
int stak[max_size];
int top=-1;

void push(int num)
{
if(top==max_size-1)
{cout<<"stack overflow"<<" ";}	
else	
{stak[++top]=num;
}
}

void pop()
{if(top==-1)
	{cout<<"underflow"<<" ";}
else
    {top=top-1;}
}

void Top(int num)
{cout<<stak[top]<<" ";}

void print()
{for(int i=0;i<=top;i++)
	{cout<<stak[i]<<" ";}
}

int main()
{
push(2);
print();	
cout<<endl;
push(3);
print();
cout<<endl;
push(5);
print();
cout<<endl;
pop();
print();
cout<<endl;
push(8);
print();
cout<<endl;
push(12);
print();-
return 0;
}
