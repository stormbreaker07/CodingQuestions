#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string z1,z2;
    cin>>z1>>z2;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        a[i] = z1[i]-'0';
        b[i] = z2[i]-'0';
    }
    sort(a,a+n,greater<int>());
    sort(b,b+n,greater<int>());

int count2=0,count1=0;
int i=0,j=0;
    for( ; ; )
    {
        if(i==n || j==n)
        {break;}
        if(a[i]<b[j])
        {count2++;
        i++;
        j++;}
        else if(a[i]>=b[j])
        {
            i++;
        }
    }
    i=0,j=0;
    for( ; ; )
    {
        if(i==n || j==n)
        {
            break;
        }
        if(a[i]<=b[j])
        {
        i++;
        j++;
        }
        else
        {count1++;
            i++;
        }
    }

    cout<<count1<<" "<<count2;



    return 0;
}