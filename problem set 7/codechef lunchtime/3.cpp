#include<bits/stdc++.h>
using namespace std;

#define l long long int 

int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
l a[n];
l x,y,ans1=0,ans2=0,mx = INT_MIN;
int s1=0,s2=0;
for(l i=0;i<n;i++)
{
cin>>a[i];
}

for(int i=0;i<n;i++)
{
     x = a[i];
            while(x>0)
            {
                y = x%2;
                s1++; 
               x =x/2;
            }

    for(int j=0;j<n;j++)
    {
           

            x = a[j];
            while(x>0)
            {
                y = x%2;
               s2++;
                x =x/2;
            }

            ans1 = (a[j]<<s1) + (a[i]);
            ans2 = (a[i]<<s2) + (a[j]);
    cout<<" "<<a[i]<<" "<<a[j]<<" "<<ans1<<" "<<ans2<<" ";

mx = max(mx , ans1 - ans2); 
cout<<mx<<endl;      
       s2=0;
        ans1=0,ans2=0;
        
    }
     s1=0;
}
cout<<mx<<endl;

}


    return 0;
}