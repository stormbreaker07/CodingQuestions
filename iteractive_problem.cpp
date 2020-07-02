#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int l1 = 1, r1 = n, l2 = 1, r2 = n;
    int k = 1;
    while (k > 0)
    {

        if (k % 2 == 1)
        {
            long long int mid = (l1 + r1 + 1) / 2;
            cout << mid;
            fflush(stdout);

            char c;
            cin >> c;
            if (c == 'L')
                r1 = mid - 1;
            else if (c == 'G')
                l1 = mid;
            else if (c == 'E')
            {
                break;
            }
        }
        else
        {
            long long int mid = (l2 + r2 + 1) / 2;
            cout << mid;
            fflush(stdout);

            char c;
            cin >> c;
            if (c == 'L')
                r2 = mid - 1;
            else if (c == 'G')
                l2 = mid;
            else if (c == 'E')
            {
                break;
            }
        }
        k++;
    }

    return 0;
}