#include<bits/stdc++.h>
using namespace std;


long int solve(long int a[] , int m ,int s, int e) {
int ans = INT_MAX; 
while(s<=e) {
    int mid = (s+e)/2;

    if(a[mid] == m) {
        ans = mid;
        break;
    }
    else if(a[mid] > m) {
        ans = min(ans , mid);
        e  = mid -1;
    }
    else {
        s = mid+1;
    }

}

return ans + 1;
}


int main() {

int n;
cin>>n;
long int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

for(int i=1;i<n;i++)
{
   a[i] += a[i-1];
}

int m,x;
cin>>m;
for(int i=0;i<m;i++) {
    cin>>x;
    cout<<solve(a , x, 0 ,n)<<endl;

}




    return 0;
}