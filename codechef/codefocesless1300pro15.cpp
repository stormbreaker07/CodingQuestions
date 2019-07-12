#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int x;
double y,sum;
cin>>x;
for(int i=1;i<=x;i++)
{cin>>y;
sum=sum+y/100.00;

}
cout<<fixed<<setprecision(12)<<(sum/x)*100; 
return 0;
}