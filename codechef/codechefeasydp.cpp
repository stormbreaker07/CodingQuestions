#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{long int n,c=0;
	cin>>n;
	string a;
	cin>>a;
	for(long int i=0;i<n-1;i++)
	{if(i<n-2)
		{if(a[i]==a[i+1])
		{if(a[i]=='R' && a[i+2]=='B')
			 {a[i+1]='G';
				 c++;
			}
			if(a[i]=='R' && a[i+2]=='R')
			 {a[i+1]='G';
				 c++;
			}
			if(a[i]=='B' && a[i+2]=='B')
			 {a[i+1]='R';
				 c++;
			}
			if(a[i]=='G' && a[i+2]=='G')
			 {a[i+1]='B';
				 c++;
			}
         if(a[i]=='R' && a[i+2]=='G')
			 {a[i+1]='B';
				 c++;
			}
         if(a[i]=='B' && a[i+2]=='R')
			 {a[i+1]='G';
				 c++;
			}
         if(a[i]=='B' && a[i+2]=='G')
			 {a[i+1]='R';
				 c++;
			}
			if(a[i]=='G' && a[i+2]=='B')
			 {a[i+1]='R';
				 c++;
			}
         if(a[i]=='G' && a[i+2]=='R')
			 {a[i+1]='B';
				 c++;
			}
		}
	}
	else if(i==n-2)
	{if(a[i]==a[i+1])
		{if(a[i]=='R')
			{a[i+1]='B';
				c++;
			}
		if(a[i]=='G')
			{a[i+1]='B';
				c++;
			}
		if(a[i]=='B')
			{a[i+1]='G';
				c++;
			}
	     }
	 }
 }
 cout<<c<<endl;
 cout<<a;
 return 0;
}
	 
		
		
