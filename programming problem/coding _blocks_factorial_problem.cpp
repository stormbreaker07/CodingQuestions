#include <bits/stdc++.h>
using namespace std;

#define int_max 10000000000
#define l long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        l n, k;
        cin >> n >> k;
        l ans = int_max, occur = 0;
        for (l i = 1; i * i <= n; i++)
        {
            if (i % k == 0)
            {
                occur = 0;
                while (k % i == 0)
                {
                    occur++;
                    k = k / 2;
                }

                long long int cont=0;
                l p = i;
                while(n%p==0)
                {
                    cont += n/p;
                    p = p*i;
                }
                ans = min(ans,cont/occur);
            }
        }
        if(k>1)
        {
            l p = k,cont=0;
            while(n%p==0)
            {
                cont += n/p;
                p = p*k;
            }
            ans = min(ans,cont); 
        }

        if(ans  == int_max)
        {
            ans = 0;
        }

cout<<ans<<endl;
    }

    return 0;
}