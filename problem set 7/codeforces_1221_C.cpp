                #include<bits/stdc++.h>
                using namespace std;

                #define l long long int

                int main() {

                int n;
                cin>>n;
                l x,y,z,ans=0;
                for(int i = 0 ;i < n ; i++) 
                {
                cin>>x>>y>>z;
                l mn = min(x,y);
                mn = min(mn , z);
                ans += mn;
                x = x-mn;
                y = y-mn;
                z = z-mn;

                if(z==0) 
                {
                    if(x==y)
                    {
                        ans += (x+y)/3;
                    }
                    else
                    {
                        ans += min(x,y);
                    }
                } 
                else 
                {
                ans+=0;
                }

                cout<<ans<<endl;
                }

                    return 0;
                }