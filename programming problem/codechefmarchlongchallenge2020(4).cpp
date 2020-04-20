#include <iostream>
#include <bits/stdc++.h>
using namespace  std;

int main()
{	 ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
	long int test_case,number,query;
	cin>>test_case;
	/*for test case*/while(test_case!=0)
	{/*taking input*/cin>>number>>query;
	double array_store[number+1][2]; for(long int i=1;i<=number;i++) 	{cin>>array_store[i][1]; array_store[i][0] = i;}	
	double s[number]; for(long int i=1;i<number;i++) 	{s[i] = array_store[i+1][1] - array_store[i][1]; }
	double x1,x2,y0,wum,corona=0,c=0;
	for(long int i=0;i<query;i++)
	{cin>>x1>>x2>>y;
	for(long int index=1;index<number;index++) {
	if(s[index]!=0)	
	{if((array_store[index][1]==y &&  array_store[index][0]==x2) || (array_store[index+1][1]==y  && array_store[index+1][0]==x1))
	{c=1;}	
	else
	{c=0;
	wum = double(double(y-array_store[index][1])/s[index]); 
	wum = wum +  double(array_store[index][0]);
	if((wum>=x1 && wum<=x2) && (wum>=array_store[index][0] && wum<=array_store[index+1][0]))
	{corona++;
	}}}}cout<<corona<<endl;corona=0;}test_case--;	
}return 0;
}
