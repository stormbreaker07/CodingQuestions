#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {int n,k,a;
	  vector<int> v;
	  vector<int> s;
	  vector<int>::iterator it;
	  cin>>n>>k;
	  for(int i=0;i<k;i++)
	  {cin>>a;
	   v.push_back(a);
	  }
	  for(int i=1;i<=n*k;i++)
	  {a=i;
		  it=find(v.begin(),v.end(),a);
		  if(it==v.end())
		  {s.push_back(a);}
		  
	}
	int j=0;
    for(int i=0;i<k;i++)
    {cout<<v[i]<<" ";
		for(int w=j;w<n-1+j;w++)
		{cout<<s[w]<<" ";
		}
		j=n-1+j;
		cout<<endl;
	}
		  
       



return 0;
}
