#include<bits/stdc++.h>
using namespace std;

int number_of_ways(int n)
{
    if(n<=3)
    {return 1;}
    
    int num = number_of_ways(n-1) + number_of_ways(n-4);
    return num;
}


int main() {

int n;
cin>>n;

cout<<number_of_ways(n);


    return 0;
}