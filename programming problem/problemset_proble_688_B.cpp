#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{string s,s1;
	cin>>s;
	s1=s;
	reverse(s.begin(),s.end());
	s=s1+s;
	cout<<s;
	
	return 0;
}
