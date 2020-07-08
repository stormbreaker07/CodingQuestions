#include <bits/stdc++.h> 
using namespace std;

int num;

int getsum(int *st,int ss,int se,int qs,int qe,int si,int n)
{
if(qs > qe || qs < 0 || qe > n-1)
{return -1;}
if(qs<=ss && se<=qe)
{return st[si];}
if(se<qs ||qe<ss)
{return 0;}

int mid = ss+ (se-ss)/2;
return getsum(st,ss,mid,qs,qe,2*si+1,n)+getsum(st,mid+1,se,qs,qe,2*si+2,n);
}


int constructfill(int a[],int ss,int se,int *st,int si)
{
if(ss == se)
{st[si] = a[ss];
	return a[ss]; 
}

int mid = ss+(se-ss)/2;
st[si] = constructfill(a,ss,mid,st,2*si+1) + constructfill(a,mid+1,se,st,2*si+2);
return st[si];
}

int *construct(int a[],int n)
{
	int x = int(ceil(log2(n)));				
	x = 2*(int)pow(2,x)-1;
	num = x;
	int *st = new int[x];
	
	constructfill(a,0,n-1,st,0);
	
	return st;
}

void updateutil(int *st,int ss,int se,int in, int diff,int si)
{
	if(in<ss || in>se)
	{return ; }
	st[si] += diff;
	if(se != ss)
	{int mid = ss + (se-ss)/2;
	updateutil(st,ss,mid,in,diff,si*2+1);
	updateutil(st,mid+1,se,in,diff,si*2+2);
	}
}

void updatevalue(int *st,int a[],int in,int value,int n)
{
	if(in<0 || in>n-1)
	{cout<<"invalid";
		return ;
	}
	int diff = value - a[in];
	a[in] = value;
	updateutil(st,0,n-1,in,diff,0);
}

	

int main()
{int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	
	/*construct a segment tree*/
	int *st = construct(a,n);

	for(int i=0;i<num;i++)
	{cout<<st[i]<<" ";}cout<<endl;
	
	int start,end,in,value;
	
	cin>>start>>end;
	
	int w=getsum(st,0,n-1,start,end,0,n);
	
	cout<<endl<<w;
	
	cin>>in>>value;
	
	updatevalue(st,a,in,value,n);
	
		for(int i=0;i<num;i++)
	{cout<<st[i]<<" ";}cout<<endl;
	
	w=getsum(st,0,n-1,start,end,0,n);
	
	cout<<endl<<w;
	
	return 0;
}
