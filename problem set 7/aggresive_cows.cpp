#include<bits/stdc++.h>
using namespace std;


vector<int> d;
int c;

void set_cows(int a[] ,int s ,  int n ) {


if(s>n || c<=0)
{
    return ;
}

    int mid = (s + n)/2;
    if(d[mid]==0)
    { d[mid] = 1;
    c--;}

    set_cows(a , 0 , mid-1);
    set_cows(a , mid+1 , n);
    

return ;
}



int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n>>c;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
    d.push_back(0);
vector<int> d;
}
if(c>0)
{
    d[0] = 1;
    c--;
}
if(c>0)
{
    d[n-1] = 1;
    c--;
}

set_cows(a , 0 , n-1 );

for(int i=0;i<n;i++)
{
    cout<<d[i]<<" ";
}



}

    return 0;
}