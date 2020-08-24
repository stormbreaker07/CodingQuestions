
#include<bits/stdc++.h> 
using namespace std; 
  
#define l long long   
long md = 1e9 + 7;  
  
  void printSubsequences(int arr[], int n) 
{ 
    /* Number of subsequences is (2**n -1)*/
    unsigned int opsize = pow(2, n); 
  
    /* Run from counter 000..1 to 111..1*/
    for (int counter = 1; counter < opsize; counter++) 
    { 
		vector<int> v;
        for (int j = 0; j < n; j++) 
        { 
            if (counter & (1<<j)) 
                v.push_back(arr[j]); 
        }
        
         
    } 
} 
void binod_kaun_hein(int arr[], int n) 
{ 
    unsigned l opsize = pow(2, n); 
 l final[n+1] = {0};
   
    for (unsigned l i = 1; i < opsize; i++) 
    { l a[n+1] = {0};
        for (int j = 0; j < n; j++) 
        { if (i & (1<<j)) 
          a[arr[j]]++; 
        } 
        int max_count = INT_MIN , ans =0;
         for(int j=1;j<=n;j++)
         {
			if(a[j]>max_count)
			{
				max_count = a[j];
				ans = j;
			}
         }
         final[ans]++;
    } 
    for(int i=1;i<=n;i++)
    {cout<<final[i]%md<<" ";}
} 

int main() 
{ 
	int t;
	cin>>t;
	while(t--) {
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	 {
		 cin>>arr[i];
	 }
	
    
    binod_kaun_hein(arr, n); 
    cout<<endl;
}
    
    return 0; 
} 

/*

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;



#define l long long int 
l  md = 1000000007;


l modular_exponential(l a, l n)
{
	if(n==0)
	{
		return 1;
	}
	
	
	
	if(n%2==0)
	{
		return modular_exponential((a*a)%md , n/2);
	}
	else
	{
		return (a*modular_exponential((a*a)%md , (n-1)/2))%md;
		
	}
	

}







int main() {
	

		int t;
	cin>>t;
	while(t--) {
		l n;
		 string s;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>s;
		}
		
		l ans=2;
		
		l big_value = modular_exponential(ans, n-1);
		for(int i=0;i<n;i++)
		{
			cout<<big_value<<" ";
			big_value/=2;
		}
		cout<<endl;
	}
	
	
	return 0;
}





#include<bits/stdc++.h>
using namespace std;


#define l long long int 

int main() {
	
	
	l t,n,k;
	cin>>t;
	while(t--) {
		
		cin>>n>>k;
		l a[n+1];
		map<l,l>mp;
		for(l i=0;i<n;i++) {
			
			cin>>a[i];
			
			}
			
			l col[n+1][n+1] = {0};
			for(l i=0;i<n;i++)
			{
				for(l j=0;j<n;j++)
				{
					col[i][j] = 0;
				}
			}
			for(l i=0;i<n;i++)
			{
				mp.clear();
				for(l j=i;j<n;j++) {
				col[i][j] = (j==0)? 0:col[i][j-1];
				if(mp.count(a[j])){
					if(mp[a[j]] == 1) {
						col[i][j]++;
						}
					col[i][j]++;
					}
				mp[a[j]]++;	
				}
				
			}
		
		
		l ans = 1e18;
		l table = 100;
		l dp[101][1001] = {0};
		for(l i=0;i<=table;i++)
		{
			for(l j=0;j<=table;j++)
			{
				dp[i][j]=0;
			}
		}
		
		for(l i=0;i<=n;i++)
		{
			dp[1][i] = col[0][i-1];
			
		}
		for(l i=2 ; i<= table; i++) {
			dp[i][1] = 0;
			}
			
		for(l i=2;i<=table;i++) {
			for(ll j=2;j<=n;j++) {
			l best = 1e18;
			for(l p = 1 ;p<j;p++) {
				best = min(best , dp[i-1][p]+col[p][j-1]);
				}
				dp[i][j] = best;
			}	
		}
		for(table = 1;table<=100;table++) {
		ans = min(table*k+dp[table][n] ,ans);
		}
		cout<<ans;
		
		}
	
	
	
	return 0;
	}




*/


























