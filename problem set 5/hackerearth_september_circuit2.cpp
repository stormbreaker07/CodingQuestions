#include <bits/stdc++.h>
using namespace std;

int main()
{long long int d,om,on,od,cm,cn,co,cp,ans1,ans2;
	cin>>d;
	cin>>om>>on>>od;
	cin>>cm>>cn>>co>>cp;
	ans2=om+(d-on)*od;
	ans1=cn+(d/cm)*co+d*cp;
	if(ans1>=ans2)
	{cout<<"Online Taxi";}
	else
	{cout<<"Classic Taxi";}
	
return 0;
}	
