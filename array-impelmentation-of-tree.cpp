#include <bits/stdc++.h>
#include <queue>
using namespace std;

void root(char a[],char n,int num)
{a[num]=n;}
void left(char a[],char n,int num)
{if(a[num]=='\0')
	{cout<<"not possible"<<endl;}
else
{a[(num*2)+1]=n;}
}

void right(char a[],char n,int num)
{if(a[num]=='\0')
	{cout<<"not possible"<<endl;}
else
{a[(num*2)+2]=n;}
}





int main()
{int t;
	cin>>t;
	char a[t];
root(a,'A',0);
left(a,'B',0);
right(a,'C',0);
left(a,'D', 1); 
right(a,'E', 1); 
right(a,'F', 2); 

for(int i=0;i<t;i++)
{cout<<a[i];}

return 0;

}	


