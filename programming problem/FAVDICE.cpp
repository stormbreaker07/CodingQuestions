#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{

	double ans=0;
	double n;
	cin>>n;
	for(double i = 1.0 ; i<=n ; i++)
	{
	ans +=  1.0/(i*1.0);
	}
	ans = ans*n;
	cout<<fixed<<setprecision(2)<<ans<<endl;


}	
	
	return 0;
}