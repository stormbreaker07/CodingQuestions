#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,x;
    cin>>n;
    int a[n];
     int temp;
     int mx=0,mn=1000;
     vector<int> v1,v2;
    for(int i=0;i<n;i++)
    {mx=0,mn=1000;
        cin>>x;
        while(x>0)
        {
            temp = x%10;
            if(temp>mx)
            {mx = temp;}
            if(temp<mn)
            {mn = temp;}
            x /=10;
        }
        a[i] =  mx*11 + mn*7;
            a[i]%= 100;

    if(i%2==0) //odd
    {
        v1.push_back(a[i]);
    }
    else //even
    {
        v2.push_back(a[i]);
    }
    

    } 

    sort(v1.begin() , v1.end());
    sort(v2.begin() ,v2.end());
   
int st,en;
int cont=1,ans=0;
int carry[10] = {0};
if(v1.size()>1)
    {for(unsigned int i=0;i<v1.size()-1 ;i++)
    {
        st = v1[i]/10;
        en = v1[i+1]/10;
        if(st == en)
        {
            cont++;
        }
        else
        {
            if(cont<3)
            {
                
                if(carry[st] < cont-1)
                {carry[st] = cont-1;}
            }
            else
            {
                carry[st] = 2;
                if(carry[st] < 2)
                {
                    carry[st] = 2;
                }
            }
            
            cont =1;
        }
    }

   
    if(cont<=3)
    {
         if(carry[st] < cont-1)
                {carry[st] = cont-1;}
    }
    else
    {
     carry[st] = 2;
     if(carry[st] < 2)
     {
        carry[st] = 2;
      }
    }

    cont =1;
    }
if(v1.size()>1)
{
for(unsigned int i=0;i<v2.size()-1 ;i++)
    {
        st = v2[i]/10;
        en = v2[i+1]/10;
        if(st == en)
        {
            cont++;
        }
        else
        {
            if(cont<3)
            {
                
                if(carry[st] < cont-1)
                {carry[st] = cont-1;}
            }
            else
            {
                carry[st] = 2;
                if(carry[st] < 2)
                {
                    carry[st] = 2;
                }
            }
            
            cont =1;
        }
    }

    if(cont<=3)
    {
         if(carry[st] < cont-1)
                {carry[st] = cont-1;}
    }
    else
    {
                carry[st] = 2;
                if(carry[st] < 2)
                {
                    carry[st] = 2;
                }
    }

    cont =1;
}

for(unsigned int i=0;i<10;i++)
{
    ans+=carry[i];
}

cout<<ans;


    return 0;
}   