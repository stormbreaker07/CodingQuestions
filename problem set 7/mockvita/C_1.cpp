#include<bits/stdc++.h>
using namespace std;


int main()
{
int x2 ,x1 ,a, b;
cin>>x1>>x2>>a>>b;
int mn,mx;
long int store=0,w,x;
for(int i=a;i<=b;i++)
{mn = x1,mx = x2;
    if(i==1)
    {
        store+= (mx*(mx+1) - mn*(mn+1))/2 + mn;
    }
    else
    {
        for(int j=1; ;j++)
        {w = i*j;
            if(w>mx)
            {
                x = (mx - mn)*(i+j-1);
                store += x;
                break;
            }
            else if(w>mn && w<=mx)
            {
                x = (w - mn)*(i+j-1);
                store += x + j;
                mn = w;
            }
        }

    }
    
}

cout<<store;



return 0;
}