    #include<bits/stdc++.h>
    using namespace std;


    int main()
    {
    long long int  n,m;
    cin>>n>>m;
    long long int a[n],b[m];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    for(int i=1;i<n;i++)
    {
        a[i] += a[i-1];
    }

    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int dorm=0;
        for(int i=0;i<m;i++)
        {
            if(b[i]<=a[dorm])
            {
                if(dorm==0)
                {cout<<dorm+1<<" "<<b[i]<<endl;}
                else
                {
                    cout<<dorm+1<<" "<<b[i] - a[dorm-1]<<endl;
                }
            }
            else
            {  
                while(b[i]>a[dorm])
                {
                    dorm++;
                }
                cout<<dorm+1<<" " << b[i]-a[dorm-1]<<endl;
                
            }
            
        }


        return 0;
    }