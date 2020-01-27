#include <bits/stdc++.h>
using namespace std;

void short(vector<int> ad[],int a,int b,int num)
{
for(int i=0;i<ad[a].size();i++)
{if(ad[a][i]==b)
{w.push_back(num);
return ;
}
else
{short(ad,ad[a][i],b,num+1);
}	
}







int main()
{
int ver;
cin>>ver;		
 vector<int> ad[ver];
int edges;
cin>>edges;
for(int i=0;i<edges;i++)
{cin>>x>>y;
	ad[x].push_back(y);
	ad[y].push_back(x);
}
int a.b;
cin>>a>>b;
short(ad,a,b,0);	
	
	
	return 0;
}
