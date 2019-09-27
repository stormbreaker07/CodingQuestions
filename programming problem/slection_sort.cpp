#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int key,j;

void insertion(int a[],int n)
{
for(int i=1;i<n;i++)
{key=a[i];
j=i-1;
while(j>=0 && a[j]>key)	
{swap(a[j],a[j+1]);
    j=j-1;
}
}
for(int i=0;i<n;i++)
{cout<<a[i]<<" ";}
cout<<endl;
}

void selection(int a[],int n)
{
int mn;
for(int i=0;i<n-2;i++)
{mn=i;
	for(int j=i+1;j<n-1;j++)
	{if(a[mn]>a[j])
		{mn=j;}
	}
	swap(a[mn],a[i]);
}
	
for(int i=0;i<n;i++)
	{cout<<a[i]<<" ";}
	cout<<endl;

}

int main()
{
int n;
	cin>>n;
int a[n];
	for(int i=0;i<n;i++)
	{cin>>a[i];}

	 while(1)
    { int choice;
        printf("1. selection\n");
        printf("2. insertion\n");
        printf("4. Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
                selection(a,n);
                break;
        
            case 2:
                insertion(a,n);
                break;
        
            case 4:
                exit(0); 
        }
    }	
	
return 0;
}
