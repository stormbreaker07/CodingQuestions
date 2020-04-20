/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,y;
	cin>>x>>y;
	
	int count=0;
	for( ; ; )
	{
	if(x<=0 || y<=0)
	{
		break;
	}
	else if(x==1 && y==1)
	{break;}
	else
	{
		if(x>y)
		{
			if(x>1)
			{	
				x = x-2;
				y = y+1;
				count++;
			}
		
		}
		else if(x<=y)
		{
			if(y>1)
			{
				x=x+1;
				y=y-2;
				count++;
				
			}
			
		}	
	}	
		
	}
	cout<<count;
	
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int p[n],c[n];
        for(int j=0;j<n;j++)
        {
            cin>>p[j]>>c[j];
        }
    int flag=0,c1=0;
        for(int j=0;j<n;j++)
        {
            if(p[j]<c[j])
            {
                flag=1;
                break;
            }
            else if(p[j]>=c[j])
            {
                if(j>=1)
                {
                    if(p[j]<p[j-1])
                    {
                        flag=1;
                        break;
                    }
                    else if(p[j]>p[j-1])
                    {
                        if(c[j]>=c[j-1])
                        {c1=1;}
                        else
                        {
                            flag=1;
                            break;
                        }
                        
                    }
                    else if(p[j]==p[j-1])
                    {
                        if(c[j]==c[j-1])
                        {c1=1;}
                        else 
                        {
                            flag=1;
                            break;
                        }
                    }
                }
            }
            
        }
        if(flag==0)
        {cout<<"YES"<<endl;}
        else if(flag==1)
        {cout<<"NO"<<endl;}
    }


    return 0;
}
*/

#include <iostream>
#include <vector>
using namespace std;

 vector<int> t;
int visit[INT_MAX] = {0};


void dfs(vector<int> adj[],int n)
{
    if(visit[n]==0)
    {visit[n]=1;
        for(int i=0;i<adj[n].size();i++)
        {
            dfs(adj,adj[n][i]);
            t.push_back(adj[n][i]);
        }
    }
}




int main()
{
int n;
cin>>n;
vector<int> adj[n+1];

int m;
cin>>m;
int x,y;
for(int i=0;i<m;i++)
{
    cin>>x>>y;
    adj[x].push_back(y);
}

for(int j=1;j<=n;j++)
{
    if(visit[j]==0)
    {dfs(adj,j);}
}

for(int j=t.size()-1;j>=0;j--)
{
    cout<<t[j]<<" ";
}


    return 0;
}
