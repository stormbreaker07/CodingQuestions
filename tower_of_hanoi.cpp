#include<bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n,char src , char helper, char dest)
{
if(n==0)
{return ;}


tower_of_hanoi(n-1, src, dest, helper);
cout<<"shift "<<n<<" from "<<src<<" to "<<dest<<endl;
tower_of_hanoi(n-1, helper , src , dest );

    return ;
}

int main()
{
    int n;
    cin>>n;

    tower_of_hanoi(n,'a','b','c');


    return 0;
}