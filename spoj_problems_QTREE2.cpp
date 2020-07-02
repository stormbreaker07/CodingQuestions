#include<bits/stdc++.h>

using namespace std;

#define l long int

l flag=0,ans =0;


void dfs(vector< pair<l,l> >,l a, l b, l cont)
{

    return 0;
}



int main()
{
int t;
cin>>t;

for(int i=0;i<t;i++)
{
    l n;
    cin>>n;
    l a,b,c;
    vector< pair<l,l> > ad[n+1];
    for(int j=1;j<n;j++)
    {
        cin>>a>>b>>c;
        ad[a].push_back(make_pair(b,c));
        ad[b].push_back(make_pair(a,c));
   }
string s;
for( ; ; )
{
cin>>s>>a>>b;
if(s == "DONE")
{break;}
if(s=="DIST")
{
    dfs(ad,a,b,0);
}
}



}




    return 0;

}

