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
    int t;
    cin>>t;
    vector< pair<int, int> > v;
    int w = 0;
    while(t--)
    {
    w+=1;
    string s;
    cin>>s;
    int x = hash_of_string(s , 0);
    v.push_back({x , w});   
    }
    sort(v.begin(),v.end());
    for(auto x : v)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }


    return 0;
}