#include<bits/stdc++.h>
using namespace std;


#define L long long int 
L ans =0;
L n;





void build(L *tree ,L ss,L se,L a[]  , L index , L *cont) 
{
	
	if(ss == se)
	{
		tree[index] = a[ss];
		cont[index] = 1;
		return ;
	}
	
	
	L mid = (ss+se)/2;
	build(tree , ss , mid , a , 2*index , cont);
	build(tree , mid+1 , se , a , 2*index+1 , cont);
	if(tree[2*index] < tree[2*index+1])
	{
		tree[index] = tree[2*index];
		cont[index] = cont[2*index];
	}
	else if(tree[2*index] > tree[2*index+1])
	{
		tree[index] = tree[2*index+1];
		cont[index] = cont[2*index+1];
	}
	else if(tree[2*index] == tree[2*index+1])
	{
		tree[index] = tree[2*index];
		cont[index] = cont[2*index] + cont[2*index+1];
	}
	return ;
}



 void update(L *tree , L ss  ,L se , L  l , L increament ,L index ,L *cont) {
    	
    	if(l>se or l<ss)
    	{
    		return ;
    	}
    	
    	//base case
    	if(ss == se)
    	{
    		tree[index] = increament;
    		cont[index] = 1;
    	return;
    	}
    	
    	
    	if(l<=se and l>=ss)
    	{
    		
    		L mid = (ss+se)/2;
			update(tree, ss,mid ,l , increament ,2*index , cont);
    		update(tree, mid+1,se ,l , increament ,2*index+1 ,cont);
	if(tree[2*index] < tree[2*index+1])
	{
		tree[index] = tree[2*index];
		cont[index] = cont[2*index];
	}
	else if(tree[2*index] > tree[2*index+1])
	{
		tree[index] = tree[2*index+1];
		cont[index] = cont[2*index+1];
	}
	else if(tree[2*index] == tree[2*index+1])
	{
		tree[index] = tree[2*index];
		cont[index] = cont[2*index] + cont[2*index+1];
	}
    	}
     
    return ;		
    }


 L query_solution(L *tree , L ss, L se , L l ,L r ,L index , L *cont) {
    	
    	
    //if not in range
    if(r<ss or l>se) {
    ans = 0;
    return 4*n+1;
	}
     
    // pure overlap
    if(ss>=l and se<=r)
    {	
	ans = cont[index];
    return index;
    }	
     
     
    //recursion part
    L mid = (ss+se)/2;
    L left = query_solution(tree , ss , mid , l , r ,  2*index , cont);
	L left_cont=0;
	if(left==4*n+1)
	{	
		left_cont = 0;
	}
	else
	{
		left_cont = cont[left];
	}
    L right = query_solution(tree , mid+1 , se , l , r ,  2*index+1 , cont);
    L right_cont=0;
    if(right==4*n+1)
	{
		right_cont = 0;
	}
	else
	{
		right_cont = cont[right];
	}
	
	
    if(tree[left]<tree[right])
    {
		ans = left_cont;
		return left; 
	}
	else if(tree[left]> tree[right])
	{
		
		ans = right_cont;
		return right;
	}
	else
	{
		ans = right_cont+ left_cont;
		return right;
	}
    
    	
    }




int main() 
{
    L q;
    cin>>n>>q;	
    L a[n];
    for(L i=0;i<n;i++)
    {
    	cin>>a[i];
    }	
    L *tree = new L[4*n +2];
    tree[4*n+1] = INT_MAX;	
       L *cont = new L[4*n +1];
    build(tree , 0 ,n-1, a , 1 , cont);
     
     
    L x,l,r;
    while(q--)
    {
    	cin>>x>>l>>r;
    	if(x==1)
    	{r--;
			ans=0;
    	  
    	   cout<<tree[query_solution(tree, 0 , n-1 , l , r , 1 , cont)]<<" " << ans<<endl;
    	   
    	   }
    	
    	else
    	{ 
    	   update(tree, 0 ,n-1 , l , r , 1 , cont);
	   	}	
       
    }	
    	
    	return 0;
}
