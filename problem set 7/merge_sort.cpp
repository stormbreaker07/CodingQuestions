#include<bits/stdc++.h>
using namespace std;

void merge(int *a , int s, int  mid  ,int e ) {
	
	int p = s ,q = mid+1; 
	int temp[e-s+1] ,k=0;
	
	for(int i=s;i<=e;i++)
	{
		if(p>mid)
		{
			temp[k++] = a[q++];
		}
		else if(q>e) 
		{
			temp[k++] = a[p++];
		} 
		else if(a[p]<a[q])
		{
			temp[k++] = a[p++];
		}
		else
		{
			temp[k++] = a[q++];
		}
	}
	
	for(int i=0;i<k;i++)
	{
		a[s++] = temp[i];
	}
	

return ;	
}


void merge_sort(int *a , int s , int e) {
	
if(s<e) {
	
	int mid = (s+e)/2;
	
	merge_sort(a , s  , mid);
	merge_sort(a , mid+1 , e);
	
	merge(a, s, mid , e);
	}	

return ;
}


int main() {
	
int n;
cin>>n;
int  a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}	
	
	merge_sort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<< " ";
	}
	
	return 0;
}
