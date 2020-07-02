#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

void linear(int n,int a[])
{
	int num;
	cin>>num;
	for(int i=0;i<n;i++)
	{if(a[i]==num)
		{cout<<found<<endl; 
			cout<<i+1<<endl;
			break;
		}
	}
return;
}

void binary(int n,int a[])
{
	
	int ele;
	cin>>ele;
	sort(a,a+n);
	int first=0;
	int last=n-1;
	int mid;
	for(int i=0;i<n;i++)
	{
		mid=(first+last)/2;
		if(first<=last)
		{if(a[mid]==ele)
			{cout<<"found "<<mid;
				break;}
			else if(a[mid]>ele)
			{last=mid-1;}
			else if(a[mid]<ele)
			{first=mid+1;}
		}
		else
		{cout<<"not found";
			break;
		}
	} 
return;
}



int main()
{
    
    int choice;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {cin>>a[i];}

    while(1)
    {
        printf("1. linear search\n");
        printf("2. binary search\n");
        printf("4. Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
                linear(n,a);
                break;
        
            case 2:
                binary(n,a);
                break;
        
            case 4:
                exit(0);    // terminates the complete program execution
        }
    }
    
    return 0;
}











