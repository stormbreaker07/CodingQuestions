/*Long Contest and Cook Off Overlaps*/


/****killing like kamikaze****/
                      
     /*tanuj yadav*/                

/**********************/

/*the threatre problrm*/


/*
#include<bits/stdc++.h>
using namespace std;


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
int centcode[4] = {6,4,2,0};
long int w,centu,m,date;
long int count =0;
for(long int i=y1;i<=y2;i++)
{	
if (((i% 4 == 0) && (i% 100 != 0)) || (i% 400 == 0))
{date = 0;
cout<<"leap year "<<i<<endl;	}
else
{date = 1;}
	
w = i%400;
centu = w/100;
m = i%100;

long int sum = date+4+centcode[centu]+m+m/4;
sum = sum%7;
if(date == 1 && sum == 1)
{count++;
cout<<i<<",";}
if(sum == 0)
{
	
cout<<i<<",";
count++;
}
}
cout<<count<<endl;
}


return 0;
}



#include<bits/stdc++.h>
using namespace std;


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
int a[7] = {4,9,10,15,21,26,27};
if(y1<y2)
{dif = ((y2/28) - (y1/28))*7;
long int num2 = y2%28;
long int num1 = y1%28;

for(int j=0;j<6;j++)
{
if(a[j]<=num1)
{dif--;}
if(a[j]<= num2)
{dif++;}
}
}
else if(y1 == y2)
{dif=0;
	long int num2 = y2%28;
for(int j=0;j<6;j++)
{
if(a[j]==num2)	
dif++;}
}
cout<<dif<<endl;
}
return 0;
}




#include<bits/stdc++.h>
using namespace std;


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
long int num = (y2-y1)/28;
cout<<num<<"num"<<endl;
y1 = y1 + num*28;

int centcode[4] = {6,4,2,0};
long int w,centu,m,date;
long long  int count =0;
for(long int j=y1;j<=y2;j++)
{	
if (((i% 4 == 0) && (i% 100 != 0)) || (i% 400 == 0))
{date = 0;}
else
{date = 1;}
	
w = i%400;
centu = w/100;
m = i%100;

long long  int sum = date+4+centcode[centu]+m+m/4;
sum = sum%7;
if(date == 1 && sum == 1)
{cout<<i<<" ";
	count++;}
if(sum == 0)
{
cout<<i<<" ";	
count++;}
}

count = count ;
cout<<count<<endl;
}

	return 0;
}



#include <bits/stdc++.h> 
using namespace std; 

int dayofweek(int d, int m, int y) 
{ 
	static int t[] = { 0, 3, 2, 5, 0, 3, 
					5, 1, 4, 6, 2, 4 }; 
	y -= m < 3; 
	return ( y + y / 4 - y / 100 + 
			y / 400 + t[m - 1] + d) % 7; 
} 

// Driver Code 
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
long int count=0;
for(int j=y1;j<=y2;j++)	
{int day = dayofweek(1, 2,j);
int c=0; 
 if(((j% 4 == 0) && (j% 100 != 0)) || (j% 400 == 0))
{c=1;}

	if(day == 6)
	{
		count++;}
	else if(day==0 && c!=1) 
	{cout<<j<<" ";
		count++; }
	
}
cout<<endl<<count<<endl;
}
	return 0; 
} 
*/

/*Long Contest and Cook Off Overlaps*/


/****killing like kamikaze****/
                      
     /*tanuj yadav*/                

/**********************/


#include <bits/stdc++.h> 
using namespace std; 

int dayofweek(int d, int m, int y) 
{ 
	static int t[] = { 0, 3, 2, 5, 0, 3, 
					5, 1, 4, 6, 2, 4 }; 
	y -= m < 3; 
	return ( y + y / 4 - y / 100 + 
			y / 400 + t[m - 1] + d) % 7; 
} 

// Driver Code 
int main() 
{ 
vector<long int> a(10000000,0);
for(long int j=1;j<=1000000;j++)	
{int day = dayofweek(1, 2,j);
int c=0; 
 if(((j% 4 == 0) && (j% 100 != 0)) || (j% 400 == 0))
{c=1;}
	if(day == 6)
	{a[j] = 1;}
	else if(day==0 && c!=1) 
	{a[j] = 1;}
}
for(unsigned long int i=1;i<a.size();i++)
{
a[i] = a[i-1]+a[i];
}

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
/*
for(long int j=y1;j<a.size();j++)
{c=0;

int day = dayofweek(1,2,j);
 if(((j% 4 == 0) && (j% 100 != 0)) || (j% 400 == 0))
{c=1;}
	if(day == 6)
	{index1 = j;
		break;}
	else if(day==0 && c!=1) 
	{index1 = j;
		break;}
}
for(int j=y2;j>=0;j--)
{c=0;
int day = dayofweek(1,2,j);
 if(((j% 4 == 0) && (j% 100 != 0)) || (j% 400 == 0))
{c=1;}
	if(day == 6)
	{index2 = j;
		break;}
	else if(day==0 && c!=1) 
	{index2 = j;
		break;}

}
vector<long int> :: iterator it;
long int index3=0,index4=0;
it = find (a.begin(), a.end(), index1);
if(it!=a.end())
{index3 = it-a.begin();}
it = find (a.begin(), a.end(), index2);
if(it!=a.end())
{index4 = it-a.begin();}


if(y1!=y2)
{cout<<a[y2]-a[y1]<<endl;
}
else if(y1==y2)
{int c=0,index1=0;
	int day = dayofweek(1,2,y1);
 if(((y1% 4 == 0) && (y1% 100 != 0)) || (y1% 400 == 0))
{c=1;}
	if(day == 6)
	{index1 = 1;
		}
	else if(day==0 && c!=1) 
	{index1 = 1;
		}
	cout<<index1<<endl;		

}

}
return 0;
}
*/
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
