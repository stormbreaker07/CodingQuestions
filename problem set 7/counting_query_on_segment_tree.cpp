        #include<bits/stdc++.h>
        using namespace std;
         
         #define L  int
         
         
        typedef struct items {
		int mn,con;
		}item;
         
        
        item merge(item a ,item b)
        {
			if(a.mn < b.mn)
			{
				return a;
			}
			else if(a.mn > b.mn)
			{
				return b;
			}
			else
			{
				item x = {a.mn , a.con + b.con}; 
				return x;
			}
		}
        
         
        void build(item *tree ,L ss , L se, L *a ,L index)
        {
        if(ss == se)
        {
        	tree[index] = {a[ss] , 1};
        	return;
        }
         
        int mid = (ss+se)/2;
        build(tree , ss , mid , a, 2*index);
        build(tree , mid+1 , se , a ,2*index + 1);
         
        tree[index] = merge(tree[2*index],tree[2*index+1]);
         
        return ;
        }
         
         
        void update(item *tree , L ss  ,L se , L  l , L increament ,L index) {
        	
        	if(l>se or l<ss)
        	{
        		return ;
        	}
        	
        	//base case
        	if(ss == se)
        	{
        		tree[index] = {increament ,1};
        	return;
        	}
        	
        	
        	if(l<=se and l>=ss)
        	{
        		
        		L  mid = (ss+se)/2;
        		update(tree, ss,mid ,l , increament ,2*index);
        		update(tree, mid+1,se ,l , increament ,2*index+1);
        	   tree[index] = merge(tree[2*index],tree[2*index+1]);
        	}
         
        return ;		
        }
         
         
        item query_solution(item *tree , L ss, L se , L l ,L r ,L index) {
        	
        //if not in range
        if(r<ss or l>se) {
        return {INT_MAX , 0};
        }	
         
        // pure overlap
        if(ss>=l and se<=r)
        {
        return tree[index];
        }	
         
         
        //recursion part
        L mid = (ss+se)/2;
        item left = query_solution(tree , ss , mid , l , r ,  2*index);
        item right = query_solution(tree , mid+1 , se , l , r ,  2*index+1);
        return merge(left,right);
        	
        }
         
         
         
        int main() {
        L n,q;
        cin>>n>>q;	
        L a[n];
        for(L i=0;i<n;i++)
        {
        	cin>>a[i];
        }	
        item tree[4*n+1];	
         
        build(tree , 0 ,n-1, a , 1);
         
         
        L x,l,r;
        while(q--)
        {
        	cin>>x>>l>>r;
        	if(x==2)
        	{r--;
        	   item ans = query_solution(tree, 0 , n-1 , l , r , 1);
        	   cout<<ans.mn << " "<< ans.con<<endl;
        	   }
        	else
        	{ 
        	   update(tree, 0 ,n-1 , l , r , 1);
    	   	}	
           
        }	
        	
        	return 0;
        }
