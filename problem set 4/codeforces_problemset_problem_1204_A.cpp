#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    long int x,ans=0,cont=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            cont++;
            x = i;
            if(x%2!=0)
            {cont++;}
            x = x/2;
            ans = x+1;
        }
    }
    if(cont>1 || ans==0)   
    {cout<<ans;}
    else
    {
        cout<<ans-1;
    }
    

    return 0;
}