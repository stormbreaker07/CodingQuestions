#include<bits/stdc++.h>
using namespace std;

int main() {

    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }

int s=0;
int e=x,ans;
int mid;
    while(s<e)
    {
        mid = (s+e)/2;
        if(a[mid] >= a[mid-1]) {
            ans = mid;
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
        

    }
    cout<<ans;
    return 0;
}