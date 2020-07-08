/*
#include<bits/stdc++.h>
using namespace std;



int main()
{
	int t;
	cin>>t;
	int x1,x2,y1,y2;
	for(int i=0;i<t;i++)
	{
		cin>>x1>>y1;
		cin>>x2>>y2;
		
		
		double z = ((y1*x2)+(y2*x1));
		cout<<fixed<<setprecision(2)<<z/(y1+y2)<<endl;
		
	}
	
	
	return 0;
}



#include<bits/stdc++.h>
using namespace std;



int main()
{
	int t;
	cin>>t;
	long int b,g;
	for(int i=0;i<t;i++)
	{
		cin>>b>>g;
		long int x = min(b,g);
		long int y = max(b,g);
		long int ans = x*y + (y-x)*x;
		cout<<ans<<endl;
	}
		
		
	return 0;
}
	
	

#include<bits/stdc++.h>
using namespace std;


long long maxPrimeFactors(long long n) 
{ 
     long long maxPrime = -1; 
  
    while (n % 2 == 0) { 
        maxPrime = 2; 
        n >>= 1;
    } 
  
    for (int i = 3; i <= sqrt(n); i += 2) { 
        while (n % i == 0) { 
            maxPrime = i; 
            n = n / i; 
        } 
    } 
  
   
   
    if (n > 2) 
        maxPrime = n; 
  
    return maxPrime; 
} 


int main() 
{ 
  int t;
  cin>>t;
  
  for(int i=0;i<t;i++)
  {
	  int n,x;
	cin>>n;
	int a[n+1];
	a[n] = 4;
	int mn =0,fact;
	vector<int> v;
	for(int j=0;j<n;j++)
	{
		cin>>x;
		a[j] = maxPrimeFactors(x);
	}
	sort(a,a+n);
	int count=1;
	for(int j=1;j<n+1;j++)
	{
		if(a[j]==a[j-1])
		{count++;}
		else if(a[j]!=a[j-1])
		{
			if(count>mn)
			{mn = count;
				count =1;
				fact = a[j-1];
				v.clear();
			}
			else if(count == mn)
			{v.push_back(a[j-1]);
				count =1;
			}
		}
		
	}
	
	if(v.size()>0)
	{
	sort(v.begin(),v.end());
	cout<<v[v.size()-1]<<endl;
	}
	else
	{cout<<fact<<endl;}
	
		
	}
	 
  
  

return 0;
} 

*/




#include<bits/stdc++.h>
using namespace std;



int main()
{
	int t;
	cin>>t;
	int x1,x2,y1,y2;
	for(int i=0;i<t;i++)
	{
		cin>>x1>>y1;
		cin>>x2>>y2;
		
		
		double z = ((y1*x2)+(y2*x1));
		cout<<fixed<<setprecision(10)<<double(z/(y1+y2))<<endl;
		
	}
	
	
	return 0;
}



