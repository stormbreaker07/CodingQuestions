#include<bits/stdc++.h>
using namespace std;

int main()
{
int one,zero;
cin>>zero>>one;

//if any of them is zero
if(min(zero,one)==0)
{
	if(zero>=2)
	{cout<<-1;}
	if(one>=3)
	{cout<<-1;}
	if(zero==0 && one ==0)
	{cout<<-1;}
	
}
else
{
//if any of them is exceeding range	
if((one<zero-1) || (one>2*(zero+1))  || (zero>one+1))
{
cout<<-1;	
}
//for creating the sequence 
else
{
for(int i=0; ;i++)
{
	if(i%2==0)
	{for(int j=0;j<2;j++)
		{
			if(one>zero-1 && one>0)
			{cout<<1;
				one--;}
			else if(one<zero-1)
			{break;}
		}
	}
	else
	{cout<<0;
		zero--;
		}

if(one<=0 && zero<=0)
{break;}
}
}	
}	
	return 0;
	
}

