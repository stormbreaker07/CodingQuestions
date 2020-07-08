#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n,m,flag=0;
    cin>>n>>m;
    int a[n];
    long int cont =0;
    vector<int> v(1000000,0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
int j=0;
    for(int i=0;i<n;i++)
    {
        if(v[a[i]]==0)
        {
            cont++;
            if(cont==m)
            {flag=1;
                j=i;
                break;
            }
        }
        v[a[i]]++;
    }
int start = 0;
    for(int i=0;i<=j;i++)
    {
        if(v[a[i]]>1)
        {
            v[a[i]] -= 1;
            start = i+1;
        }
        else
        {
            break;
        }
    }
int end = j;
    for(int i=j;i>=start;i++)
    {
        if(v[a[i]]>1)
        {
            v[a[i]] -= 1;
            end = i-1;
        }
        else
        {
            break;
        }
    }
    if(flag==1)
    {cout<<start+1<<" "<<end+1;}
    else
    {
        cout<<-1<< " " <<-1;
    }
    



    return 0;
}