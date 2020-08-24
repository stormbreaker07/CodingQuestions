#include <iostream> 
using namespace std; 


#define l long long 


int main() {
	
	l n;
	cin>>n;
	string a;
	//take input
	cin>>a;	
	
	//calculate vote
	
	l cont = 0;
	l vote_a = 0 ,vote_b = 0;
		int flag=0;
	for(l i=0;i<n;i++)
	{
		if(a[i] == '-')
		{
			cont++;
		}
		else if(a[i] == 'A')
		{vote_a+=1;
			if(flag==0)
			{
				vote_a += cont;
				cont=0;
			}
			else if(flag==1)
			{
				if(cont%2==0)
				{
					vote_a += cont/2;
					vote_b += cont/2;
				}
				else
				{
					vote_a += (cont-1)/2;
					vote_b += (cont-1)/2;
				}
				flag=0;
			}
			cont=0;
		}
		else if(a[i] == 'B')
		{vote_b+=1;
			if(flag==1)
			{
				vote_b += cont;
			}
			
			flag = 1;
			cont=0;
		}
	}
	if(flag==1)
	{
		vote_b += cont;
	}
	
	if(vote_a>vote_b)
	{
		cout<<"A";
	}
	else if(vote_a<vote_b)
	{
		cout<<"B";
	}
	else if(vote_a == vote_b)
	{
		cout<<"Coalition government";
	}
	
	
	
	
	return 0;
	
	}
