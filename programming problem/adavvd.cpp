
#include <bits/stdc++.h> 
using namespace std; 
  
long int _mergeSort(long int arr[], long int temp[],long int left,long int right); 
long int merge(long int arr[],long int temp[],long int left,long int mid,long int right); 
  

long int mergeSort(long int arr[],long int array_size) 
{ 
    long int temp[array_size]; 
    return _mergeSort(arr, temp, 0, array_size - 1); 
} 
long int _mergeSort(long int arr[], long int temp[], long int left, long int right) 
{ 
   long int mid, inv_count = 0; 
    if (right > left) { 
     
        mid = (right + left) / 2; 
  
        inv_count += _mergeSort(arr, temp, left, mid); 
        inv_count += _mergeSort(arr, temp, mid + 1, right); 
  
        inv_count += merge(arr, temp, left, mid + 1, right); 
    } 
    return inv_count; 
} 
  

long int merge(long int arr[], long int temp[], long int left, 
          long int mid, long int right) 
{ 
    long int i, j, k; 
    long int inv_count = 0; 
  
    i = left; 
    j = mid; 
    k = left;
    while ((i <= mid - 1) && (j <= right)) { 
        if (arr[i] <= arr[j]) { 
            temp[k++] = arr[i++]; 
        } 
        else { 
            temp[k++] = arr[j++]; 
  
            inv_count = inv_count + (mid - i); 
        } 
    } 
  
    while (i <= mid - 1) 
        temp[k++] = arr[i++]; 
  
    while (j <= right) 
        temp[k++] = arr[j++]; 
  
    for (i = left; i <= right; i++) 
        arr[i] = temp[i]; 
  
    return inv_count; 
} 
  

int main() 
{ 
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long int n;
		cin>>n;
		
    long int arr[n];
    for(int j=0;j<n;j++)
    {cin>>arr[j];}
     
    
    long int ans = mergeSort(arr, n); 
    cout <<ans<<endl; 
	}
    return 0; 
} 
