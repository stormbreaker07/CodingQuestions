#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int a[n];

for(int i=0;i<n;i++) {
    cin>>a[i];
}

int q;
cin>>q;
long int p;
while(q--) {
cin>>p;
long long int power=0,count=0;
for(int i=0;i<n;i++)
{
    if(a[i]<=p)
    {
        power+= a[i];
        count++;
    }    
}
cout<<count<<" "<<power<<endl;
    power=0;
    count=0;

}



    return 0;
}