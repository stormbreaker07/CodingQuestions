
#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{string s;
	int c=0;
	for(int i=0;i<8;i++)
	{cin>>s;
		for(int j=0;j<8;j++)
		{if(s[j]==s[j+1])
			{c=3;
				break;
			}
		}
		if(c==3)
		{break;}
	}
	if(c==3)
	{cout<<"NO";}
	else
	{cout<<"YES";}
	

return 0;
}


#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{
	int x,n,c=0;
	cin>>x;
	int a[5001]={0};
	for(int i=0;i<x;i++)
	{cin>>n;
	a[n]=n;	
	}
	
	for(int j=1;j<=x;j++)
	{if(a[j]==0)
		{c++;}
	}
	cout<<c;
		
	return 0;
}
