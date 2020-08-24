#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <math.h>
#include <string>

 
using namespace std; 


#define l long long 

int total = 0;


typedef struct in_item {
	int one,zero ,len;
}item; 



void convertbinary(int n , int lent) 
{ 
   
    int b[32] ={0}; 
  
    int i = 0; 
    while (n > 0) { 
       b[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
    for (int j = lent-1; j >= 0; j--) 
        cout << b[j]; 
} 


item build(int one ,int zero , int len)
{
	item x = {one, zero , len};
	return x;
}


item calculate_binary(int mx , int lent)
{
	int con1=0 ,con0=0 , con_len=0;
	while(mx>0)
	{
		if(mx&1 == 1)
		{
			con1++;
		}
		else
		{
			con0++;
		}
		mx /=2;
		con_len++;
	}
	
	con0 += lent - con_len; 
	
	return build(con1,con0 ,con_len);
}


item calculate_len(int mx)
{
	int con1=0 ,con0=0 , con_len=0;
	while(mx>0)
	{
		if(mx&1 == 1)
		{
			con1++;
		}
		else
		{
			con0++;
		}
		mx /=2;
		con_len++;
	}
	
	return build(con1,con0 ,con_len);
}




void subset_find(int arr[],int n , item *store)
{
	total =0;
	int  count1 = pow(2,n);
	for (int i = 0; i < count1; i++)
	{
		int tone=0 , tzero=0 ;
		for (int j = 0; j < n; j++)
		{
			if ((i & (1 << j)) > 0)
			{
			
				int x = arr[j];
				tone += store[x].one;
				tzero += store[x].zero;
			}
			

		}
			if(tzero == tone && tone>0)
			{
				total++;
			}
			
	}
}


int main()
{
	int n;
	cin>>n;
	int a[n];
	int mx = INT_MIN;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mx = max(a[i],mx);
	}
	
	//find binary
	item mx_len = calculate_len(mx);
	
	//cout<<mx_len.one<<" "<<mx_len.zero<<" "<<mx_len.len<<endl;
	
	int lent = mx_len.len;
	
	item store[n]; 
	
	int elem[n];
	
	for(int i=0;i<n;i++)
	{elem[i] = i;
		store[i] = calculate_binary(a[i] , lent);
	}
	
	
	//for(int i=0;i<n;i++)
	//{
	//	cout<<store[i].one<<" "<<store[i].zero<<" "<<store[i].len<<endl;
	//}
	
	
	//find subset
	subset_find(elem,n , store);
	
	
	convertbinary(total, lent);
	

	
}

