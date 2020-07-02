#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{ long long int t;
	long double w;
	cin>>t;
	 double phi = (1 + sqrt(5)) / 2; 
 w=round(pow(phi, t) / sqrt(5));
 cout<<fmod(w,10);  
	
	
/*	long long int n;
long double num;
	for( ; ; )
	{cin>>n;
	if(n==1)
	{num=1;}
	else if(n>=2)
	{int w=(log(n/2))/log(2);
	cout<<w<<endl;
	num=pow(2,w);
	cout<<num<<endl;
    }
    }
 */   
	return 0;
}
