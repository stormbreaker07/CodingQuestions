#include<bits/stdc++.h>
using namespace std;


int main()
{

int n;
cin>>n;
string s1,s2;
cin>>s1>>s2;

int g_r=0,g_m=0;
for(int i=0;i<n;i++)
{
    if(s2[i]=='r')
    {
        g_r+=1;
    }
    else
    {
        g_m+=1;
    }
}

int cont=0;
for(int i=0;i<n;i++)
{
    if(s1[i]=='r')
    {
        if(g_r>0)
        {
            cont++;
            g_r--;
        }
        else
        {
            break;
        }
    }
    else if(s1[i] == 'm')
    {
            if(g_m>0)
            {
                cont++;
                g_m--;
            }
            else
            {
                break;
            }
            
        }
}


cout<<n-cont;

    return 0;
}