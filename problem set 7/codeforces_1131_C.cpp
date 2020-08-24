#include<bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cin>>n;
    multiset<long int> s;
    long int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }
    deque <long int > d;
    int l=0;
      multiset <long int > :: iterator itr;
       
    for (itr = s.begin(); itr != s.end(); ++itr) 
     {x = *itr;
         if(l%2==0)
         {
            d.push_front(x);
         }
         else {
             d.push_back(x);
         }
         l++;
     }

deque <long int> :: iterator it; 
    for (it = d.begin(); it != d.end(); ++it) 
        cout<< *it <<" "; 

    return 0;
}