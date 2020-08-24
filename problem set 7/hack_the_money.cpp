#include<bits/stdc++.h>
using namespace std;

int flag=0;

void solve(int n, int st)
{
    //base case
    if(st>n) {
        return ;
    }

    if(st==n) {
        flag=1;
        return ;
    }

    //recursive case
    solve(n , st*10);
    solve(n , st*20);

return ;
}



int main()
{
int t;
cin>>t;
long long int x;
while(t--)
{
    cin>>x;
    solve(x, 1);
   if(flag==1)
   {
       cout<<"Yes"<<endl;
   }
   else
   {
       cout<<"No"<<endl;
   }
   
    flag=0;
}


    return 0;
}