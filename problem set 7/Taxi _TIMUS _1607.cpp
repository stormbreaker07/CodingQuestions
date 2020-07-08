#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{ int a,b,n1,n2,ans,m;
	cin>>a>>n1>>b>>n2;
	m=0;
		while(true)
		{if(a+n1*m>=b-n2*m)
		{ans=a+n1*m;
			break;}
		if(b-n2*m<=a+(n1*(m+1)))
		{ans=b-n2*m;
			break;}			
		m++;
	    }
    cout<<ans;
    
    return 0;
}
