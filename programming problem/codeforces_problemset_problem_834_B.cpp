#include<bits/stdc++.h>
using namespace std;

int main()
{ 
long int n;
int k,c=0;
cin>>n>>k;
string s;
cin>>s;
long int count1 =1;
if(s.length()==1)
{
c=1;		
}

if(s.length()>1)
{for(int i=0;i<s.length()-1;i++)
{	
if(s[i] == s[i+1])
{count1++;	
}	
else if(s[i]!=s[i+1])
{
long int num = count(s.begin(),s.end(),s[i]);	
if(count1 == num)
{count1 =1;
c=1;
}
else 
{
c=0;
break;}			
}	}
}

if(c==1)
{cout<<"NO";}
else if(c == 0)
{cout<<"YES";}

	return 0;
}
