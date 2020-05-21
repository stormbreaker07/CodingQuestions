    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    	int x,y;
    	cin>>x>>y;
    	
    	int count=0;
    	for( ; ; )
    	{
    	if(x<=0 || y<=0)
    	{
    		break;
    	}
    	else if(x==1 && y==1)
    	{break;}
    	else
    	{
    		if(x>y)
    		{
    			if(x>1)
    			{	
    				x = x-2;
    				y = y+1;
    				count++;
    			}
    		
    		}
    		else if(x<=y)
    		{
    			if(y>1)
    			{
    				x=x+1;
    				y=y-2;
    				count++;
    				
    			}
    			
    		}	
    	}	
    		
    	}
    	cout<<count;
    	
    	return 0;
    }