#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,q;
	cin>>n>>q;
	long long int a[n];
	/*input sequence*/
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	vector<int> v;
	vector<int> v1;
	
	/* create a pree */
	int pre1=0;
	int post1=0;
	int pre=0,post=0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]<a[i+1])
		{post = i+1;}
		else if(a[i]>a[i+1])
		{if(pre!=post)
			{v.push_back(pre);
			v.push_back(post);
			}
			pre = i+1;
			post = i+1;
		}
		
		/*for minimum*/
		if(a[i]>a[i+1])
		{post1 = i+1;}
		else if(a[i]<a[i+1])
		{if( pre1!=post1)
			{v1.push_back(pre1);
			v1.push_back(post1);
			}
			pre1 = i+1;
			post1 = i+1;
		}
	}
	if(pre<post)
	{v.push_back(pre);
	v.push_back(post);
	}
	if(pre1<post1)
	{v1.push_back(pre1);
	v1.push_back(post1);
	}
	
	for(int i=0;i<v.size();i++)
	{cout<<v[i]<<" ";}
	cout<<endl;
	for(int i=0;i<v1.size();i++)
	{cout<<v1[i]<<" ";}
	
	
	
	
	
	
	/*input queries */
	for(int i=0;i<q;i++)
	{int l,r,count=0,count1=0;
		cin>>l>>r;
		l=l-1;
		r=r-1;
		
		/*for descending order */
		for(unsigned int j=0;j<v1.size();j=j+2)
		{
		int w1=v1[j],w2=v1[j+1];
		if(w1>=l && w2<=r)
		{if(w1==l && w2==r)
			{count1++;
			break;}
		else if(w1>l && w2==r)
		{
			if(a[w1]>a[w1-1])
			{count1++;
			}
		}
		else if(w1==l && w2<r)
		{
			if(a[w2]<a[w2+1])
			{count1++;}
		}
		else if(w1>l && w2<r)
		{
			if(a[w1]>a[w1-1] && a[w2]<a[w2+1])
			{count1++;
			}		
		}
		}
		else if(w1<l && l<w2 && w2<r)
		{
			if(a[w2]<a[w2+1])
			{count1++;}
		}
		else if(r>w1 && w1>l && w2>r)
		{
			if(a[w1]>a[w1-1])
			{count1++;}
			break;
		}
		else if((w1<l && w2>r) || (w1==l && w2>r) || (w1<l && w2==r))
		{count1++;
		break;
		}
		}
		
		/*for ascending order */
		for(unsigned int j=0;j<v.size();j=j+2)
		{
		int w1=v[j],w2=v[j+1];
		if(w1>=l && w2<=r)
		{if(w1==l && w2==r)
			{count++;
			break;}
		else if(w1>l && w2==r)
		{
			if(a[w1]<a[w1-1])
			{count++;
			}
		}
		else if(w1==l && w2<r)
		{
			if(a[w2]>a[w2+1])
			{count++;
			
			}
		}
		else if(w1>l && w2<r)
		{
			if(a[w1]<a[w1-1] && a[w2]>a[w2+1])
			{count++;
			}		
		}
		}
		else if(w1<l && w2>l && w2<r)
		{
			if(a[w2]>a[w2+1])
			{count++;}
		}
		else if(w1<r && w1>l && w2>r)
		{
			if(a[w1]<a[w1-1])
			{count++;}
			break;
		}
		else if((w1<l && w2>r) || (w1==l && w2>r) || (w1<l && w2==r))
		{count++;
		break;
		}
		}
		
		/*result */
		if(count == count1)
		{cout<<"YES"<<endl;}
		else
		{cout<<"NO"<<endl;}
		
	}
	
return 0;
}
