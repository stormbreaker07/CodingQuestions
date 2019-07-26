#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;


int main()
{int t,n,k;
cin>>t;
for(int i=0;i<t;i++)
{cin>>n;
long long int a[n],num;
for(int i=0;i<n;i++)
{cin>>a[i];}
cin>>k;
num=a[k-1];
sort(a,a+n);
for(int i=0;i<n;i++)
{if(a[i]==num)
	{cout<<i+1<<endl;
		break;}
		}
	}
return 0;
}
