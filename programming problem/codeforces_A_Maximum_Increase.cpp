    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    	int n;
    	cin>>n;
    	long long int a[n+1];
    	for(int i=0;i<n;i++)
    	{
    		cin>>a[i];
    	
    	}
    	a[n] = 10000000000;
    	long int mx =0;
    	int count = 0;
    	for(int i=0;i<n;i++)
    	{
    		if(a[i]<a[i+1])
    		{count++;}
    		else
    		{count++;
    		    if(count>mx)
    		    {mx = count;}
    		    count=0;
    		}
    	}
    	if(count>mx)
    	{mx = count;}
    	cout<<mx;
    	
    	return 0;
    }
