#include <bits/stdc++.h>
using namespace std;

int main()
{
    float need;
    cin >> need;

    float x = 1.0;
    float i = 365.0;
    int people = 0;
    if (need == 1)
    {
        cout<<366;
    }
    else
    {
        while (x > 1 - need)
        {
            x = x * (i / 365.0);
            cout << x << " ";
            i--;
            people++;
        }
    }

    cout << endl
         << people;
    return 0;
}