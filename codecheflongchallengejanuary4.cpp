#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,q;
	cin>>n>>q;
	long long int a[n];
	int in[n][2];
	for(int i=0;i<n;i++)
	{for(int j=0;j<2;j++)
		{in[i][j]=0;}
	}
	
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




	int cot=0;;
	for(unsigned int i=0;i<v.size();i=i+2)
	{cot++;
		for(int j=v[i]+1;j<=v[i+1];j++)
		{in[j][0] = cot;}
	}
	
	cot=0;;
	for(unsigned int i=0;i<v1.size();i=i+2)
	{cot++;
		for(int j=v1[i]+1;j<=v1[i+1];j++)
		{in[j][1] = cot;}
	}
	
	
	for(int i=1;i<n;i++)
	{if(in[i][0]==0)
		{in[i][0]= in[i-1][0];}
	if(in[i][1]==0)
		{in[i][1]= in[i-1][1];}
	}
	
	for(int i=0;i<n;i++)
	{in[i][0] =  in[i][0]-in[i][1];}
	
	/*
	for(int i=1;i<n;i++)
	{if(in[i][0] == 1 && in[i-1][0]>0)
		{in[i][0]= in[i-1][0]+1;
		}
	}
	*/
	

	
	
	int l,r,left,right,mx;
	for(int i=0;i<q;i++)
	{cin>>l>>r;
	left = in[l-1][0];
	right = in[r-1][0];
	if(right-left==0)
	{cout<<"YES"<<endl;}
	else
	{cout<<"NO"<<endl;}
	}
	
	
	


return 0;
}	
	
