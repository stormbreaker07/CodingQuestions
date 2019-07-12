#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;

int main()
{string s1,s2,s3;
vector<int> v1,v2,v3;
char ch1,ch2;
int x,t1,t2,t3;
cin>>x;
for(int r=1;r<=x;r++)
{
cin>>s1>>ch1>>s2>>ch2>>s3;
int j=0;
for(int i=0;i<s1.length();i++)
{if(s1[i]>=48 && s1[i]<=57)
{v1.push_back(s1[i]-'0');
j++;
t1=1;}
else
{t1=2;
    break;
}
}
int w1=0;
if(t1==1)
{for(int i=0;i<v1.size();i++)
{w1=w1*10+v1[i];
}
}

j=0;
/*for second string */
for(int i=0;i<s2.length();i++)
{if(s2[i]>=48 && s2[i]<=57)
{v2.push_back(s2[i]-'0');
j++;
t2=1;}
else
{t2=2;
    break;
}
}
int w2=0;
if(t2==1)
{for(int i=0;i<v2.size();i++)
{w2=w2*10+v2[i];
}
}


/*for third string*/
j=0;
for(int i=0;i<s3.length();i++)
{if(s3[i]>=48 && s3[i]<=57)
{v3.push_back(s3[i]-'0');
j++;
t3=1;}
else
{t3=2;
    break;
}
}
int w3=0;
if(t3==1)
{for(int i=0;i<v3.size();i++)
{w3=w3*10+v3[i];
}
}
if(t1==1 && t2==1)
{cout<<w1<<" "<<ch1<<" "<<w2<<" "<<ch2<<" "<<w1+w2<<endl;}
else if(t1==1 && t3==1)
{cout<<w1<<" "<<ch1<<" "<<w3-w1<<" "<<ch2<<" "<<w3<<endl;}
else if(t2==1 && t3==1)
{cout<<w3-w2<<" "<<ch1<<" "<<w2<<" "<<ch2<<" "<<w3<<endl;}
v1.clear();
v2.clear();
v3.clear();

}
return 0;
}