/*#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{int t;
	cin>>t;
	long long int n,sum=0;
	long long int w=1000000007;
	for(int i=0;i<t;i++)
	{cin>>n;
		sum=0;
		sum=((n%w)*(n%w))%w;
	cout<<sum<<endl;
    }
		return 0;
	}

*/


#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;
vector<int> v;
int a[128]={0};
int w,c=0;
// Complete the isValid function below.
string isValid(string s) {
for(unsigned long int i=0;i<s.length();i++)
{w=int(s[i]);
a[w]+=1;
}    
sort(a,a+128,greater<int>());
for(int i=0;i<128;i++)
{if(a[i]!=0)
{v.push_back(a[i]);}
}
if(v[0]-v[1]==1 || v[0]-v[1]==0)
{for(unsigned int i=1;i<v.size()-1;i++)
{if(v[i]==v[i+1])
	{c++;}
}
if(c==v.size()-2)
{return "YES";}
}
return "NO";
}	

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    cout << result << "\n";

    fout.close();

    return 0;
}
