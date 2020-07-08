#include<bits/stdc++.h>
using namespace std;

int root(int arr[],int x)
{
    while(arr[x]!=x)
    {
        arr[x] = arr[arr[x]];
        x= arr[x];
    }
return x;
}


int main()
{
    int arr[27],size[27],small[27];
for(int i=0;i<27;i++)
{
    arr[i]=i;
    size[i]=1;
    small[i]=0;
}


    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int x,y;
    for(int i=0;i<s1.length();i++)
    {
        x=int(s1[i]) - 96;
        y=int(s2[i]) - 96;
        int root_x = root(arr,x);
        int root_y = root(arr,y);
         if (arr[root_x] != arr[root_y])
        {
            if(arr[root_y]>=arr[root_x])
            {
                arr[root_y] = arr[root_x];
                size[root_x] += size[root_y];
            }
            else
            {
                arr[root_x] = arr[root_y];
                size[root_y] += size[root_x];
            }
        }

    }
char a[s3.length()];
for(int i=0;i<s3.length();i++)
{
    x = int(s3[i])-96;
    int root_x = root(arr,x);
    int  w = arr[root_x]+96;
    a[i] = char(w);
    cout<<a[i];
}
    return 0;
}