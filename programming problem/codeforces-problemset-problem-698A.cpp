/*
 * #include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int gym=0,contest=0;
	int count=0;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];}
		for(int i=0;i<n;i++)
	{
		if(i==0 && a[i]==3)
		{
				if(a[i+1]==2)
				{contest=1;}
				else if(a[i+1]==1)
				{gym=1;}
				else if(a[i+1]==3 || a[i+1]==0)
				{contest=1;}
				count++;
		}
		
		else if(i>0 || (i==0 && a[i]!=3) )
		{	
		if(a[i]==0)
		{contest =0;
		gym=0;
		}
		else if(a[i]==1)
		{
			if(contest==0)
			{
				count++;
				gym=0;
				contest=1;
			}
			else
			{
				gym=0;
				contest=0;
			}
		}
		else if(a[i]==2)
		{
			if(gym==0)
			{
				count++;
				gym=1;
				contest=0;
			}
			else
			{
				contest=0;
				gym=0;
			}
		}
		else if(a[i]==3)
		{
			if(a[i-1]!=0)
			{count++;
			gym = 1-gym;
			contest = 1-contest;
			}
			else if(a[i-1]==0)
			{count++;
				if(a[i+1]==2)
				{contest=1;
					gym=0;}
				else if(a[i+1]==1)
				{gym=1;
					contest=0;}
				else if(a[i+1]==3 || a[i+1]==0)
				{contest=1;
					gym=0;}
				
				}

		}
	}
	cout<<count<<" ";	
	}

cout<<n-count;
	
	
	return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,m,c=0;
  cin>>n>>m;
  int a[n];
  for(int i=0;i<n;i++)
  {a[i] =-1;}
  int ind,num;
  for(int i=0;i<n;i++)
  {cin>>ind>>num;
   if(a[ind-1]==-1)
   {a[ind-1] = num;}
   else
   {c=1;}
   
   if(ind == 1 && num ==0 && n>0)
   {c=1;}
  
} 
   if(c==1)
   {
for(int i=0;i<n;i++)   
	{if(a[i]>0)
		{cout<<a[i];}
		else if(a)
		{
  }
  
   else
   {cout<<-1;}
   
   
   
  return 0;
}
