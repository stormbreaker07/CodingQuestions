/*i am the beast bigger than thanos bigger than galactus********\
 *             i am the STORM BREAKER                           *
 *                     tanuj                                    *
 *         Adding Reversed Numbers UVA 713                      *
 *   programming is a beauty gifted to us so love this gift     *
 */

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{long long int y,m,tx,i,j,w,marry=0; 
cin>>tx;
string s1,s2;
for(i=0;i<tx;i++)
{cin>>s1>>s2;
	int carry=0;
	y=min(s1.length(),s2.length());
	m=max(s1.length(),s2.length());
	vector<int> a;
	for(j=0;j<y;j++)
	{w=(s1[j]-'0')+(s2[j]-'0')+carry;
		carry=w/10;
		w=w%10;
		a.push_back(w);
	}
	int c=0;
	if(s1.length()>=s2.length())
	{c=1;}
	else
	{c=2;}
	for(j=y;j<m;j++)
	{if(c==1)
		{w=(s1[j]-'0')+carry;
		carry=w/10;
		w=w%10;
		a.push_back(w);
	}
	else if(c==2)
	{w=(s2[j]-'0')+carry;
		carry=w/10;
		w=w%10;
		a.push_back(w);
	}
	}
	if(carry!=0)
	{a.push_back(carry);}
	for(j=0;j<a.size();j++)
	{if(a[j]!=0)
		{carry=j;
			break;}
	}
	for(j=0;j<a.size();j++)
	{	
	if(a[a.size()-j-1]!=0)
	{marry=a.size()-j-1;
		break;}
		}
	for(j=carry;j<=marry;j++)
	{cout<<a[j];}
	cout<<endl;
}
	return 0;
} 
