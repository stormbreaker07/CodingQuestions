#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
{int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{long long int n,w,min=1000000000,max=0;
		cin>>n;
		for(long long int j=1;j<=sqrt(n);j++)
		{w=n/j;
			if(w*j==n)
			{max=abs(w-j);
				if(max<min)
				{min=max;}
			}
		}
	cout<<min<<endl;
	}
	
return 0;
}	
		
