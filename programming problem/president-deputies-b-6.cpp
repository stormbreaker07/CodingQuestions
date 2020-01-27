#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{set<char> s;
	int x,y;
	char c;
	char w='.';
	cin>>x>>y>>c;
	char a[x][y];
	for(int i=0;i<x;i++){
	  for(int j=0;j<y;j++)
		{cin>>a[i][j];}}
	for(int i=0;i<x;i++){
	  for(int j=0;j<y;j++){
		if(a[i][j]==c)
		{if(i<x-1 && a[i+1][j]!=c &&  a[i+1][j]!=w)
		{s.insert(a[i+1][j]);}
		if(j<y-1  && a[i][j+1]!=c && a[i][j+1]!=w)
		{s.insert(a[i][j+1]);}
		if(j>0  && a[i][j-1]!=c && a[i][j-1]!=w)
		{s.insert(a[i][j-1]);}
		if(i>0  && a[i-1][j]!=w && a[i-1][j]!=c)
		{s.insert(a[i-1][j]);}
		}}}
	cout<<s.size();			
	return 0;
}
