    #include<bits/stdc++.h>
    using namespace std;


    int main()
    {
    int t;
    cin>>t;
    string s;
    while(t--) {
    cin>>s;
    long int a[]={-1,-1,-1,-1};
    int n,cont=0;
    n = s.length();
    long int mn=INT_MAX,ans = INT_MAX,mx=-2;
    for(long int i=0;i<n;i++) {
    //cout<<s[i]<<" ";
        a[s[i]-'0'] = i;
    //    cout<<a[s[i]-'0']<<" ";
        mn = min(a[1] , a[2]);
        mn = min(a[3] , mn);

        mx = max(a[1] , a[2]);
        mx = max(mx , a[3]);


        if(mn!=-1 && mx!= -1) {
            cont++;
            ans = min(ans , (mx-mn)+1);
        }
    //cout<<ans<<" "<<mx<< " "<<mn<<endl; 
    }
    if(cont==0) {
        cout<<0<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }

    }



        return 0;
    }