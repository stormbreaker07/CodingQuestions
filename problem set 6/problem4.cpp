#include <bits/stdc++.h>
using namespace std;

#define l long long int
#define pb push_back

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        l x, y, z, r;
        cin >> x >> y >> z >> r;
        l a, b;
        a = x;
        b = y;
        int arr1[63] = {0};
        int arr2[63] = {0};
        int k = 0;

        int e;
        while (a > 0)
        {
            e = a % 2;
            arr1[k] = e;
            ;
            a = a / 2;
            k++;
        }
        int  mx = k;
        k = 0;
        while (b > 0)
        {
            e = b % 2;
            arr2[k] = e;
            b = b / 2;
            k++;
        }
        mx = max(mx,k);

        l sum = 0;
        l w = 0, ans = 0;
        l maxico = pow(2,62);

        if (x > 0 && y > 0)
        {
            for(int j=0;j<=mx;j++)
            {
                if(arr1[j] == 1 && arr2[j]==1 )
                {
                      w = sum + pow(2, j);
                    ans = (x&w)*(y&w);

                    if ( w<=r && ans<=maxico)
                    {
                        sum = w;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            
            
            for (int j = 0; j <=mx ; j++)
            {

                if ( (arr1[j] == 0 && arr2[j] == 1 ) || (arr1[j] == 1 && arr2[j] == 0 ) )
                {
                    w = sum + pow(2, j);
                    ans = (x&w)*(y&w);

                    if ( w<=r && ans<=maxico)
                    {
                        sum = w;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        else
        {
            sum=0;
        }
        

        cout << (l)sum << endl;
    }

    return 0;
}