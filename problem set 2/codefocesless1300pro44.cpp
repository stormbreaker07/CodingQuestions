#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int x;
cin>>x;
    string t1,t2;
    string s1[x];
    for(int i=0;i<x;i++)
    {cin>>s1[i];}
    t1=s1[0];
    int team1=0,team2=0;
    for(int i=0;i<x;i++)
    {if(s1[i]==t1)
    {team1+=1;}
    else if(s1[i]!=t1)
    {t2=s1[i];
        team2+=1;}
    }
    if(team1>team2)
    {cout<<t1;}
    else
    {cout<<t2;}

    
    return 0;
}

