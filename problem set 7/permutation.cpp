#include<bits/stdc++.h>
using namespace std;

void permu(char *in , int i ,set<string> s)
{
    if(in[i] == '\0')
    {
        s.insert(in);
        return ;
    }

    for(int j=i;in[j]!='\0';j++)
    {
        swap(in[i],in[j]);
        permu(in , i+1 , s);
        swap(in[i] , in[j]);
    }

return ;
}



int main()
{
    char a[100];
    cin>>a;
set<string> s;
permu(a,0,s);
for(auto x : s)
{
    cout<<x<<endl;
}



    return 0;
}