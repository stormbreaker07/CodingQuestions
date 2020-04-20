    #include<bits/stdc++.h>
    using namespace std;
     
    #define md 1000000007
    
     
    vector<long long int>  fun(int stringLen)
    {vector<long long int> fibSeries(100002,0);
		fibSeries[0] = 1; 
		fibSeries[1] = 1; 
     
		for (int i = 2; i <= stringLen; i++) 
		{ 
			fibSeries[i] = (fibSeries[i-1] + fibSeries[i-2]);
		}
		return fibSeries; 
	}
	
    
    long long int solution(string s ,char q ,vector<long long int> f)
    {long long int ans =1;
		int count1 = 1;
		for (unsigned int i=1;i<s.length();i++)
    	{
    		if (s[i]==s[i-1] && s[i]==q )
    			{
    				count1++;
    			}	
    			else if (s[i]!=s[i-1] && s[i-1]==q)
    			{
    				ans*= f[count1]; 
    				count1=1;
    			}
    	}
    	
		return ans;
	}
    
    
    
     
    int main()
    {
		string s;
    	cin >> s;
    	//just to increase size of string intens
    	s=s+'*';
    	char q;
    	cin >> q;
    	
		vector<long long int> f =fun(s.length());
		
		cout<<solution(s,q,f);
    	
    	
    	return 0;
    }
     
