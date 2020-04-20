#include<bits/stdc++.h>
using namespace std;
int main()  {
	int n;
	for( ; ; )
	{cin>>n;
		if(n==0)
		{break;}
		int a[n+1];
		for(int j=1;j<=n;j++)
		{
			cin>>a[j];
		}
		int ind;
		int b[n+1];
		for(int j=1;j<=n;j++)
		{
			ind = a[j];
			b[ind] = j;
		}
		int c =0;
		for(int j=1;j<=n;j++)
		{
			if(a[j]!=b[j])
			{c=1;
				cout<<"not ambiguous"<<endl;
			break;
			}
			} if(c==0) {cout<<"ambiguous"<<endl;}
		
	}
	
	
	return 0;
}
