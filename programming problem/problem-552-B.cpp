#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{ long long int sum=0;
 long long int n,num;
 cin>>n;
for( ; ; )
{if(n>=1 && n<=9)
	{sum+=n;
	break;}
else if(n>=10 && n<=99)
	{num=(n-10)+1;
	sum+=num*2;
	n=9;}
else if(n>=100 && n<=999)
	{num=(n-100)+1;
	sum+=num*3;
	n=99;}
else if(n>=1000 && n<=9999)
	{num=(n-1000)+1;
	sum+=num*4;
	n=999;}
else if(n>=10000 && n<=99999)
	{num=(n-10000)+1;
	sum+=num*5;
	n=9999;}
else if(n>=100000 && n<=999999)
	{num=(n-100000)+1;
	sum+=num*6;
	n=99999;}	
else if(n>=1000000 && n<=9999999)
	{num=(n-1000000)+1;
	sum+=num*7;
	n=999999;}
else if(n>=10000000 && n<=99999999)
	{num=(n-10000000)+1;
	sum+=num*8;
	n=9999999;}
else if(n>=100000000 && n<=999999999)
	{num=(n-100000000)+1;
	sum+=num*9;
	n=99999999;}
else if(n>=1000000000 && n<=9999999999)
	{num=(n-1000000000)+1;
	sum+=num*10;
	n=999999999;}
}
cout<<sum;
 return 0;
 }
