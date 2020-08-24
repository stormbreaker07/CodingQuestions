#include <bits/stdc++.h>
using namespace std;


int ans,n;


bool is_possible(int a[], int mid, int m)
{
    int num_student = 1;
    int page_reading = 0;

    for (int i = 0; i < n; i++)
    {

        if (page_reading + a[i] > a[mid])
        {
            num_student++;
            page_reading = a[i];

            if (num_student > m)
            {
                return false;
            }
        }
        else
        {
            page_reading += a[i];
        }
    }

    return true;
}

void find_solution(int a[], int s, int e, int m)
{
    ans = INT_MAX;
    if(n<m)
    {return ;}

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (is_possible(a, mid, m))
        {
            if(ans > mid)
            {ans = mid; } 
            e = mid - 1;
        }
        else
        {
            
            s = mid + 1;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ans = INT_MAX;
        int m;
        cin >> n >> m;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {   
            cin >> a[i];
            sum += a[i];
        }
cout<<sum<< " "<<a[n-1]<<" "<<ans<<" "<<endl;
        find_solution(a, 0, sum, m);
        cout<<ans;
    }

    return 0;
}