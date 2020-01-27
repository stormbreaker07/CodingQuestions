#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
int main()
{int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	int ele;
	cin>>ele;
	sort(a,a+n);
	int first=0;
	int last=n-1;
	int mid;
	for(int i=0;i<n;i++)
	{
		mid=(first+last)/2;
		if(first<=last)
		{if(a[mid]==ele)
			{cout<<"found "<<mid;
				break;}
			else if(a[mid]>ele)
			{last=mid-1;}
			else if(a[mid]<ele)
			{first=mid+1;}
		}
		else
		{cout<<"not found";
			break;
		}
	}
	return 0;
}
		
