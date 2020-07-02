#include<bits/stdc++.h> 
using namespace std; 

long long int inv(long long int a, long long int m) 
{ 
    int m0 = m, t, q; 
    int x0 = 0, x1 = 1; 
  
    if (m == 1) 
       return 0; 
  
    while (a > 1) 
    { 
        q = a / m; 
  
        t = m; 
  
        m = a % m, a = t; 
  
        t = x0; 
  
        x0 = x1 - q * x0; 
  
        x1 = t; 
    } 
  
    if (x1 < 0) 
       x1 += m0; 
  
    return x1; 
} 


long long int findMinX(long long int num[], long long int rem[], long long int k) 
{ 
    long long int prod = 1; 
    for (long long int i = 0; i < k; i++) 
        prod *= num[i]; 
  
    long long int result = 0; 
  
    for (long long int i = 0; i < k; i++) 
    { 
        long long int pp = prod / num[i]; 
        result += rem[i] * inv(pp, num[i]) * pp; 
    } 
  
    return result % prod; 
} 
  
// Driver method 
int main(void) 
{ 
    long long int number;
    cin>>number;
    long long int num[number]; 
    long long int rem[number]; 
    long long int k = number;
    for(long long int i=0;i<number;i++) 
    {cin>>num[i];}
    for(long long int i=0;i<number;i++) 
    {cin>>rem[i];}
    cout <<findMinX(num, rem, k); 
    return 0; 
} 