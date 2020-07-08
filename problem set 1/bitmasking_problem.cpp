#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
    long long int n;
    cin >> n;

    int a[] = {2, 3, 5, 7, 11, 13, 17, 19};
    int j = 0,w,cont=0;
    long int num = 1;
    long long int ans=0;
    for (int i = 1; i < 1 << 8; i++)
    {
        j = 0;
        w = i;
        num = 1;
        cont=0;
        while (w > 0)
        {
            if (w & 1 == 1)
            {
                num = num * a[j];
            cont++;
            }
            w = w / 2;
            j++;
        }
       if(cont%2!=0)
       {
           ans = ans + n/num;
       }
       else
       {
           ans =ans - n/num;
       }
       
    }
    cout<<ans<<endl;
    }

    return 0;
}
