#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long int> v[n];
    long int a,b,c,ans1=0,dia1=0,index=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        v[i].push_back(a);
        v[i].push_back(b);
        v[i].push_back(c);

        dia1 = min(a,b);
        dia1 = min(dia1,c);
        if(ans1<dia1)
        {
            ans1 = dia1;
            index = i;
        }

    }

    long int x1=0,x2=0,x3=0,pos1=0,pos2=0,ans=0,dia=0,l=-1,h=-1;
    b=-1;
     vector<long int > w1;
     vector<long int> w2;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {   w1.push_back(v[i][0]);
            w1.push_back(v[i][1]);
            w1.push_back(v[i][2]);
            w2.push_back(v[j][0]);
            w2.push_back(v[j][1]);
            w2.push_back(v[j][2]);
            



           for(int k=0;k<=2;k++)
           {
               if(w1[0]==w2[k] && w1[0]>=0)
               {x1=1;
               l=w1[0];
               w1[0]=-1;
               w2[k]=-1;
            
               break;
               }
           }
           for(int k=0;k<=2;k++)
           {
               if(w1[1]==w2[k] && w1[1]>=0)
               {x2=1;
               b=w1[1];
               w1[1]=-1;
               w2[k]=-1;
              
               break;
               }
           }
           for(int k=0;k<=2;k++)
           {
               if(w1[2]==w2[k] && w1[2]>=0)
               {x3=1;
               h = w1[2];
               w1[2]=-1;
               w2[k]=-1;
             
               break;
               }
           }
           
            // if(v[i][0]==v[j][0])
            // {x1=1;}
            // if(v[i][1]==v[j][1])
            // {x2=1;}
            // if(v[i][2]==v[j][2])
            // {x3=1;}

            if(x1+x2+x3>=2)
            {
                // for length
                if(l==-1)
                {l=0;
                    for(int k=0;k<=2;k++)
                    {
                        if(w1[k]>0)
                        {l = l+w1[k];}
                        if(w2[k]>0)
                        {l = l+w2[k];}
                    }
                }
                if(b==-1)
                {b=0;
                        for(int k=0;k<=2;k++)
                    {
                        if(w1[k]>0)
                        {b = b+w1[k];}
                        if(w2[k]>0)
                        {b = b+w2[k];}
                        
                    }
                
                }
                if(h==-1)
                {h=0;
                        for(int k=0;k<=2;k++)
                    {
                        if(w1[k]>0)
                        {h = h+w1[k];}
                        if(w2[k]>0)
                        {h = h+w2[k];}
                    }
                
                }

                dia = min(l,h);
                dia = min(dia,b);

                if(dia>ans)
                {
                    ans = dia;
                    pos1 = i;
                    pos2 = j;
                }
            }
        x1=0,x2=0,x3=0,l=-1,b=-1,h=-1;
        w1.clear();
        w2.clear();
        }

        x1=0,x2=0,x3=0,l=-1,b=-1,h=-1;
    }

 if(ans1>=ans)
 {
     cout<<1<<endl;
     cout<<index+1;
 }
 else
 {
     cout<<2<<endl;
     cout<<pos1+1<< " " <<pos2+1;
 }

    return 0;
}