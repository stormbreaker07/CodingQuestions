/* binary search */
/*
#include<bits/stdc++.h>
using namespace std;

int ans =0;

void find_binary(int a[],int l,int r,int num)
{
    int mid = l+ ((r-l)/2) ;

    if(l>r)
    {return ;}

    if(a[mid] == num)
    {
        ans = 1;
        return ;
    }
    else if(a[mid] > num)
    {
        find_binary(a,l,mid-1,num);
    }
    else if(a[mid] < num)
    {
        find_binary(a,mid+1,r,num);
    }

}



int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
int num;
cin>>num;

find_binary(a,0,n-1,num);
cout<<ans;

    return 0;
}

*/
/*power of a number */
/*
#include<bits/stdc++.h>
using namespace std;

int power(int a,int n)
{
    if(n==0)
    {return 1;}

    return a*power(a,n-1);
}



int main()
{

    int a,n;
    cin>>a>>n;

    cout<<power(a,n);

    return 0;
}


*/


/* multiplication */
#include<bits/stdc++.h>
using namespace std;

int multi(int a,int b)
{

    if(b==0)
    {return 0;}

    return a + multi(a,b-1);
}



int main()
{
    int a,b;
    cin>>a>>b;

    cout<<multi(a,b);
    return 0;
}