#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{long int mn1=100000000;
int n,m,k,x,y,x1,y1,e1,e2,man1,man2;
double longdis = 0,longdis1;
cin>>x>>y;
cin>>n>>m>>k;
int a[2*n];
int b[2*m];
int c[2*k];
for(int j=0;j<2*n;j=j+2)
{cin>>a[j]>>a[j+1];
int dis = (x-a[j])*(x-a[j]) + (y-a[j+1])*(y-a[j+1]);
if(dis<mn1)
{mn1=dis;
e1=a[j];
e2=a[j+1];}
}
longdis += sqrt(mn1);

int mn2=100000000,mn=100000000;
for(int j=0;j<2*m;j=j+2)
{cin>>b[j]>>b[j+1];
int dis = (e1-b[j])*(e1-b[j]) + (e2-b[j+1])*(e2-b[j+1]);
if(dis<mn2)
{mn2=dis;
man1=b[j];
man2=b[j+1];}
}

longdis += sqrt(mn2);
int w1,w2;
for(int j=0;j<2*k;j=j+2)
{cin>>c[j]>>c[j+1];
int dis = (man1-c[j])*(man1-c[j]) + (man2-c[j+1])*(man2-c[j+1]);
if(dis<mn)
{mn=dis;
w1=c[j];
w2=c[j+1];
}
}

longdis += sqrt(mn);
/*end*/





mn1=100000000;
for(int j=0;j<2*m;j=j+2)
{int dis = (x-b[j])*(x-b[j]) + (y-b[j+1])*(y-b[j+1]);
if(dis<mn1)
{mn1=dis;
e1=b[j];
e2=b[j+1];}
}

longdis1 += sqrt(mn1);

mn2=100000000;

for(int j=0;j<2*n;j=j+2)
{
int dis = (e1-a[j])*(e1-a[j]) + (e2-a[j+1])*(e2-a[j+1]);
if(dis<mn2)
{mn2=dis;
man1=a[j];
man2=a[j+1];
}
}

longdis1 += sqrt(mn2);

mn=100000000;

for(int j=0;j<2*k;j=j+2)
{
int dis = (man1-c[j])*(man1-c[j]) + (man2-c[j+1])*(man2-c[j+1]);
if(dis<mn)
{mn=dis;
w1=c[j];
w2=c[j+1];}
}


longdis1 += sqrt(mn);

if(longdis1<=longdis)
{cout << fixed << setprecision(6) << longdis1<< endl;}
else
{cout << fixed << setprecision(10) << longdis<< endl;}






}
return 0;
}

 	
	
	
	
