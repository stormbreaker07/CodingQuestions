#include<bits/stdc++.h>
using namespace std;


int main() {

int n;
cin>>n;
long int str,int1,exp;
while(n--) {
    cin>>str>>int1>>exp;
    long int x = 0;
      long int  minAddStr = max(x, (exp + int1 - str + 2) / 2);
        cout<<max(exp - minAddStr + 1, x)<<endl;



}


    return 0;
}