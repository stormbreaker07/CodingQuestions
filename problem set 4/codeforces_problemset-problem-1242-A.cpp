#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x;
    cin >> x;
    vector<long long int> p;
    int is_prime = 1;
    for (long int i = 2; i <= sqrt(x); i++)
    {
        
        if (x % i == 0)
        {
             is_prime = 0;
            p.push_back(i);
            p.push_back(x/i);
        }
       
    }
sort(p.begin(),p.end());
    int cont = 1;
    if (is_prime == 1)
    {
        cout << x;
    }
    else
    {
        for (long int i = 0; i < p.size()-1; i++)
        {
            if (p[i + 1] % p[i] == 0)
            {
                cont = 1;
            }
            else
            {
                cont = 0;
                break;
            }
        }
    if (cont == 1)
    {
        cout << p[0];
    }
    else
    {
        cout<<1;
    }
    
    }

    
    return 0;
}