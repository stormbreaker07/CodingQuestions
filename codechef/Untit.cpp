#include <string>
#include <iostream>
#include <algorithm>
#include<list>
#include<vector>
using namespace std;

int main() { 
 list<int> l1,l2,l3;
 list<string> l4;
 string name[6]={"tanuj","manu","shubhangi","megha","tnauj","viwhan"};
 for(int i=0;i<6;i++)
 {l4.push_back(name[i]);}
 l1.assign(5,10);
 for(int r=1;r<=6;r++)
{l2.push_back(r*r);}
for(auto i=l1.begin();i!=l1.end();i++)
{cout<<*i<<endl;}
l4.sort();
for(auto q=l4.begin();q!=l4.end();q++)
{cout<<*q<<endl;}
l1.merge(l2);
for(auto u=l1.begin();u!=l1.end();u++)
{cout<<*u<<endl;}
	return 0;
}
