#include<bits/stdc++.h>
using namespace std;


bool is_possible(int a[] , int mid , int n , int num)
{
    int curr_time=0;
    int prata=0;
    for(int i=0;i<n;i++)
    {curr_time=0;
        for(int j=1; ;j++)
        {
            
            if(curr_time + a[i]*j <=mid)
            {
                curr_time += a[i]*j;
                prata++;
            }
            else
            {
                break;
            }
            

        }
        if(prata >=num)
        {
            return true;
        }
    }

    return false;
}


int find_solution(int a[] , int n ,int num)
{
int s = 0;
int e = a[0]*(((num)*(num+1))/2);


int ans = INT_MAX;

while(s<=e)
{
    int mid = (s + e)/2;
  
    
    if( is_possible(a , mid , n , num))
    {
        
        ans = min(ans ,mid);
        e = mid - 1;
    }
    else
    {
        s = mid+1;
    }

}


return ans;
}


int main()
{
int t;
cin>>t;
while(t--)
{
int num;
cin>>num;
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{      
     cin>>a[i];
}

sort(a , a+n);

cout<<find_solution(a , n ,num)<<endl;


}



    return 0;
}