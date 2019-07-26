#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int p[10000][10000];
int main()
{long long int w,x,i,j;
for(i=0;i<=10000;i++ )
{for(int k=0;k<=10000;k++)
{x=0;
	w=i+k;
    for( j=2;j<=sqrt(i);j++)
{if(w%j==0)
{x=1+x;
break;}
}
if(x==0)
{p[i][k]=1;}
}
}


for(i=0;i<1;i++)
{for(j=0;j<100;j++)
{if(p[i][j]==1)
	{cout<<i<<"  ";}
}
}
	
	
	
	
return 0;
}
