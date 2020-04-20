#include<bits/stdc++.h>
using namespace std;

int main()
{
int x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;

    //for rook
    if(x1-x2==0 || y1-y2==0)
    {
        cout<<1<<" ";
    }
    else
    {
        cout<<2<<" ";
    }

    // for bishop
    if(abs(x1-x2)==abs(y1-y2))
    {cout<<1<<" ";}
    else
    {
        if(abs(y1-y2)%2==0)
        {
            if(abs(x1-x2)%2==0)
            {cout<<"2 ";}
            else
            {
            cout<<"0 ";
            }
        }
        else 
        {
            if(abs(x1-x2)&2!=0)
            {cout<<"2 ";}
            else
            {
                cout<<"0 ";
            }
            
        }
    }
    

    
    // for king
    cout<<max(abs(x1-x2),abs(y1-y2));

    return 0;
}
