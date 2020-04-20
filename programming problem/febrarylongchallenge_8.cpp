/*
#include<bits/stdc++.h> 
using namespace std; 

set<int> s;

void subsetSums(int arr[], int l, int r, 
				int sum=0) 
{ 
 
	if (l > r) 
	{ 
		if(sum%2==0 && sum>1)
		{s.insert(sum);}
		return; 
	} 

 
	subsetSums(arr, l+1, r, sum+arr[l]); 

	subsetSums(arr, l+1, r, sum); 
} 

// Driver code 
int main() 
{ 
	int t,m;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++)
	{cin>>m;
	 arr[i] = m; }
	int n = sizeof(arr)/sizeof(arr[0]); 

	subsetSums(arr, 0, n-1);
	cout<<s.size();
	return 0; 
} 
*/



#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin >> q;
	map<int ,int > mp;
	int x1,x2,y1,y2,sum;
	for(int i=1;i<=q;i++)
	{
	cin>>x1>>y1>>x2>>y2;
	sum = x1+x2+y1+y2;
	mp.insert({sum,i});
	}
	map<int,int> :: iterator it;
	for(it = mp.begin();it!=mp.end();it++)
	{cout<<it->first<<" "<<it->second<<endl;}
	
    return 0;
}

