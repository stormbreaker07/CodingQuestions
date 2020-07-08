/*Long Contest and Cook Off Overlaps*/


/****killing like kamikaze****/
                      
     /*tanuj yadav*/                

/**********************/

/*the threatre problrm*/




#include <bits/stdc++.h> 
using namespace std; 

int dayofweek(int d, int m, long int y) 
{ 
	static int t[] = { 0, 3, 2, 5, 0, 3, 
					5, 1, 4, 6, 2, 4 }; 
	y -= m < 3; 
	return ( y + y / 4 - y / 100 + 
			y / 400 + t[m - 1] + d) % 7; 
} 

int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
long int m1,m2,y1,y2;
cin>>m1>>y1>>m2>>y2;
if(m1>2)
{y1 = y1+1;}
if(m2<2)
{y2 = y2-1;}
long int dif=0;


dif = ((y2 - y1)/400)*101;
y1  = y1+(((y2-y1)/400)*400);
for(long int j=y1;j<=y2;j++)
{
	int c=0;
int day = dayofweek(1, 2, j);
if(((j% 4 == 0) && (j% 100 != 0)) || (j% 400 == 0))
{c=1;}
	if(day == 6)
	{dif++;}
	else if(day==0 && c!=1) 
	{dif++;} 
}

cout<<dif<<endl;


}
return 0;
}
