#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;


int main()
{	int t,n,m;
	vector<int> che;
	vector<int> asis;
	cin>>t;
	for(int i=0;i<t;i++)
{cin>>n>>m;
	int a[m];
	for(int i=0;i<m;i++)
	{cin>>a[i];}
	sort(a,a+m);
	int j=0,c=0;
	for(int i=1;i<=n;i++)
	{if(i!=a[j])
	{c++;
		if(c%2!=0)
		{che.push_back(i);}
		else
		{asis.push_back(i);}
		}
	 else if(i==a[j])
	 {j++;}
	}
	if(che.size()>0)
    {for(int i=0;i<che.size();i++)
    {cout<<che[i]<<" ";}
    cout<<endl;}
    else 
    {cout<<endl;}
    if(asis.size()>0)
    {for(int i=0;i<asis.size();i++)
    {cout<<asis[i]<<" ";}
    cout<<endl;}
    else 
    {cout<<endl;}
    

che.clear();
asis.clear();
}



	return 0;
}
