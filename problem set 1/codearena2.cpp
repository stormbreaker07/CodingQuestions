/*
#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
int n,num;
cin>>n;
long int even=0,odd1=0;
vector<int> odd;
for(int i=0;i<n;i++)
{
cin>>num;	
if(num%2!=0)
{odd.push_back(num);
	odd1 = odd1+num;}
else
{even = even+num;
}
}
sort(odd.begin(),odd.end(),greater<int>());
if(odd.size()==0)
{cout<<":(";}
else if(odd.size()!=0)
{if(odd.size()%2!=0)
	{even = even+odd1;
		cout<<even;}
else
{even = even+odd1;
even = even-odd[odd.size()-1];	
	cout<<even;
}
}
	
	return 0;
}*/
#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main()
 {
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{cin>>n;
	int a[n];
	for(int j=0;j<n;j++)
	   {cin>>a[j];}
	 long int sum1=0,sum2=0;  
	 int pre =0;
	 int pos=n-1;
	 for(int j=0;j<=n/2;j++)
	 {
	  if(pre<pos)   
	  {sum1+=a[pre];
	  pre++;
	  if(sum1>sum2)
	  {
	  sum2+=2*a[pos];
	  pos--;
	  }
	  }
	  if(pre==pos)
	  {cout<<pre<<' '<<n-pre<<endl;
	  }   
	}
	}
return 0;
}

