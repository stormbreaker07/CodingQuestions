#include<bits/stdc++.h>
using namespace std;

int hash_of_string(string s, long long  hash) {

int p = 31;
long long int m = 1e9 + 9;
int pw = 1;
for(char x : s) {
    hash = (hash + ( x - 'a' + 1)*pw)%m;
    pw = (pw*p)%m;
}

return hash;
}


int main()
{

string s;
cin>>s;
cout<<hash_of_string(s , 0);


    return 0;
}