
#include <bits/stdc++.h>
using namespace std;

#define l long long int 

int main() 
{
	int n;
	cin >> n;										// Reading input from STDIN
	l a[n],b[n],c[n],sum=0;
	for(int k=0;k<n;k++)
	{
		
		for(l i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(l i=0;i<n;i++)
		{
			cin>>b[i];
		}
		for(l i=0;i<n;i++)
		{
			cin>>c[i];
		}
	}
		l x;
		vector<int> v;
		for(int i=0;i<n;i++)
		{

			x = c[i];			
			while(x>0)
			{
				v.push_back(x&1);
				x/=2;
			}
			x  = b[i];
			int j=0;
			
			while(x>0)
			{
				if(x&1==1)
				{
					v[j] = 0;
				}
				x/=2;
				j++;
			}
			x=0;
			for(int i=0;i<v.size();i++)
			{
				x += v[i]*pow(2,i); 
			}
			x = x^b[i];
			cout<<x;
			sum += x^a[i];
			cout<<sum<<endl;
			v.clear();	
		}
		cout<<sum;
	
return 0;
}

