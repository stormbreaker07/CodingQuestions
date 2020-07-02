#include<bits/stdc++.h>

using namespace std;

int main()

{
int n;
cin>>n;
long long int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];

}
vector<long long int> v;	
int i=0;
int j=n-1;	
if(n>1)
{long long int pre=a[i],suff=a[j];
if(pre == suff)
{
v.push_back(pre);
i++;
pre+=a[i];	
}
while(i<j)
{
if(pre<suff)
{i++;
pre+=a[i];}
else if(pre > suff)n
{j--;
suff+=a[j];
}	
else if(pre == suff)
{
v.push_back(pre);
i++;
pre+=a[i];	
}

}
sort(v.begin(),v.end(),greater<long long int>());
if(v.size()>0)	
{cout<<v[0];}
else
{cout<<0;}	
}
else 
{cout<<"0";}	
	
	return 0;
}
