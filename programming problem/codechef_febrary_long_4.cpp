/* chef and railway station*/

/****killing like kamikaze****/
                      
     /*tanuj yadav*/                

/**********************/


#include<bits/stdc++.h>
using namespace std;

/*
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
long int n,p;
cin>>n>>p;
for(int j=0;j<n;j++)
{
cin>>n;
if(n%2!=0)
{
}

}
return 0;
}
*/

int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{int n,m;
cin>>n>>m;
vector<int>x1;
vector<int>y1;
long int a;
vector<int> x2(1000000,0);
vector<int> y2(1000000,0);
int countx1=0,county1=0;
for(int j=0;j<n;j++)
{
cin>>a;
if(a!=0)
{x1.push_back(a);
if(a<0)
{x2[0-a]=1;	}    
}
if(a==0)
{countx1++;}
}
int count=0;	
for(int j=0;j<m;j++)
{	
cin>>a;	
if(a!=0)
{
y1.push_back(a);
if(a<0)
{y2[0-a]=1;}
}
if(a==0)
{county1++;}
}

/*finding pair*/


long long int a1;
long int nw;
for(unsigned int j=0;j<y1.size();j++)
{	
a1=y1[j]*y1[j];
for(unsigned int k=0;k<x1.size();k++)
{
if(a>0 && x1[k]>0)
{	
	if(a1>=x1[k] && a1%x1[k]==0)
	{
	nw = a1/x1[k];
	if(nw<100000)
	{
	if(x2[nw] == 1)
	{count++;
	cout<<x1[k]<<" "<<a1<<" "<<nw<<endl;}
	}}
}
}	}
for(unsigned int j=0;j<x1.size();j++)
{
a1=x1[j]*x1[j];
for(unsigned int k=0;k<y1.size();k++)
{
if(y1[k]>0)
{	
	if(a1>=y1[k] && a1%y1[k]==0)
	{
	nw = a1/y1[k];
	if(nw<100000)
	{if(y2[nw] == 1)
	{count++;
		cout<<y1[k]<<" "<<a1<<" "<<nw<<endl;}
	}
	}
}
}	}
if(countx1>0 || county1>0)
{count = count + x1.size()*y1.size();}



cout<<count<<endl;
}
	
	
	
	return 0;
}
