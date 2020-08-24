#include<bits/stdc++.h>
using namespace std;

#define L long long 


L mx = INT_MIN;


 void build(L *tree ,L ss , L se, L *a ,L index)
    {
    if(ss == se)
    {
    	tree[index] = a[ss];
    	return;
    }
     
    int mid = (ss+se)/2;
    build(tree , ss , mid , a, 2*index);
    build(tree , mid+1 , se , a ,2*index + 1);
     
    tree[index] = min(tree[2*index],tree[2*index+1]);
     
    return ;
    }


 void calculate(L *tree ,L ss , L se , L index)
    {
    if(ss == se)
    {
    	mx = max(tree[index] , mx);
    	return;
    }
     
    int mid = (ss+se)/2;
    tree[2*index]  += tree[index];
    tree[2*index + 1]  += tree[index]; 
    calculate(tree , ss , mid , 2*index);
    calculate(tree , mid+1 , se ,2*index + 1);
     
    tree[index] = min(tree[2*index],tree[2*index+1]);
     
    return ;
    }


void query(L *tree ,L ss , L se , L l , L r , L incr , L index)
{
	if(ss>r || l>se ) {
		return ;
		}
	
	if(l<=ss && r>=se ) {
		tree[index] += incr;
		return ;
		}
	
	
	//base case
	if(ss ==se) {
		tree[index] += incr;
		}
	
	//recursive part
	int mid = (ss+se)/2;
	query(tree , ss , mid , l ,r ,incr , 2*index);
    query(tree , mid+1 , se , l ,r ,incr , 2*index+1);
	return ;

}



void query_vertical(L *tree , L ss  ,L se , L  l , L increament ,L index) {
    	
    	if(l>se or l<ss)
    	{
    		return ;
    	}
    	
    	//base case
    	if(ss == se)
    	{
    		tree[index] = +increament;
    	return;
    	}
    	
    	
    	if(l<=se and l>=ss)
    	{
    		
    		L  mid = (ss+se)/2;
    		query_vertical(tree, ss,mid ,l , increament ,2*index);
    		query_vertical(tree, mid+1,se ,l , increament ,2*index+1);
    	}
     
    return ;		
    }    
     
       





int main() {


L t;
cin>>t;
L n = 500001;
L a[n] = {0};

	
L *tree = new L[4*n+1];	
build(tree , 0 ,n-1, a , 1);

int len,h,p,c,ind;

for(L i=0;i<t;i++)
{
	cin>>len>>h>>p>>c>>ind;
	L l = ind-1;
	L r = l + (len-1);
	L inc = 1;
	
	if(c == 1) {
		inc = 1;	
	query(tree , 0 , n-1 ,  l , r , inc , 1);
	query_vertical(tree , 0 , n-1 , p-1, h  , 1);
	
	} 
	else if(c == 0) {
		inc += h;
		query(tree , 0 , n-1 ,  l , r , inc , 1);
	}
	
}

calculate(tree ,0 ,n-1 ,1);
cout<<mx;

 





return 0;
}





