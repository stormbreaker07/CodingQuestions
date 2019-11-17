#include <bits/stdc++.h>
using namespace std;

int main()
{int ver,x,y;
cin>>ver;
vector<int> ad[ver];
int edges;
cin>>edges;
for(int i=0;i<edges;i++)
{cin>>x>>y;
	ad[x].push_back(y);
}
int check;
cin>>check;
for(int i=0;i<check;i++)
{cin>>x>>y;
	for(int j=0;j<ad[x].size();i++)
	{if(ad[x][j]==y)
	{cout<<"edges exist";}
	else
	{cout<<"edges dont exist";}
    }
}
	
return 0;
}
