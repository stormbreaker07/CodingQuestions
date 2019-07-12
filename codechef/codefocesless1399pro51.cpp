    #include <bits/stdc++.h> 
    #include<iostream>
    #include<string>
    using namespace std;
    
    int main()
    {int n,m,c=0;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {for(int j=0;j<m;j++)
    {cin>>a[i][j];}
    }
    for(int i=0;i<n;i++)
    {for(int j=0;j<m;j++)
    {if(a[i][j]=='W')
    {
    if(j==m-1)
    {if(a[i][j-1]=='P' || a[i-1][j]=='P' || a[i+1][j]=='P')
    {c++;}}
    else if(j==0)
    {if(a[i][j+1]=='P' || a[i-1][j]=='P' || a[i+1][j]=='P')
    {c++;}}
    else if(j<m-1 && j>0)
    {if(a[i][j+1]=='P' || a[i-1][j]=='P' || a[i+1][j]=='P' || a[i][j-1]=='P')
    {c++;}}
    }}
    }
    cout<<c;
    return 0;
    }