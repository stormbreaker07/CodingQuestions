#include <bits/stdc++.h>
using namespace std;

#define l long long int

int main()
{
    l t;
    cin >> t;
    while (t--)
    {
        l n;
        cin >> n;
        l x, sum = 0, tot_xor = 0;
        for (l i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
            tot_xor = tot_xor ^ x;
        }

        l num1, num2;
        if (sum == 2 * tot_xor)
        {
            cout << 0 << endl
                 << endl;
        }
        else
        {
            l good = (1l<<50) + sum%2;
            sum+=good;
            tot_xor^=good;
            l num1 = 2*tot_xor - sum;
            cout<<3<<endl<<num1/2<<" "<<num1/2<<" "<<good<<endl;
        }
    }

    return 0;
}