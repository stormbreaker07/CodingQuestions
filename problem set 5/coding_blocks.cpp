#include<bits/stdc++.h>
using namespace std;

#define l1 long int
#define l2 long long int  

int main()
{
    int n;
    cin>>n;
    l1 a[n];
    set<l1> s; 
    l2 md  = (l2)pow(10,9)+7;
    for(l1 i=0;i<n;i++)
    {
        cin>>a[i];
    }
l1 j=0,cont=0;
l2 sum=0;
    for(l1 i=0;i<n;i++)
    {j=i;
    while(j<n && s.find(a[j])==s.end())
    {
        cont++;
        s.insert(a[j]);
        j++;
    }
  
    s.clear();
    sum = (sum+(cont*(cont+1))/2)%md;
    cont=0;
    }

    cout<<sum;



    return 0;
}