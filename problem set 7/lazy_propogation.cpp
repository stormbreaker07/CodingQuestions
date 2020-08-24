
#include<bits/stdc++.h>
using namespace std;

//for building tree
void build_tree(int *a , int s , int e , int *tree ,int index) {
	
	if(s==e)
	{
		tree[index] = a[s];
		return ;
	}
	
		int mid = (s+e)/2;
		build_tree(a , s , mid , tree , 2*index);
		build_tree(a , mid+1 , e , tree , 2*index+1);
	
	tree[index] = min(tree[2*index] , tree[2*index+1]);

}



int lazy[100000] = {0};
//lazy propogation
void LazyUpdate(int *tree , int ss,int se ,int l ,int r ,int increament ,int index) {
	
	//resolve
	if(lazy[index]!=0)
	{
		tree[index] += lazy[index];
	if(ss!=se)
	{
		lazy[2*index] += lazy[index];
		lazy[2*index+1] += lazy[index];
	}
	lazy[index] = 0;
	}
	
	
	//base case
	//no overlap
	if(ss>r or l>se )
	{
		return;
	}
	
	
	if(ss>=l and se<=r) {
		tree[index] += increament;
		
		//if have any child update its lazy index
		if(ss!=se) 
		{
			lazy[2*index] += increament;
			lazy[2*index+1] += increament ;
		}
	return;
	}
	
	//recursive case
	int mid = (ss+se)/2;
	LazyUpdate(tree , ss ,mid ,l ,r ,increament ,2*index);
	LazyUpdate(tree , mid+1 , se , l , r , increament , 2*index+1);
	//update
	tree[index] = min(tree[2*index] , tree[2*index+1]);
	
	return ;
	}





//query
int query_solution(int *tree , int ss ,int se ,int qs ,int qe ,int index) {
	
	//resolve
	if(lazy[index] != 0)
	{
		tree[index] += lazy[index];
	
		if(ss!=se)
		{
			lazy[2*index] += lazy[index];
			lazy[2*index+1] += lazy[index];
		}
	lazy[index] = 0;
	}
	
	//no overlap
	if(ss>qe or se<qs )
	{
		return INT_MAX;
	}
	
	//full overlap
	if(ss>=qs and se<=qe)
	{
		return tree[index];
	}
	//recursive call
	int mid = (ss+se)/2;
	int left = query_solution(tree, ss ,mid ,qs ,qe, 2*index);
	int right = query_solution(tree, mid+1 ,se ,qs ,qe, 2*index+1);
	//update
	return min(left,right);
	
	}



int main() {
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int *tree = new int[4*n+1];
	
	build_tree(a , 0 , n-1 , tree , 1);
	for(int i=1;i<=13;i++)
	{
		cout<<tree[i]<<" ";
	}	cout<<endl;
	
	 LazyUpdate(tree , 0 ,n-1 ,0 ,2 ,10 ,1);
	 for(int i=1;i<=13;i++)
	{
		cout<<tree[i]<<" ";
	}	
	 cout<<endl;
	 LazyUpdate(tree , 0 ,n-1 ,0 ,4 ,10 ,1);
	 for(int i=1;i<=13;i++)
	{
		cout<<tree[i]<<" ";
	}	
	cout<<endl;
	 cout<<query_solution(tree, 0 ,n-1, 1 ,1 ,1)<<endl;
	 
	 LazyUpdate(tree , 0 ,n-1 ,3 ,4 ,10 ,1);
	cout<<query_solution(tree, 0 ,n-1, 3 ,5 ,1)<<endl;
	 
	
	return 0;
	}
