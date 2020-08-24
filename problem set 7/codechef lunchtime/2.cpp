// #include<bits/stdc++.h>
// using namespace std;

// #define l long long int 

// int main()
// {

//   int t;
//   cin>>t;
//    l n,m,x,y,temp;
//    l st1,st2;
//   while(t--) {

//    cin>>n>>m>>x>>y;

//     //if x==y
//     if(x==y)
//     {st1 = x;
//     temp = n*m;
//     if(temp%2==0)
//     {
//         temp = temp/2;

//         temp = temp*st1;
//     }
//     else
//     {
//         temp = temp/2;

//         temp = (temp+1)*st1;
//     }
//     }


//     else if(x>y)
//     {
//         if(y%2==0)
//         {
//             st1 = y/2;
//             st2 = st1;
//         }
//         else
//         {
//             st1 = (y/2) + 1;
//             st2 = y/2;
//         }



// temp = n*m;
//      if(temp%2==0)
//     {
//         temp = temp/2;

//         temp = temp*(st1+st2);
//     }
//     else
//     {
//         temp = temp/2;

//         temp = (temp+1)*st1 + temp*(st2);
//     }

// if(n*m == 1)
// {
//     temp = x;
// }

//   }
//   else if(y>x)
//   {
//        st1 = x;
//     st2 = y-x;
//     if(st2>x)
//     {
//         st2 = x;
//     }

//    if((n*m)%2==0)
//    {
//        temp = (n*m)/2;
//        temp = temp*(st1 + st2);
//     }
//     else
//     {
//         temp = (n*m)/2;
//         temp = ((temp)*(min(st1,st2))) + ((temp+1)*(max(st1,st2)));

//     }

//   }
//   cout<<temp<<endl;


//   }

//   return 0;
// }


#include<bits/stdc++.h>
using namespace std;

#define l long long int 

int main()
{

  int t;
  cin>>t;
   l n,m,x,y,temp;
   l st1,st2;
  while(t--) {

   cin>>n>>m>>x>>y;

    //if x==y
    if(x==y)
    {st1 = x;
    temp = n*m;
    if(temp%2==0)
    {
        temp = temp/2;

        temp = temp*st1;
    }
    else
    {
        temp = temp/2;

        temp = (temp+1)*st1;
    }
    }


    else if(x>y)
    {
        st1 = y;


temp = n*m;
     if(temp%2==0)
    {
        temp = temp/2;

        temp = temp*(y);
    }
    else
    {
        temp = temp/2;

        temp = (temp+1)*y ;
    }

  }
  else if(y>x)
  {
       st1 = x;
    st2 = y-x;
    if(st2>x)
    {
        st2 = x;
    }

   if((n*m)%2==0)
   {
       temp = (n*m)/2;
       temp = temp*(st1 + st2);
    }
    else
    {
        temp = (n*m)/2;
        temp = ((temp)*(min(st1,st2))) + ((temp+1)*(max(st1,st2)));

    }

  }
  cout<<temp<<endl;


  }

  return 0;
}