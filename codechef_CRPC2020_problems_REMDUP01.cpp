/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,s1;
	cin>>s;
	int a[125] = {0};
	int num;
	for(int i=0;i<s.length();i++)
	{
	num = int(s[i]);	
	
	if(i==0)
	{a[num] = 1;
		s1=s1+s[i];
	}
	else if(i>0)
	{if(a[num]==0)
		{
		a[num]=1;
		s1=s1+s[i];	
		}
	}
	}
	cout<<s1;
	
	return 0;
}




int main()
{
string s;
cin>>s;
int w,sum = 0,pro = 1;
for(int i=0;i<s.length();i++)
{
w=s[i]-'0';
sum+=w;
pro = pro*w; 

}	
if(pro == sum)
{
cout<<"spy number";
}
else
{cout<<"not spy number";}
	
	
	return 0;
}



int main()
{
string s;
cin>>s;

for(int i=0;i<s.length();i++)
{	
for(int j=0;j<=i;j++)
{cout<<s[j];
}
cout<<endl;
}
for(int i=s.length()-2;i>=0;i--)
{	
for(int j=0;j<=i;j++)
{cout<<s[j];
}
cout<<endl;
}



return 0;
}









int main()
{	
int n;
cin>>n;
int num1=0;
int a[n][n];
for(int i=n;i>=1;i--)
{
for(int j=num1;j<n;j++)	
{a[num1][j]=i;
a[j][num1]=i;	
}	
num1++;
}
for(int i=0;i<n;i++)
{for(int j=0;j<n;j++)
	{cout<<a[i][j];
	}	
	cout<<endl;
}
	
	
	return 0;
}


#include <sstream> 

set<int> st1;	
set<int> st2;
set<int> st3;

int main()
{
string s1,s2,s3;
getline(cin, s1); 
getline(cin, s2); 
getline(cin, s3); 

 string r1 = s1.substr(9,s1.length()-3);
  string r2 = s2.substr(9,s2.length()-3);
   string r3 = s3.substr(9,s3.length()-3);

string num;
for(unsigned int i=0;i<=r1.length();i++)
{
if(int(r1[i]) >= 48 && int(r1[i]) <= 57)
{
num = num+r1[i];
}
else
{

stringstream geek(num); 
if(num.length()>0)
{int x = 0; 
    geek >> x; 
   st1.insert(x);
num.clear(); }
}	
}

num.clear();
for(unsigned int i=0;i<=r2.length();i++)
{
if(int(r2[i]) >= 48 && int(r2[i]) <= 57)
{
num = num+r2[i];
}
else
{

stringstream geek(num); 
if(num.length()>0)
{int x = 0; 
    geek >> x; 
   st2.insert(x);
num.clear(); }
}	
}

for(unsigned int i=0;i<=r3.length();i++)
{
if(int(r3[i]) >= 48 && int(r3[i]) <= 57)
{
num = num+r3[i];
}
else
{

stringstream geek(num); 
if(num.length()>0)
{int x = 0; 
    geek >> x; 
   st3.insert(x);
num.clear(); }
}	
}


cout<<"Common Elements are ";
int x;
unsigned int sit = st3.size(); 
set<int> ::iterator i;
set<int> ::iterator it;
for(i=st1.begin();i!=st1.end();i++)
{x = *i;
	
	for(it=st2.begin();it!=st2.end();it++)
	{
	if(x==*it)
	{
	st3.insert(x);
		if(st3.size()==sit)
		{cout<<x<<" ";}
	}}
}

	
	return 0;
}





*/
#include<bits/stdc++.h>
#include <sstream> 

using namespace std;

set<int> st1;	
set<int> st2;
set<int> st3;

int main()
{
string s1,s2,s3;
getline(cin, s1); 
getline(cin, s2); 
getline(cin, s3); 

 string r1 = s1.substr(9,s1.length()-3);
  string r2 = s2.substr(9,s2.length()-3);
   string r3 = s3.substr(9,s3.length()-3);

string num;
for(unsigned int i=0;i<=r1.length();i++)
{
if(int(r1[i]) >= 48 && int(r1[i]) <= 57)
{
num = num+r1[i];
}
else
{

stringstream geek(num); 
if(num.length()>0)
{int x = 0; 
    geek >> x; 
   st1.insert(x);
num.clear(); }
}	
}
/*for r2*/
num.clear();
for(unsigned int i=0;i<=r2.length();i++)
{
if(int(r2[i]) >= 48 && int(r2[i]) <= 57)
{
num = num+r2[i];
}
else
{

stringstream geek(num); 
if(num.length()>0)
{int x = 0; 
    geek >> x; 
   st2.insert(x);
num.clear(); }
}	
}
/*for r3*/
for(unsigned int i=0;i<=r3.length();i++)
{
if(int(r3[i]) >= 48 && int(r3[i]) <= 57)
{
num = num+r3[i];
}
else
{

stringstream geek(num); 
if(num.length()>0)
{int x = 0; 
    geek >> x; 
   st3.insert(x);
num.clear(); }
}	
}

/*comparing*/
cout<<"Common Elements are ";
int x;
unsigned int sit = st3.size(); 
set<int> ::iterator i;
set<int> ::iterator it;
for(i=st1.begin();i!=st1.end();i++)
{x = *i;
	
	for(it=st2.begin();it!=st2.end();it++)
	{
	if(x==*it)
	{
	st3.insert(x);
		if(st3.size()==sit)
		{cout<<x<<" ";}
	}}
}

	
	return 0;
}



















