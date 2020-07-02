
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
