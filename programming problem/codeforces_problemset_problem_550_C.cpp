#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a[s.length()];
    int n = s.length();
    int finalvalue=0,flag=0,found =0;
    for (int i = 0; i < s.length(); i++)
    {
        a[i] = s[i] - '0';
    if(a[i]==8)
    {
        finalvalue = 8;
        found = 1;
    }
    if(a[i]==0)
    {flag = 1;}
    }
    
    
    
    int ans,nwCount=0;
    int div;
    //for 2 digit element
    
    
    
    
    for (int i = 0; i < n; i++)
    {
        ans = a[i]*10;
        div = ans/8;
        ans = 8*(div+1);
        for(int j=i+1;j<n;j++)
        {
            if(a[j]==ans%10)
            {
                found=1;
                finalvalue = ans;
                break;
            }
        }
        if(found==1)
        {break;}
    }

int nwvalue=0;
    if(found==0)
    {ans=0,div=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                ans = a[i]*10;
                for(int j=i+1;j<n;j++)
                {
                    nwvalue = (ans+a[j])*10;
                    for(int k=j+1;k<n;k++)
                    {
                        finalvalue = nwvalue+a[k];
                        div = finalvalue/8;

                        if(div*8 == finalvalue)
                        {
                            found=1;
                            break;
                        }
                    }
                    if(found==1)
                    {break;}
                }
            }
        if(found==1)
        {break;}
        }
    }

    if(found==1)
    {
        cout<<"YES"<<endl;
        cout<<finalvalue;
    }
    else
    {
        if(flag==1)
        {cout<<"YES"<<endl<<0<<endl;}
        else{
        cout<<"NO";
        }
    }
    

    return 0;
}