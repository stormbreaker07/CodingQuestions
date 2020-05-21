#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
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

	if(n==1)
	{return 1;}


	vector<l> f(k+1);	

	for(l i=1;i<=k;i++)
		{f[i] = b[i-1];}

	vector< vector<l> > T(4,vector<l>(4));

	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			if(i==1)
			{
				T[i][1] = 1;
				T[i][2] = 1;
				T[i][3] = 1;

			}
			else if(i==2)
			{
				T[i][1] = 0;
				T[i][2] = 0;
				T[i][3] = 1;
			}
			else if(i==3)
			{
				T[i][1] = 0;
				T[i][2] = 1;
				T[i][3] = 1;	
			}
		}
	}


	

	T = Pow(T,n-1);
l sum=0;

	for(l i = 1 ;i<=k;i++)
	{

		sum = (sum + (f[i]*T[1][i])%MOD)%MOD;

	}

return sum;
}



int main()
{
	int t;
	cin>>t;
	while(t--)
{
	k=2;
	l num;
	b.push_back(1);
	b.push_back(0);
	b.push_back(1);
	/*cofficient*/
	c.push_back(1);
	c.push_back(1);
		
	
k++;
l n,m;
cin>>n>>m;
l sum1=0;
n--;
if(n==0 || n==-1)
{sum1 = 0;}
else if(n==1)
{sum1 = 1;}
else if(n==2)
{sum1 = 2;}
else
{
	sum1 = compose(n, k);
}
l sum2 = 0; 
if(m==0)
{sum2=0;}
else if(m==1)
{sum2 = 1;}
else if(m==2)
{sum2 = 2;}
else
{
	sum2 = compose(m, k);
}

sum2 -= sum1;
if(sum2<0)
{
	sum2 += MOD;
}

cout<<<<endl;

	a.clear();
	b.clear();
	c.clear();
}



	return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// #define MOD 1000000007
// #define l long long int 
// l k;
// vector<l> a,b,c;

// vector< vector<l> > multi(vector< vector<l> > A ,vector< vector<l> > B )
// {
// 	vector< vector<l> > C(k+1,vector<l>(k+1));

// 	for(l i=1;i<=k;i++)
// 	{
// 		for(l j=1;j<=k;j++)
// 		{
// 			for(l m=1;m<=k;m++)
// 			{
// 				C[i][j] = (C[i][j] + (A[i][m]*B[m][j])%MOD)%MOD;

// 			}
// 		}
// 	}

// 	return C;
// }



// vector< vector<l> > Pow(vector< vector<l> > T , l n)
// {

// 	if(n==1)
// 		{return T;}
	
// 	if(n&1==1)
// 		{
// 			return multi(T,Pow(T,n-1));
// 		}

// 	vector< vector<l> > x = Pow(T, n/2);
// 		return multi(x,x);
		
// }


// l compose(l n,l k)
// {

// 	if(n==0 || n==-1)
// 		{return 0;}

// 	if(n<=k)
// 		{return b[n-1];}
	
// 	vector<l> f(k+1);	

// 	for(l i=1;i<=k;i++)
// 		{f[i] = b[i-1];}
	
// 	vector< vector<l> > T(k+1,vector<l>(k+1));

// 	for(int i=1;i<=k;i++)
// 	{
// 		for(int j=1;j<=k;j++)
// 		{
// 			if(i<k)
// 			{
// 				if(j == i+1)
// 					{T[i][j] = 1;}
// 				else
// 					{T[i][j] = 0;}
// 			}
// 			else
// 			{
// 				T[i][j] = c[k-j];
// 			}
// 		}
// 	}

// 	T = Pow(T,n-1);
// l sum=0;
	
// 	for(l i = 1 ;i<=k;i++)
// 	{
// 		sum = (sum + (f[i]*T[1][i])%MOD)%MOD;
// 	}

// return sum;
// }



// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// {
// 	k = 2;
		
// 		b.push_back(0);
// 		c.push_back(1);
// 		b.push_back(1);
// 		c.push_back(1);
		

// l n,m,sum1,sum2;
// cin>>n>>m;
// n++;
// m++;

// 	sum1 = compose(n+1, k) - b[1];
// 	sum2 = compose(m+2,k) - b[1];

// 	cout<<sum2-sum1<<endl;
// 	a.clear();
// 	b.clear();
// 	c.clear();
// }



// 	return 0;
// }
