/*
#include<bits/stdc++.h>
using namespace std;


int main()
{
int n;
cin>>n;
long int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];	
}
sort(a,a+n);
int count =0;
for(int i=0;i<n;i++)
{
	if(a[i]<a[n-1-i])
	{
	count++;	
	}
	else
	{break;
	}	
}
cout<<count;

	
	return 0;
}

*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
int n,fir,sec;
cin>>n;
string pre,post;
for(int i=10;i<n;i++)
{
pre = to_string(i);	
cout<<pre[0]<<" "<<pre[pre.size()-1]<<endl;
}	

return 0;

}
