#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <math.h>
#include <string>
using namespace std;

#define l long long int 


l md = 1000000007;

l countOdd(l x, l y){  
  
   l n = (y - x) / 2; 
  
    
    if (y % 2 != 0 || x % 2 != 0)  
        n += 1; 
  
    return n; 
} 
  
l modular(l base, l exp, l mod) {
   l rest = 1;
   while (exp > 0) {
      if (exp % 2 == 1)
         rest= (rest * base) % mod;
      exp = exp >> 1;
      base = (base * base) % mod;
   }
   return rest;
}

l modular_exponential(l a, l n)
{
	if(a==0)
	{
		return 0;
	}
	if(n==0)
	{
		return 1;
	}
	
	
	
	if(n%2==0)
	{
		return modular_exponential((a*a)%md , n/2);
	}
	else
	{
		return (a*modular_exponential((a*a)%md , (n-1)/2))%md;
		
	}
	

}

int main()
{
	l x,y;
	cin>>x>>y;
	l k,even=0 ,odd=0 , cont=0;
	cin>>k;
	
	if(x<y)
	{
	odd = countOdd(x, y);  
    even = (y - x + 1) - odd;  
	
	
		
	l num =  k/2;
	 l todd=0 , teven=0;
	
	if(odd>0 and even>0)
	{
	for(l i=0;i<=num;i++)
	{
		todd = i*2;
		teven = k-todd;
		
		
	if(todd>0)	
	{cont+=modular(odd , todd , md);}
	
	cont%=md;
	if(teven>0)
	{cont+=modular(even , teven  , md);}
		
	}
	}
	else if(odd==0)
	{
		cont+=modular(even , k  , md);
	}
	else if(even==0 and k%2==0) 
	{
		cont+=modular(odd , k , md);
	}
	}
	else
	{
		cont = 1;
	}
	cout<<cont;
	


return 0;	
}
