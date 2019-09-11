#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
vector<int> v;
void push()
{int num;
	cin>>num;
	v.push_back(num);
	
}

void pop()
{
	v.pop_back();	
}

void diplay()
{  for(int i=v.size()-1;i>=0;i--)
	cout<<v[i];
	
}

int main()
{int choice;
   
    

    while(1)
    {
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. display\n"); 
        printf("4. Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                {
                push();
                break;
			    }
        
            case 2:
                pop();
                break;
            
            case 3:
                diplay();
                break;
            
            case 4:
                exit(0);    // terminates the complete program execution
        }
    }
    
    return 0;
}
