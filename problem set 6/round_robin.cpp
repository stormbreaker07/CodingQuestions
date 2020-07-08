#include<bits/stdc++.h>
using namespace std;

int main()
{
queue<int> q;	
int tq;
cin>>tq;
int n;
cin>>n;

int a[n],b[n];
for(int i=0;i<n;i++)
{
	cin>>a[i]>>b[i];
}
for(int i=0;i<n;i++)
{
	int w= a[i];
if(b[i]<=2)
{sum+=b[i];
	b[i] =0;}
else if(b[i]>2)
{b[i] = b[i]-2;
sum+=2;}


if(b[i] == 0)
{c[i] = sum;}





}




	
	return 0;
}
