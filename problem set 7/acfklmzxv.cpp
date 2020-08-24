#include<bits/stdc++.h>
using namespace std;


int main() {
	
	int a[200];
	for(int i=0;i<200;i++)
	{
		a[i]==-1;
	}
	a[65] = 0;
	a[66] = 0;
	a[67] = 0;
	a[68] = 0;
	a[69] = 0;
	a[70] = 0;
	
	double ans =0;
	string x;
	while(cin>>x)
	{
		if(a[int(x[0])-65]== 0 )
		{
			a[int(x[0])-65] = 1;
		if(x.length()==7)
		{
			
			
			if(x[6] == ')'  || x[4] == '(')
			{
				
				if(x[0] == x[5]  && int(x[0])>=65 && int(x[0]<=70))
				{ans+= 0.5;} 
			}
			
			if((x[1] == 'C') && (x[2] == 'o') && (x[3] == 'v'))
			{
				ans += 0.5;
			}
		}
		else
		{
			
			if(x[x.length()-1] == ')'  || x[x.length()-3] == '(')
			{
				
				if(x[0] == x[x.length()-2])
				{ans+= 0.5;} 
			}
		}

		}
			cout<<ans;
	}
	
	
	return 0;
	
	}
