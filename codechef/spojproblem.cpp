#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int t,ng,nm,w,maxg=0,maxm=0;
cin>>t;
for(int i=0;i<t;i++)
{maxg=0;
maxm=0;
	cin>>ng>>nm;
	for(int j=0;j<ng;j++)
	{cin>>w;
		if(w>maxg)
		{maxg=w;}
	}
	for(int j=0;j<nm;j++)
	{cin>>w;
		if(w>maxm) 
		{maxm=w;}
	}
    if(maxg>=maxm)
    {cout<<"Godzilla"<<endl;}
    else if(maxg<maxm)
    {cout<<"MechaGodzilla"<<endl;}
}
return 0;
}
