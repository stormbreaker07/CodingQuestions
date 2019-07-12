#include<vector>
#include<iostream>
#include<map>
using namespace std;

int main(){

    int x,y,m,n;
cin>>n>>m;
vector<int> v1[n+1];

for(int i=0;i<m;i++){
cin>>x>>y;
v1[x].push_back(y);
v1[y].push_back(x);
}

for(int i=0;i<n+1;i++){

    cout<<i<<"-->";
    for(int j=0;j<v1[i].size();j++)
    cout<<v1[i].at(j)<<" ";

    cout<<endl;
    
}

return 0;
}