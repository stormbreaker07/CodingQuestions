#include <bits/stdc++.h>
using namespace std;


bool prime(int num)
{int c=0;
	for(int i=2;i<=sqrt(num);i++)
	{	
		if(num%i==0)
		{c=1;
		break;}
	}
	if(c==1)
	{return false;}
	else if(c==0)
	{return true;}

}

int main()
{
int n,num=1;
bool ans;
cin>>n;
for(int i=1;i<=1000;i++)
{num=n*i+1;
ans = prime(num);
if(ans == false)
{cout<<i;
break;}
}	
return 0;
}	
	
