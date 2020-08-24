#include<bits/stdc++.h>
using namespace std;


int main()
{
string x1,x2,x3;
cin>>x1>>x2>>x3;
sort(x1.begin() ,x1.end());
sort(x2.begin() ,x2.end());
sort(x3.begin() ,x3.end());

long int mn1;
mn1 = (x1[0]- '0') + (x2[0]- '0') + (x3[0]- '0');

long int mx1;
mx1 = (x1[x1.length() -1 ]- '0') + (x2[x2.length() -1]- '0')  + (x3[x3.length() -1]- '0');

cout<<(mx1) - (mn1);

    return 0;
}