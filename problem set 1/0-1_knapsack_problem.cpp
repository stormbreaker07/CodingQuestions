#include<bits/stdc++.h>
using namespace std;

int max_price =0;

void knapsack(int *kg , int *cost , int max_wei , int money, int wei ,int index , int siz)
{
    if(index > siz)
    {return ;}

    if(wei <= max_wei)
    {
         if(money > max_price)
    {
        max_price = money;
    }

        knapsack(kg,cost,max_wei , money+cost[index] , wei+kg[index] , index+1, siz);

        knapsack(kg,cost,max_wei , money , wei , index+1, siz);
        
    }
    else
    {
        return;
    }
    
    

return;
}


int main()
{
int kg[] = {1,2,3,5};
int cost[] = {40,20,35,100};
int capacity = 6;
int siz = sizeof(kg)/sizeof(int);
knapsack( kg , cost , capacity , 0 ,  0 , 0 , siz);

cout<<max_price;

    return 0;
}