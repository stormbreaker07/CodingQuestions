#include <bits/stdc++.h>
using namespace std;

int n,m,cont=0;
	
void fun(int x,int y,string s)
{
	
if(x==n && y==1) {
cout<<s<<" ";
	cont++;
	return;
}


if(y<=m && y>1 && x>=1 && x<=n)
{
	fun(x,y-1,s+"V");
}


if(x>=1 && x<n && y>=1 && y<=m)
{

	fun(x+1,y,s+"H");
}






	return ;
}



int main()
{
	cin>>n>>m;
string s;
if(n==1 && m==1)
{cout<<0;}
else if(n==0)
{
	for(int i=1;i<=m-1;i++)
		{cout<<"V";}
	cout<<endl<<1;
}
else if(m==0)
{
	for(int i=1;i<=n-1;i++)
		{cout<<"H";}
	cout<<endl<<1;
}
else
{	fun(1,m,s);


cout<<endl<<cont;
}
	return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int n,m,cont=0;

// int main()
// {
// cin>>n>>m;
// char a[] = {'V','H'};
// int w = m+n-2;
// long int x,h=0,v=0,cont=0; 
// string s;
// for(long int i=0;i< pow(2,w);i++)
// {x = i;
// 	for(long int j=1;j<=w;j++)
// 	{
// 		if(x&1==1)
// 			{h++;}
// 		else
// 			{v++;}
// 		s = a[x&1] + s;
// 		x=x/2;
// 	}
// 	if(h == n-1 && v == m-1)
// 	{
// 		cout<<s<<" ";
// 		cont++;
// 	}
// 	s.clear();
// 	h=0;
// 	v=0;

// }
// cout<<endl<<cont;


// 	return 0;
// }