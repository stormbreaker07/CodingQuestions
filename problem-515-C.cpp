#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{int n;
	cin>>n;
	string num,s;
	cin>>num;	
	
string a[10];
a[2]="2";
a[3]="3";
a[4]="322";
a[5]="5";
a[6]="53";
a[7]="7";
a[8]="7222";
a[9]="7332";

for(int i=0;i<n;i++)
{if((num[i]-'0')!=0 ||	(num[i]-'0')!=1 )
	{s=s+a[num[i]-'0'];
	}
}
sort(s.begin(),s.end(),greater<char>());
cout<<s;
return 0;
}
