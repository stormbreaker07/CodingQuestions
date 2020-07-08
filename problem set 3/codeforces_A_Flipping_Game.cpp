// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	int one;
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 		if(a[i]==1)
// 		{one++;}
// 	}
// 	int con_one=0,con_zero=0;
// 	int diff,all_one,mx=0;
// 	for(int i=0;i<n;i++)
// 	{
// 		if(one==n)
// 		{mx = n-1;}
// 		else if(one == n-1)
// 		{mx = n;}
// 		else
// 		{
// 			for(int j=i;j<n;j++)
// 			{
// 				con_one = count(a+i,a+j+1,1);
// 				con_zero = (j-i+1)-con_one;
// 				diff = con_zero - con_one;
// 				//cout<<"con_one"<<con_one<<endl;
// 				//cout<<"con_zero"<<con_zero<<endl;
// 				//cout<<"con_diff"<<diff<<endl;
			
// 				all_one = one + diff;
// 				if(all_one>mx)
// 				{mx = all_one;}
// 			}
// 		}
// 	}
// 	cout<<mx;
		
	
	
// 	return 0;
// }



#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,w,cont=0;
 cin>>n;
  int a[n];
 for(long int j=0;j<n;j++)
 {cin>>w;
     if(w==0)
     {a[j]=1;}
     else if(w==1)
     {cont++;
          a[j] = -1;}
 }

 int max_curr,max_now;
 max_curr = a[0];
 max_now = a[0];
    for (long int j = 1; j < n; j++)
        {
             max_curr = max(a[j], max_curr + a[j]);

            max_now = max(max_now, max_curr);
         }
        cout<<max_now+cont;
    
    
 

    return 0;
}
