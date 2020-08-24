#include <bits/stdc++.h> 
using namespace std; 
  
int diffNum(int arr[], int n) 
{ 
    int total = 0;  
    for (int i = 0; i < n; i++) 
        total += arr[i]; 
        
    bool arra[n+1][total+1]; 
  
    for (int i = 0; i <= n; i++) 
        arra[i][0] = true; 

    for (int i = 1; i <= total; i++) 
        arra[0][i] = false; 
  
    for (int i=1; i<=n; i++) 
    { 
        for (int j=1; j<=total; j++) 
        { 
            arra[i][j] = arra[i-1][j]; 
  
            if (arr[i-1] <= j) 
                arra[i][j] |= arra[i-1][j-arr[i-1]]; 
        } 
    } 
   
    int diff = INT_MAX; 
      
    for (int j=total/2; j>=0; j--) 
    { 
        if (arra[n][j] == true) 
        { 
            diff = total-2*j; 
            break; 
        } 
    } 
    return diff; 
} 
  

int main() 
{ 
    string s;
    getline(cin , s);
    string s1;
    vector<int> v;
    int num=0;
    for(unsigned int i=0;i<s.length();i++)
    {
       
        if(int(s[i])>=48 && int(s[i])<=57)
        {
            num = num*10 + (s[i]-'0');
            
            s1 = s1+s[i];
        }
        else if(int(s[i]) == 32)
        { 
            
            v.push_back(num);
            num=0;
            s1.clear();
        }
        
    }
    
    v.push_back(num);
    int w=0;
int arr[v.size()];
for(unsigned int i=0;i<v.size();i++)
{
    arr[i] = v[i];
    w += v[i];
}
    int n = sizeof(arr)/sizeof(arr[0]); 
    int m = diffNum(arr, n);
    int a = (w+m)/2;
    int b = w-a;
    cout<<max(a,b); 
    return 0; 
} 