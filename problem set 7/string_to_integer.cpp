#include<bits/stdc++.h>
using namespace std;

int num=0;

int string_to_int(string s , int i , int p) {

if(i>=s.length())
{
    return 0;
}
num += (s[i] - '0')*pow(10,p);
string_to_int(s,i+=1,p-=1);


return num;
}



int main()
{
string st;
cin>>st;

cout<<string_to_int(st,0,st.length()-1);


    return 0;
}