#include<bits/stdc++.h>
using namespace std;


#define l long long int 
#define ll long int 
#define du double 
#define fl float
#define mx INT_MAX
#define mn INT_MIN 
 

void print(l ans)
{
	cout<<ans<<endl;
}

void calculation(l n ,l k)
{
	 l family[n+1];
			map<l,l>my_map; l matrix_design[n+1][n+1] = {0};
for(l i=0;i<n;i++) {cin>>family[i];}
			
			for(l i=0;i<n;i++)
			{for(l j=0;j<n;j++){matrix_design[i][j] = 0;}}
			for(l i=0;i<n;i++)
			{my_map.clear();
for(l j=i;j<n;j++) {
if(j==0)
{matrix_design[i][j] = 0;}
else
{matrix_design[i][j] = matrix_design[i][j-1];}
if(my_map.count(family[j])){
if(my_map[family[j]] == 1) {
matrix_design[i][j]++;
}
matrix_design[i][j]++;
}
my_map[family[j]]++;	
}
}
l storage[101][1001] = {0};
		
		
		l final_ans = 1e18;
		l bag = 100;
		for(l i=0;i<=bag;i++)
		{
			for(l j=0;j<=bag;j++)
			{
				storage[i][j]=0;
			}
		}
		
		for(l i=0;i<=n;i++)
		{
			storage[1][i] = matrix_design[0][i-1];
			
		}
		for(l i=2 ; i<= bag; i++) {
			storage[i][1] = 0;
			}
			
		for(l i=2;i<=bag;i++) {
			for(l j=2;j<=n;j++) {
			l best = 1e18;
			for(l p = 1 ;p<j;p++) {
				best = min(best , storage[i-1][p]+matrix_design[p][j-1]);
				}
				storage[i][j] = best;
			}	
		}
		for(bag = 1;bag<=100;bag++) {
		final_ans = min(bag*k+storage[bag][n] ,final_ans);
		}
		print(final_ans);
		
}




int main() {
	
	
	l t,n,k;
	cin>>t;
	while(t--) {
		cin>>n>>k; 
		calculation(n ,k);
	}
	
	
	
	return 0;
	}












