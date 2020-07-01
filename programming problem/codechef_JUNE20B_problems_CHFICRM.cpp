#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        int x,r,flag=0;
        long int a[16]={0}; 
        while(n--)
        {
            cin>>x;
            a[x]++;
            r  = x-5;
            if(r==5)
            {
                if(a[5]==0)
                {
                    flag=1;}
                else
                {a[5]--;}
               
            }
            else if(r == 10)
            {
                if(a[10]==0)
                {
                    if(a[5]>=2)
                    {a[5]-=2;}
                    else
                    {flag=1;}
                    
                }
                else
                {
                    a[10]--;
                }
            }
        }
        if(flag==1)
        {cout<<"NO"<<endl;}
        else
        {cout<<"YES"<<endl;}
    }

    return 0;
}