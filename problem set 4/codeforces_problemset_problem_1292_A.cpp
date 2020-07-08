#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,q,i,j;
cin>>n>>q;
int a1[n]={0};
int a2[n]={0};
for(int k=0;k<q;k++)
{
cin>>i>>j;	
if(i==1 && j<=n)
{
if(a1[j-1]==0)
{cout<<"NO"<<endl;
a1[j-1]=1;		
}
else if(a1[j-1]==1)
{
cout<<"YES"<<endl;
a1[j-1]=0;}
}	

if(i==2 && j<n)
{
if(a2[j-1]==0)
{cout<<"NO"<<endl;
a2[j-1]=1;		
}
else if(a1[j-1]==1)
{
cout<<"YES"<<endl;
a2[j-1]=0;}
}

}	
	return 0;
}
