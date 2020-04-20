/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[5] = {100,20,10,5,1};
long int sum;
cin>>sum;

int w;
long int count =0;
for(int i=0;i<5;i++)
{
	if(sum>=a[i])
	{
		w = sum/a[i];
		sum = sum%a[i];
		count +=w;
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

int n;
cin>>n;
int count =1;
long int mx=0;
long int a[n];

for(int i=0;i<n;i++)
{
	cin>>a[i];
}    
for(int i=1;i<n;i++)
{
	if(a[i-1]<=a[i])
	{ 
		count++;
		
	}
	else
	{
		if(count>mx)
		{
			mx = count;
		}
	count=1;
	}
}
if(count>mx)
{mx = count;}
cout<<mx;



    
    return 0;
}
