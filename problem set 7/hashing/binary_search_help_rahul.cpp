// #include<bits/stdc++.h>
// using namespace std;

// int binary_find(int a[] , int k ,int n) {

//     int mid,s,e=n;
//     while(s<=e)
//     {
//         mid = (s+e)/2;
//         if(a[mid] ==k)
//         {
//             return mid;
//         }
//         else if(a[mid] >k)
//         {
//             if( a[s] < k )
//             {
//                 e = mid-1;
//             }
//             else
//             {
//                 s = mid+1;
//             }
//         }
//         else if(a[mid] < k)
//         {
//             if(a[e] > k)
//             {
//                 s = mid+1;
//             }
//             else 
//             {
//                 e = mid-1;
//             }
//         }
//     }


//     return -1;
// }


// int main()
// {
// int n;
// cin>>n;
// int a[1000000];
// for(int i=0;i<n;i++)
// {
//     cin>>a[i];
// }
// int k;
// cin>>k;

// cout<<binary_find(a,k,n-1);


//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int binary_find(int a[] , int k ,int n) {

    int mid,s=0,e=n;
    while(s<=e)
    {
        mid = (s+e)/2;
	
        if(a[mid] ==k)
        {
            return mid;
        }
        else if(a[mid] >k )
        {
            if( a[s] <= k )
            {
                e = mid-1;
            }
            else
            {
                s = mid+1;
            }
        }
        else if(a[mid] < k)
        {
            if(a[e] >= k)
            {
                s = mid+1;
            }
            else 
            {
                e = mid-1;
            }
        }
		
    }


    return -1;
}


int main()
{
int n;
cin>>n;
int a[1000000];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int k;
cin>>k;

cout<<binary_find(a,k,n-1);


    return 0;
}