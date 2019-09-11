#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int x,y,a,b,c=0;
	cin>>x>>y>>a>>b;
	vector<int> s1;
	vector<int> s2;
	if(x<=b)
	{cout<<c;}
	else if(x>b)
	{for(int i=a;i<=x;i++)
		{for(int j=b;j<=y;j++)
			{if(i>j)
				{c=3;
					s1.push_back(i);
					s2.push_back(j);
				}
			}
		}
	}
	if(c==3)
	{cout<<s1.size()<<endl;
		for(int i=0;i<s1.size();i++)
		{cout<<s1[i]<<" "<<s2[i]<<endl;}
	}
	return 0;
}
