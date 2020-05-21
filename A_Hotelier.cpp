#include <bits/stdc++.h>
using namespace std;

int main()
{
	long int len;
	cin>>len;
	string str;
	cin>>str;
	int s[10]={0};
	/*for left entry */
	int indexl = -1;
	for(long int i=0;i<len;i++)
	{	/* removing */
		if(int(str[i])>=48 && int(str[i])<=57)
		{indexl = int(str[i]) - 48;
			s[indexl] = 0;}
		/*adding */
		else
		{
		if(str[i] == 'L')
			for(int j=0;j<=9;j++)
			{if(s[j] == 0)
				{s[j] = 1;
				break;}
			}
			if(str[i] == 'R')
			for(int j=9;j>=0;j--)
			{if(s[j] == 0)
				{s[j] = 1;
				break;}
			}
		}
	}
		for(int i=0;i<10;i++)
		{cout<<s[i];} 

	return 0;
}
