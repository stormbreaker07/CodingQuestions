#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;


int main()
{int n,k;
	long long int a,num1,num2;
	cin>>a>>n>>k;
	long long int b[k];
	for(int i=0;i<k;i++)
	{
		num1=a/(n+1);
	    num2=a-(n+1)*num1;
	    b[i]=num2; 
        a=a/(n+1);
	}
	for(int i=0;i<k;i++)
	{cout<<b[i]<<" ";}
return 0;
}
	
