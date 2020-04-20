/*#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,r,c;
	cin>>t;
	int a[] = {2,3,4,5,6,7,8,7,8,7,6,5,4,3,2,1,2,3,4,5,6,5,6,7,8,7,6,5,4,3,2,1,2,3,4,3,4,5,6,7,8,7,6,5,4,3,2,1,2};
	int b[] = {2,3,4,5,6,7,8,7,6,5,4,3,2,1,2,3,4,5,6,7,8,7,6,5,4,3,2,1,2,3,4,5,6,7,8,7,6,5,4,3,2,1,2,3,4,5,6,7,8};
	for(int i=0;i<t;i++)
	{
		cin>>r>>c;
		int x,y;
		vector<int> a1;
		vector<int> b1;
		x=r; y=c;
		a1.push_back(x);
			b1.push_back(y);
		if(x>y)
		{
		while(x!=y)
		{a1.push_back(x-1);
			b1.push_back(y+1);
			x--;
			y++;
		}	}
		else if(x<y)
		{	while(x!=y)
		{
			a1.push_back(x+1);
			b1.push_back(y-1);
			x++;
			y--;
		}	}
		for(int j=0;j<50;j++)
		{if(x==1 && y==1)
			{
				break;
			}
			x--;
		y--;
			a1.push_back(x);
			b1.push_back(y);
		}
		int siz = 49+a1.size();
		cout<<siz<<endl;
		
		
		for(int j=0;j<a1.size();j++)
		{
			cout<<a1[j]<<" "<<b1[j]<<endl;
		}
		for(int j=0;j<49;j++)
		{
			cout<<a[j]<<" "<<b[j]<<endl;}
	}
		
	
	
	return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++)
{
int n;
long long  int mx=0;
long int a[2*n];
cin>>n;
for(int j=0;j<n;j++)
{
cin>>a[j];
a[n+j] = a[j];
}
for(int j=n;j<n+5;j++)
{
}
if(n<=5)
{
sort(a,a+n,greater<int>());
mx = a[0]+a[1]+a[2];
}
else
{vector<long int>b;
  for(int j=0;j<n;j++)
  {
  b.push_back(a[j]);
  b.push_back(a[j+1]);
  b.push_back(a[j+2]);
  b.push_back(a[j+3]);
  b.push_back(a[j+4]);
  sort(b.begin(),b.end(),greater<int>());
  if(mx<b[0]+b[1]+b[2])
  {mx = b[0]+b[1]+b[2];}
  b.clear();
      
  }
}
cout<<mx;
}



	return 0;
}
 
