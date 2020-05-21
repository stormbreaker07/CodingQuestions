// #include<bits/stdc++.h>
// using namespace std;

// int main() {

// float a =9.0;
// float b = 100.0;
// float ans = a/b;
// float n;
// cin>>n;
// ans =ans*n;

// cout << fixed << setprecision(2) << ans;





// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;

#define l long long int 


int main() {

int  n;
cin>>n;
l a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
int x[65]= {0};
l w=0,c=0,m=0;
if(n%2!=0)
{n=n-1;}
	for(int i=0;i<n;i=i+2)
	{
		m = a[i]^a[i+1];
		w = log2(m);
		cout<<w<<endl;
		if(x[w]>0)
		{
			c=1;
			break;
		}
		else
		{x[w]++;}
	}
	if(c==1)
	{cout<<"YES";}
	else
	{cout<<"NO";}

	return 0;
}