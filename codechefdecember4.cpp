#include <bits/stdc++.h>
#include <string>
using namespace std;



int main()
{
int t;
cin>>t;
string s1,s2,temp1,temp2;
for(int i=0;i<t;i++)
{cin>>s1>>s2;
	reverse(s1.begin(),s1.begin()+s1.length());
	reverse(s2.begin(),s2.begin()+s2.length());
	long int dif = max(s1.length(),s2.length());
	for(int j=s1.length();j<dif;j++)
	{s1=s1+'0';}
	for(int j=s2.length();j<dif;j++)
	{s2=s2+'0';}
int count=0,found;
for( ; ; )
{
found = s2.find("1");
if(found>=s2.length())
{break;}	
/*for xor*/	
for(int j=0;j<dif;j++)
{	
if(((s1[j]-'0')+(s2[j]-'0'))==1)
{temp1=temp1+'1';}
else
{temp1=temp1+'0';}
}
/*for and*/
for(int j=0;j<dif;j++)
{	
if(((s1[j]-'0')+(s2[j]-'0'))==2)
{temp2=temp2+'1';}
else
{temp2=temp2+'0';}
}
/*updation*/
s1=temp1;
s2='0';
s2=s2+temp2;
temp1.erase();
temp2.erase();
count++;
}
cout<<count<<endl;
}
return 0;
}
	
