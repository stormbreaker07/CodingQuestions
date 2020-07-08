/*
#include<bits/stdc++.h>
using namespace std;


int main()
{
int t,n;
cin>>t;
for(int i=0;i<t;i++)
{
long long int sum=0;
cin>>n;
long int a[n],b[n]; 
for(int j=0;j<n;j++)
{
cin>>a[j];	
}	
for(int j=0;j<n;j++)
{
cin>>b[j];	
}	
sort(a,a+n);
sort(b,b+n);
for(int j=0;j<n;j++)
{
sum += min(a[j],b[j]);	
}
cout<<sum<<endl;
} 
	
	return 0;
}

#include<bits/stdc++.h>
using namespace std;


int main()
{
int t,n,k;
cin>>t;
for(int m=0;m<t;m++)
{
cin>>n>>k;
long int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}	
long int sum=0;
long int w=0;
int j=1;
w=k-(a[n-j]%k);
for(int i=0;i<n-1;i++)
{	
sum = sum+(a[i]%k);
}
if(sum>=w)
{sum = sum-w;}
else if(sum<w)
{sum = sum+(a[n-j]%k);} 
cout<<sum<<endl;
}	
	return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
int t,n,k;
cin>>t;
for(int m=0;m<t;m++)
{
cin>>n>>k;
long int a[n];
long long int sum =0;
for(int i=0;i<n;i++)
{
cin>>a[i];
if(a[i]%k!=0)
{sum = sum + (a[i]%k);}
}	
cout<<sum%k<<endl;
}
	return 0;
}
