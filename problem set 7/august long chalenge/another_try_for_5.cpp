#include <bits/stdc++.h> 
using namespace std; 


#define l long long 

void control_solution(vector<l> arr, l n ,l *final_arr);
void  binod_kaun_hein(vector<l> arr, l n , l *final_arr);
  
/*
void binod_ki_ma(vector<int> arr, int index,vector<int> sub, int *final_arr) 
{ 
   
    if (index == arr.size()) 
    { 
        int l = sub.size(); 
  
     
        if (l != 0) 
            control_solution(sub , l , final_arr); 
    } 
    else
    { 
        
       binod_ki_ma(arr, index + 1, sub , final_arr); 
  
        sub.push_back(arr[index]); 
  
     
        binod_ki_ma(arr, index + 1, sub , final_arr); 
    } 
    return; 
} 
 */ 


int main() 
{ l t;
	cin>>t;
	while(t--) 
	{
		l n;
    cin>>n;
    
    vector<l> arr; 
    l x;
    for(l i=0;i<n;i++)
    {
		cin>>x;
		arr.push_back(x);
	}
	l final_arr[n+1] = {0}; 
	
    binod_kaun_hein(arr , n , final_arr); 
    
    for(l i=1;i<=n;i++)
    {
		cout<<final_arr[i]<<" ";
	}
	cout<<endl;	
	}
    return 0; 
} 


    void binod_kaun_hein(vector<l> arr, l n , l *final_arr) 
{ 
   
    unsigned l x = pow(2, n); 
  
    
    for (l y = 1; y < x; y++) 
    { 
		vector<l> v;
        for (l j = 0; j < n; j++) 
        { 
            if (y & (1<<j)) 
               { v.push_back(arr[j]);}
              
        }
         control_solution(v , v.size() , final_arr );
        
         
    } 
} 


  
void control_solution(vector<l> a, l n ,l *final_arr) 
{ 
	sort(a.begin() , a.end());
  
    l ans = INT_MIN;
    l max_value = INT_MIN;
    l curr = 1; 
    for (l i = 1; i < n; i++) { 
        if (a[i] == a[i - 1]) 
            curr++; 
        else { 
            if (curr > max_value) { 
                max_value = curr; 
                ans = a[i-1]; 
            } 
            curr = 1; 
        } 
        }
        if (curr > max_value) { 
                max_value = curr; 
                ans = a[n-1]; 
			}
                
       
        if(ans!=INT_MIN)
        {
			final_arr[ans]+=1;
		}
        else
        {
			final_arr[a[0]]+=1;
		}
      
} 


