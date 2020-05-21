#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000000
#define l long long int 
l k;
vector<l> a,b,c;

vector< vector<l> > multi(vector< vector<l> > A ,vector< vector<l> > B )
{
	vector< vector<l> > C(k+1,vector<l>(k+1));

	for(l i=1;i<=k;i++)
	{
		for(l j=1;j<=k;j++)
		{
			for(l m=1;m<=k;m++)
			{
				C[i][j] = (C[i][j] + (A[i][m]*B[m][j])%MOD)%MOD;

			}
		}
	}

	return C;
}



vector< vector<l> > Pow(vector< vector<l> > T , l n)
{

	if(n==1)
		{return T;}
	
	if(n&1==1)
		{
			return multi(T,Pow(T,n-1));
		}

	vector< vector<l> > x = Pow(T, n/2);
		return multi(x,x);
		
}


l compose(l n,l k)
{

	if(n==0)
		{return 0;}

	if(n<=k)
		{return b[n-1];}
	
	vector<l> f(k+1);	

	for(l i=1;i<=k;i++)
		{f[i] = b[i-1];}
	
	vector< vector<l> > T(k+1,vector<l>(k+1));

	for(int i=1;i<=k;i++)
	{
		for(int j=1;j<=k;j++)
		{
			if(i<k)
			{
				if(j == i+1)
					{T[i][j] = 1;}
				else
					{T[i][j] = 0;}
			}
			else
			{
				T[i][j] = c[k-j];
			}
		}
	}

	T = Pow(T,n-1);
l sum=0;
	for(l j=1;j<=k;j++)
	{
	for(l i = 1 ;i<=k;i++)
	{
		sum = (sum + (f[i]*T[j][i])%MOD)%MOD;
	}
	}
return sum;
}



int main()
{
	int t;
	cin>>t;
	while(t--)
{
	cin>>k;
	l num;
	for(l i=0;i<k;i++)
	{
		cin>>num;
		b.push_back(num);
	}
	for(l i=0;i<k;i++)
	{
		cin>>num;
		c.push_back(num);
	}

l n;
cin>>n;
	cout<<compose(n, k)<<endl;
	a.clear();
	b.clear();
	c.clear();
}



	return 0;
}
