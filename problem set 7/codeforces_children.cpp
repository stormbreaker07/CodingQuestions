#include<bits/stdc++.h>
using namespace std;

#define l long long int 

l n,m;

typedef struct items{
	int t,z,y;
	
	}item ;

vector<item> a;

l another_binary(l tx) {
	
	l s=0,e=1e18;
	while(s<e) {
		 l mid = (s+e)/2;
		 if(a[i].)
		}
	
	}


bool solve(long long int tx)
{
	l num=0,mx,t1,w,mr;
	for(unsigned int i=0;i<a.size();i++)
	{t1=tx;
		mx = a[i].t*a[i].z + a[i].y;
		w = t1/mx;
		t1 = t1%mx;
		if(w>1)
		{t1 += a[i].y;}
		mr = t1/a[i].t + w;
		num += mr;
	}
	return num>=m;
}

void count1(long long int tx) {
	

	l num=0,mx,t1,w,mr;
	for(unsigned int i=0;i<a.size();i++)
	{t1=tx;
		mx = a[i].t*a[i].z + a[i].y;
		w = t1/mx;
		t1 = t1%mx;
		if(w>1)
		{t1 += a[i].y;}
		mr = t1/a[i].t + w;
		num += mr;
	cout<<mr<<" ";
	}

	}



int main() {
	
	cin>>m>>n;
	int ti,zi,yi;
	item nw;
	for(int i=0;i<n;i++)
	{
		cin>>ti>>zi>>yi;
		nw.t = ti;
		nw.z = zi;
		nw.y = yi;
		a.push_back(nw);
	}
	
	long long int s=0,e = 1e18,ans=0;
	while(s<=e)
	{
		long long int mid = (s+e)/2;
		if(solve(mid))
		{
			e = mid-1;
			ans = mid;
		} 
		else
		{
			s = mid+1;
		}
	}
	cout<<ans<<endl;
	count1(ans);
	
	

	return 0;
	}
