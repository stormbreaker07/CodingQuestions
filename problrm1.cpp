#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        int cont=1;
        int mx = 0;
        int mn = 20;
        for(int j=0;j<n-1;j++)
        {
            if(a[j+1]-a[j]<3)
            {
                cont++;
            }
            else
            {

                mx = max(cont,mx);
                mn = min(cont,mn);
                cont=1;
            }
        }
         mx = max(cont,mx);
                mn = min(cont,mn);

        cout<<mn<< " " <<mx<<endl;
    }

    return 0;
}