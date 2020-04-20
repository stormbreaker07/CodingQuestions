
#include <bits/stdc++.h>

using namespace std;

long long int m = int(pow(10,9))+7;


long long int fun(long long int a[],long long int x)
{
if(x==1 || x==2 || x==0)
{return x+1;}

if(a[x]!=0)
{return a[x]%m;}

a[x] = (fun(a,x-1) + fun(a,x-2))%m;
return a[x];
}




int main() {
	int t,n;
	cin >> t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    long long int *a;
	    a=(long long int*)calloc(n+1,sizeof(long long int));
	    cout<<fun(a,n);
	    
	}

    
    return 0;
}
