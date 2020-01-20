#include<bits/stdc++.h>
using namespace std;

int num;

int constructfill(int a[],int ss,int se,int *st,int si,int y)
{	
int mid = ss + (se-ss)/2;
if(ss == se)
{st[si] = a[ss];
	return 	a[ss];
}

if(num%2!=0)
{
if(y%2==0)
{y++;
st[si] = constructfill(a,ss,mid,st,2*si+1,y)|constructfill(a,mid+1,se,st,2*si+2,y);
}
else if(y%2!=0)
{y++;
st[si] = constructfill(a,ss,mid,st,2*si+1,y)^constructfill(a,mid+1,se,st,2*si+2,y);
}
}

else if(num%2==0)
{
	if(y%2!= 0)
{y++;
st[si] = constructfill(a,ss,mid,st,2*si+1,y)|constructfill(a,mid+1,se,st,2*si+2,y);
}
else if(y%2==0)
{y++;
st[si] = constructfill(a,ss,mid,st,2*si+1,y)^constructfill(a,mid+1,se,st,2*si+2,y);
}
}

return st[si];
}


int *construct(int a[],int n,int max_size)
{
int *st = new int[max_size];

constructfill(a,0,n-1,st,0,0);
return st;
}	
	
void update(int a[],int ss,int se,int *st,int si,int y,int index,int val)
{	
int mid = ss + (se-ss)/2;

if(ss == se)
{st[si] = val;
return ;
}
if(ss<=index && index<=mid)
{y++;
	update(a,ss,mid,st,2*si+1,y,index,val);
}
else
{y++;
	update(a,mid+1,se,st,2*si+2,y,index,val);
}
if(num%2==0)
{if(y%2==0)
{
st[si] = st[2*si+1]|st[2*si+2];
}
else if(y%2!=0)
{
st[si] = st[2*si+1]^st[2*si+2];}
}
else if(num%2!=0)
{if(y%2!=0)
{
st[si] = st[2*si+1]|st[2*si+2];
}
else if(y%2==0)
{
st[si] = st[2*si+1]^st[2*si+2];}
}


}





int main()
{
	int m,n,a1,b1;
	
	cin>>n>>m;
	num = n;
	n=(int)(pow(2,n));
	int a[n];
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	int w =(int)(ceil(log2(n)));
	  
	int max_size = 2*(int)(pow(2,w))-1; 
	int *st = construct(a,n,max_size);
	for(int i=0;i<m;i++)
	{cin>>a1>>b1;
		
		a[a1-1] = b1;
	update(a,0,n-1,st,0,0,a1-1,b1);
	cout<<st[0]<<endl;
	
	}
   
	return 0;
}
	
