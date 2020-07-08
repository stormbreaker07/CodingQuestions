#include<bits/stdc++.h>
using namespace std;


int main()
{
long long int l,r;
cin>>l>>r;
string s1,s2;
int l1=0,r1=0;
long long int x= l,y=r;
while(x>0)
{
    l1++;
    x =x/2;
}
while(y>0)
{
    r1++;
    y = y/2;
}



long long int an=0,in,w,cont=0,total=0;
for(int i=l1;i<=r1;i++)
{
    for(long long int j=0; j< (long long int)pow(2,i); j++)
    {in = j;
    cout<<j<< " ";
        cont=0,an=0;
        for(int k=0;k<i;k++)
        {// {cout<<an<< " ";
            w = in&1;
            if(in&1==0)
            {cont++;}
            an = an*10 + w;
            in = in/2;
            
        }
        cout<<an<<" "<<endl;
        if(an>=l && an<=r)
        {
            if(cont==1)
            {
                total++;
            }
        }
    }
}
cout<<total;



    return 0;
}