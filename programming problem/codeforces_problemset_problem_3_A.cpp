#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a, b;
    int x1, x2,y2, y1;
    cin >> a >> y1;
    cin >> b >> y2;
    x1 = int(a) - (int('a') + 1);
    x2 = int(b) - (int('a') + 1);
    cout << max(abs(x2 - x1), abs(y2 - y1)) << endl;
    for ( ; ; )
    {
        if (x1 > x2)
        {
            cout << 'L';
            x1--;
            if (y1 > y2)
            {
                cout << 'D' << endl;
            y1--;
            }
            else if (y1 < y2)
            {
                cout << 'U' << endl;
            y1++;
            }
            else if (y1 == y2)
            {
                cout << endl;
            }
        }
        if (x1 < x2)
        {
            cout << 'R';
            x1++;
            if (y1 > y2)
            {
                cout << 'D' << endl;
            y1--;
            }
           else  if (y1 < y2)
            {
                cout << 'U' << endl;
            y1++;
            }
            else if (y1 == y2)
            {
                cout << endl;
            }
        }
        if (x1 == x2)
        {
            if (y1 > y2)
            {
                cout << 'D' << endl;
            y1--;
            }
            else if (y1 < y2)
            {
                cout << 'U' << endl;
            y1++;
            }
            else if (y1 == y2)
            {
                break;
            }
        }
    }

    return 0;
}