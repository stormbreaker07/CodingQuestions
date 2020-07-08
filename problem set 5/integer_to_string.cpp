#include<bits/stdc++.h>
using namespace std;

string a[10] = {"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine" };


void function1(int n)
{
if(n==0)
{
    return;
}

function1(n/10);
cout<<a[n%10]<<" ";

return;  
}





int main() {

int n;
cin>>n;

function1(n);


}