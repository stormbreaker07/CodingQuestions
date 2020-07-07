#include<bits/stdc++.h>
using namespace std;


int ladder(int n) {

if(n<0)
{
    return 0;
}
if(n==1 || n==0)
{
    return 1;
}

int num = ladder(n-1) + ladder(n-2) + ladder(n-3) ; 
    return num;
}

int main() {

    int n;
    cin>>n;
    cout<<ladder(n);


    return 0;
}