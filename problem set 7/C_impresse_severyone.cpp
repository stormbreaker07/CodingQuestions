#include<bits/stdc++.h>
using namespace std;

int ans = INT_MAX;

 void fun(long long int a[] , int x ,int s, int e)  {
     while(s<=e) {
         int mid = (s+e)/2;
         if(a[mid]< x) 
         {
              s = mid + 1;
         }
         else {
             ans = min(mid,ans);
             e  = mid - 1;
         }

     }

     return ;
 }



int main() {

int n;
cin>>n;
long long int a[n];
for(int i=n-1;i>=0;i--) {
    cin>>a[i];
}
reverse(a ,a+n);
for(int i=1;i<n;i++) {
    a[i] +=a[i-1];
cout<<a[i]<<" ";
}


int q;
cin>>q;
long int x;
while(q--)
{
    cin>>x;
    fun(a , x , 0 , n-1);
    ans += 1;
    if(ans%2==0)
    {
        cout<<"B"<<endl;
    }
    else
    {
        cout<<"A"<<endl;
    }

}


    return 0;
}