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


//for querry
int query(int *tree ,int ss ,int se ,int qs,int qe ,int index) {
	
	if(ss>=qs and se<=qe)
	{
		return tree[index];}
	
	
	if(qe<ss || qs>se)
	{
		return INT_MAX;
	}
	
	int mid = (ss+se)/2;
	int left = query(tree , ss, mid ,qs , qe,2*index);
	int right = query(tree , mid+1, se ,qs , qe,2*index+1);
	return min(left,right);
	}


//for updating
void updateNode(int *tree , int ss, int se ,int qe ,int increament , int index) {
	
	//not in range
	if(qe<ss || qe>se)
	{
		return;
	}
	
	//base case
	if(ss == se)
	{
		tree[index] += increament;
		return;
	}
	
	int mid = (ss+se)/2;
	updateNode(tree , ss , mid , qe ,increament , 2*index);
	updateNode(tree , mid+1 , se , qe ,increament , 2*index + 1);
	tree[index] = min(tree[2*index] , tree[2*index+1]);
	
	return;
	}

//range updates
void rangeUpdate(int *tree , int ss ,int se ,int qs ,int qe ,int increament , int index) {
	
	//out of bound
	if(ss>qe || qs>se ) {
		return ;
		}
	
	//base case
	if(ss ==se) {
		tree[index] += increament;
		}
	
	//recursive part
	int mid = (ss+se)/2;
	rangeUpdate(tree , ss , mid , qs ,qe ,increament , 2*index);
	rangeUpdate(tree , mid+1 , se , qs ,qe ,increament , 2*index+1);
	tree[index] = min(tree[2*index] , tree[2*index + 1]);

	return ;
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
	}

int x;
cin>>x;
int l,r;

updateNode(tree , 0 ,n-1, 3 , 10 , 1);


while(x--) {

cin>>l>>r;
cout<<query(tree, 0 ,n-1,l,r,1)<<endl;

}	
	
	return 0;
	}
