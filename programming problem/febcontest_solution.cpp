/*school of geometry*/

/****killing like kamikaze****/
                      
     /*tanuj yadav*/                

/**********************/



/*no change required*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
long int sum;
for(int i=0;i<t;i++)
{
long int x,index;
int n,c=0,c1=1;
cin>>n>>sum;
long int a[n];
for(int j=0;j<n;j++)
{
cin>>a[j];
if(sum%a[j]!=0)
{index=j;
c=1;
}
}
int rep[n+1] ={0};
if(c==1)
{
rep[index] = (sum/a[index])+1;	
c1=0;
}
else
{
for(int j=n-1;j>=0;j--)
{
if(sum%a[j]==0)
{
x = sum/a[j];
sum = sum -a[j]*(x-1);
rep[j] = x-1; 
}
else if(sum%a[j]!=0)
{
x=sum/a[j];
c1=0;
rep[j] = x+1;
break; }
}}

if(c1==0)
{cout<<"YES ";
for(int j=0;j<n;j++)
{cout<<rep[j]<<" ";}
cout<<endl;
}
else if(c1==1)
{
cout<<"NO"<<endl;
}

}
return 0;
}

/*school of geometry*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,n;
cin>>t;
for(int i=0;i<t;i++)
{
long long int sum=0;
cin>>n;
long int a[n],b[n]; 
for(int j=0;j<n;j++)
{
cin>>a[j];	
}	
for(int j=0;j<n;j++)
{
cin>>b[j];	
}	
sort(a,a+n);
sort(b,b+n);
for(int j=0;j<n;j++)
{
sum += min(a[j],b[j]);	
}
cout<<sum<<endl;
} 
	
	return 0;
}

/*hard cash*/
#include<bits/stdc++.h>
using namespace std;


int main()
{
int t,n,k;
cin>>t;
for(int m=0;m<t;m++)
{
cin>>n>>k;
long int a[n];
long long int sum =0;
for(int i=0;i<n;i++)
{
cin>>a[i];
if(a[i]%k!=0)
{sum = sum + (a[i]%k);}
}	
cout<<sum%k<<endl;
}
	return 0;
}


/*the threature problrm*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
int t;
cin>>t;
int count2=0;
long int sum1=0;
for(int i=0;i<t;i++)
{
long int sum=0;
int count1=0;
int n;
cin>>n;
char s;
int z;
int num[4] ={0};
for(int j=0;j<n;j++)
{
cin>>s>>z;
if(s=='A')
{num[0]++;}
if(s=='B')
{num[1]++;}
if(s=='C')
{num[2]++;}
if(s=='D')
{num[3]++;}
}
sort(num,num+4,greater<int>());
for(int j=0;j<4;j++)
{
if(num[j]==0)
{count1++;}
}
sum+=num[0]*100+num[1]*75+num[2]*50+num[3]*25;
sum1 += sum;
count2 += count1;
sum = sum - count1*100;
cout<<sum<<endl;
count1 = 0;

}
sum1 = sum1 - count2*100;
cout<<sum1;
	
	return 0;
}

/* chef and railway station*/
#include<bits/stdc++.h>
using namespace std;

/*
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
long int n,p;
cin>>n>>p;
for(int j=0;j<n;j++)
{
cin>>n;
if(n%2!=0)
{
}

}
return 0;
}
*/

int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{int n,m;
cin>>n>>m;
vector<int>x1;
vector<int>y1;
long int a;
vector<int> x2(100000000,0);
vector<int> y2(100000000,0);
int countx1=0,county1=0;
for(int j=0;j<n;j++)
{
cin>>a;
if(a!=0)
{x1.push_back(a);
if(a<0)
{x2[0-a]=1;	}    
}
if(a==0)
{countx1++;}
}
int count=0;	
for(int j=0;j<m;j++)
{	
cin>>a;	
if(a!=0)
{
y1.push_back(a);
if(a<0)
{y2[0-a]=1;}
}
if(a==0)
{county1++;}
}

/*finding pair*/



int nw;
for(unsigned int j=0;j<y1.size();j++)
{
a=pow(float(y1[j]),2);
for(unsigned int k=0;k<x1.size();k++)
{
if(x1[k]>0)
{	
	if(a%x1[k]==0)
	{
	nw = a/x1[k];
	if(nw<100000000)
	{
	if(x2[nw] == 1)
	{count++;}
	}}
}
}	}
for(unsigned int j=0;j<x1.size();j++)
{
a=pow(float(x1[j]),2);
for(unsigned int k=0;k<y1.size();k++)
{
if(y1[k]>0)
{	
	if(a%y1[k]==0)
	{
	nw = a/y1[k];
	if(nw<100000000)
	{if(y2[nw] == 1)
	{count++;}
	}
	}
}
}	}
if(countx1>0 || county1>0)
{count = count + x1.size()*y1.size();}



cout<<count<<endl;
}
	
	
	
	return 0;
}


