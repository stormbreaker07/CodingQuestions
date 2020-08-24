#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	long int x1,x2;
	while(t--)
	{
		cin>>x1>>x2;
		long int len1 = x1/9;
		if(x1%9!=0)
		{
			len1++;
		}
		long int len2 = x2/9;
		if(x2%9!=0)
		{
			len2++;
		}
		
		if(len1 <len2)
		{
			cout<<0<<" "<<len1<<endl;
		}
		else if(len1 >= len2)
		{
			cout<<1<<" "<<len2<<endl;
		}
		
	} 
	
return 0;	
}
