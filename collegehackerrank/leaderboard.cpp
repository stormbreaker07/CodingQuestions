#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <set>


using namespace std;
 set <long int,greater <long int>> v;     
int main()
{
long long int n,i,j=-1,num,num2;
cin>>n;
for(int i=0;i<n;i++)
	{cin>>num;
	v.insert(num); 
}
set <long int,greater <long int>> :: iterator itr; 
set <long int,greater <long int>> :: reverse_iterator itr1=v.rbegin(); 

  long int m;
  cin>>m;
  for(i=0;i<m;i++)
  {cin>>num2;
	  j=0;    
	 for (itr = v.begin(); itr !=v.end(); ++itr) 
	{j++;
		if(num2>=*itr)
		{cout<<j<<endl;
			break;}
	else if(num2<*itr1)
	{cout<<v.size()+1<<endl;
	break;}	
	}
   }
	return 0;
}	 	
	
