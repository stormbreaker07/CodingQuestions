#include<bits/stdc++.h>
using namespace std;


string s;
void solve(string a , int st ,int end)
{
    //base case
    if(st > end)
    {
        return ;
    }

    //updating
    int mid = (end + st)/2;
    s = s + a[mid];

    //recursion
    solve(a , st , mid-1);
    solve(a , mid+1 , end);

return;    
}


int main()
{
int t;
cin>>t;
int n;
string x;
while(t--)
{
cin>>n;
cin>>x;
solve(x , 0 , n-1);
cout<<s<<endl;
s.clear();

}



    return 0;
}