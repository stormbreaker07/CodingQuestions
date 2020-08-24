#include<bits/stdc++.h>
using namespace std;

queue<int> pre_q;

void solve(string x, int n,int m)
{
   
    
    //base case
    if(pre_q.size()==1)
    {return;}
    
    // less length of string
        int we = pre_q.size();
        int flag=0;
        for(int i=m;i<we+m;i++)
        {
            if(i>=x.length())
            {
                flag=1;
              break;
            }
            if(x[i] == 'x')
          {
            pre_q.push(pre_q.front());
          }
          pre_q.pop();
        }
       
    if(flag==0)
    {solve(x, n , we+m);}
    else
    {
        solve(x,n,0);
    }
    

    return ;
}


int main()
{
long int n;
cin>>n;
string x;
cin>>x;
for(int i=1;i<=n;i++)
{
    pre_q.push(i);
}

solve(x,n,0);
while(!pre_q.empty())
{
    cout<<pre_q.front()<<" ";
    pre_q.pop();
}

    return 0;
}