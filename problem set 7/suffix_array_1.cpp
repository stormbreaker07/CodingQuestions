#include<bits/stdc++.h>
using namespace std;

void radix_sort(vector<pair<pair<int ,int >,int> > &a) {
    int  n = a.size();
    {
        vector<int> cnt(n);
        for(auto x : a)
        {
            cnt[x.first.second]+= 1;
        }
        vector<int> pos(n);
        pos[0] = 0;
        for(int i=1;i<n;i++)
        {
            pos[i] = pos[i-1] + cnt[i-1];
        }
        vector<pair<pair<int ,int >,int> > new_one(n);
        for(auto x: a)
        {
            int i = x.first.second;
            new_one[pos[i]] = x;
            pos[i]++;
        }
        a = new_one;
    }
    {
        vector<int> cnt(n);
        for(auto x : a)
        {
            cnt[x.first.first]+= 1;
        }
        vector<int> pos(n);
        pos[0] = 0;
        for(int i=1;i<n;i++)
        {
            pos[i] = pos[i-1] + cnt[i-1];
        }
        vector<pair<pair<int ,int >,int> > new_one(n);
        for(auto x: a)
        {
            int i = x.first.first;
            new_one[pos[i]] = x;
            pos[i]++;
        }
        a = new_one;
    }


}



int main()
{
    string s;
    cin>>s;
    s += '$';
    int n = s.size();
    vector<int> p(n) , c(n);
    {
        //for k = 0 
        vector<pair<char ,int> > a(n);
        for(int i=0;i<n;i++)
        {
            a[i] = {s[i] , i};
        }
        sort(a.begin() , a.end());

        for(int i=0;i<n;i++)
        {
            p[i] = a[i].second;
        }
        c[p[0]] = 0;

        
        for(int i=1;i<n;i++)
        {
            if(a[i].first == a[i-1].first)
            {
                c[p[i]] = c[p[i-1]];
            }
            else
            {
                c[p[i]] = c[p[i-1]]+1;
            }
        }
    }

    int k=0;
    while((1<<k) < n)
    {
        vector<pair<pair<int ,int >,int> > a(n); 
    
        for(int i=0;i<n;i++)
        {
            a[i] = {{c[i],c[(i +(1<<k))%n]},i};
        }
        radix_sort(a);

         for(int i=0;i<n;i++)
        {
            p[i] = a[i].second;
        }
        c[p[0]] = 0;

        
        for(int i=1;i<n;i++)
        {
            if(a[i].first == a[i-1].first)
            {
                c[p[i]] = c[p[i-1]];
            }
            else
            {
                c[p[i]] = c[p[i-1]]+1;
            }
        }
    k =k+1;
    }
    int t;
    cin>>t;
string s1;
string n_s1;
while(t--)
{
cin>>n_s1;
int flag=0;
    for(int i=0;i<n;i++)
    {flag=0;
        s1 =  s.substr(p[i] , n-p[i]);
        cout<<s1<<endl;
        if(s1.length()-1>=n_s1.length())
        {

          int x = n_s1.compare(s1.substr(0,n_s1.length()));
          if(x==0)
          {
              flag=1;
              cout<<"Yes"<<endl;
            //   break;
          }

        }
    }
   
if(flag==0)
{cout<<"No"<<endl;}

}
    return 0;
}