#include<bits/stdc++.h>
using namespace std;

int main()
{
long int n,x,pre;
int flag=0;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>x;
    while(x%2==0)
    {x = x/2;}
    while(x%3==0)
    {x = x/3;}
    cout<<x<< " ";
    if(i!=0)
    {
        if(pre!=x)
        {
            flag=1;
            break;
        }
    }
    pre = x;
}
if(flag==1)
{
    cout<<"No"<<endl;
}
else
{
    cout<<"Yes"<<endl;
}



    return 0;
}