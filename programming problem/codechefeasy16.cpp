#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
{long int t,n,sum=0;
char num;
	cin>>t;
	for(int i=0;i<t;i++)
	{cin>>n;
		sum=0;
		int k=1;
		for(int j=0;j<n;j++)
		{cin>>num;
			if(num=='1')
			{sum+=k;
				k++;
			}
		}
		cout<<sum<<endl;
	}
	
	return 0;
}
				
				
