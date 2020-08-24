#include<bits/stdc++.h>
using namespace std;


const int N = 10000;
vector<int> prime1;
int p[N+1] = {0};

void prime()
{
    for(int i=2;i<=N;i++)
    {
        if(p[i]==0)
        {
            prime1.push_back(i);
            for(int j=i*i;j<=N;j+=i)
            {
                p[j] = 1;
            }
        }
    }
    
   
}




int main() {
	prime();
	int n,m;
	cin>>n>>m;
	
	vector<int> temp;
	
	for(int i=n;i<=m;i++)
	{
		if(p[i]==0)
		{
			temp.push_back(i);
		}
	}	
	
	
	set<int> temp1;
	int mn = INT_MAX , mx =0;
	for(unsigned int i=0;i<temp.size();i++)
	{
		for(unsigned int j=0;j<temp.size();j++)
		{
			if(i!=j)
			{
				
				int x = temp[j] + temp[i]*pow(10,int(log10(temp[j])+1));
				if(p[x]==0)
				{
					temp1.insert(x);
					mn = min(mn , x);
					mx = max(mx , x);
					
				}
			}
		}
	}
	
	long long int cont,mx1= mx ,mn1 = mn;
	for(unsigned int i=3;i<=temp1.size();i++)
	{
		cont = mn1+mx1;
		mn1= mx1;
		mx1 = cont;
	}
	
	cout<<mx1;

return 0;
}
