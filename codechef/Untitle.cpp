#include<iostream>
#include<math.h>
using namespace std;

int main()
{int school=0,y,n,no,m,r,w,q,o,u,sum;
cin>>n>>m>>r;
    int stud[n],sco[m],d[r];
for(int i=0;i<n;i++)
{cin>>q;
stud[i]=q;}
for(int j=0;j<n;j++)
{cin>>w;
sco[j]=w;}
for(int k=0;k<r;k++)
{cin>>u;
for(int p=0;p<n;p++)
{sum=0;
    if(stud[p]==u)
{no=p;}

}
for(int o=0;o<n;o++)
{
    if(sco[o]==sco[no])
{
    if(stud[o]>u)
{
    sum=1+sum;}
else {continue;}
}
}
if(sum>0)
{school=1+school;}
}
cout<<school;
return 0;
}