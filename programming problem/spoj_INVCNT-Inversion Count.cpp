/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
int n;
for(int i=0;i<t;i++)
{cin>>n;
	
long long int a[n];	
for(int j=0;j<n;j++)
{
	cin>>a[j];
}		

long int count = 0;
for(int j=0;j<n;j++)
{
	for(int k=j+1;k<n;k++)
	{
		if(a[j]>a[k])
		{count++;}
	}	
}
cout<<count<<endl;
}	
	return 0;
}



#include<bits/stdc++.h>
#include<set>
using namespace std;

int main()
{
int t;
cin>>t;
int n;
for(int i=0;i<t;i++)
{cin>>n;
set<long long int> st;
long long int num,inv=0;
for(int j=0;j<n;j++)
{
	cin>>num;
	if(st.size()==0)
	{
		st.insert(num);
	}
	else
	{
		auto it = st.upper_bound(num);
		inv += (st.end()-it);
		st.insert(num);
		 
	}	
}
cout<<inv<<endl;
	
}	
	return 0;
}
	
*/

	
#include<bits/stdc++.h>
using namespace std;

long long int inv_count=0;




long long int merge(long long int a,long long int temp,int l,long int mid,int r)
{
	 int i, j, k; 
	 long int con = 0;
	 
	 i=l;
	 j = mid; 
	 k = l;
	 
	 while ((i <= mid - 1) && (j <= right)) 
	 {
		if(a[i] <=a[j])
		{temp} 
		 
	}
	
}


long long int  mergesort(long long int a[],long long int temp[],int l,int r)
{
long int mid=0;
if(r>l)
{
mid = 	(l+r)/2;

inv_count += mergresort(a,temp,l,mid);

inv_count += mergresort(a,temp,mid+1,r);	

inv_count += merge(a,temp,l,l,mid+1,r);

	
}
return inv_count;

}


int main()
{
	int t;
	cin>>t;
	int n;
	for(int i=0;i<t;i++)
	{cin>>n;
		long long int a[n];
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
			
	mergesort(a,temp,0,n-1);
	}
	
	return 0;
}
