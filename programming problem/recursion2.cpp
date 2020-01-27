#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
int w,c;
void fun(string s,int len,int a[],unsigned int n)
{ if(n<s.length())
	{for(int i=0;i<=1;i++)
		{a[n]=i;
		fun(s,len,a,n+1);
	    }
	 }
	 else
	 {c=0;
		 for(int i=0;i<len;i++)
		 {if(s[i]!='?')
			 {w=s[i]-'0';
				 if(w!=a[i])
				 {c=2;}
			 }
		 } 
		if(c!=2)	 
		 {for(unsigned int i=0;i<s.length();i++)
		 {cout<<a[i];}
		 cout<<endl;
	     }
		 return ;
	 }
 }


int main()
{string s;
	cin>>s;
	int a[s.length()];
	fun(s,s.length(),a,0);
	return 0;
}
