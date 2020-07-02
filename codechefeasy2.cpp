#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;


int main()
{long long int n;
int t,g,i,q;
cin>>t;
for(int w=0;w<t;w++)
{cin>>g;
	for(int j=0;j<g;j++)
{    cin>>q>>n>>i;
	if(n%2==0)
	{cout<<n/2<<endl;}
	if(n%2!=0)
	{if(i==q)
		{n=n/2;
			cout<<n<<endl;}
	else if(i!=q)
	    {n=n/2+1;
		    cout<<n<<endl;}
	}
}
}
return 0;
}
