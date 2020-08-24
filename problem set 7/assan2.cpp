#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define L long long int 

void fastscan(l &number) 
{ 
    //variable to indicate sign of input number 
    bool negative = false; 
    register int c; 
  
    number = 0; 
  
    // extract current character from buffer 
    c = getchar(); 
    if (c=='-') 
    { 
        // number is negative 
        negative = true; 
  
        // extract the next character from the buffer 
        c = getchar(); 
    } 
  
    // Keep on extracting characters if they are integers 
    // i.e ASCII Value lies from '0'(48) to '9' (57) 
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
  
    // if scanned input has a negative sign, negate the 
    // value of the input number 
    if (negative) 
        number *= -1; 
} 





int main() {
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	L t;
scanf("%lld",&t);
	while(t--)
	{
		string str;
		cin>>str;
	
		L l=0,r=0,u=0,d=0;
		
		
		l = count(str.begin(), str.end(), 'L');
		r = count(str.begin(), str.end(), 'R');
		u = count(str.begin(), str.end(), 'U');
		d = count(str.begin(), str.end(), 'D');
		
		
		L x1,y1;
	scanf("%lld",&x1);
	scanf("%lld",&y1);
		
		int q;
		cin>>q;
		L x2,y2;
		while(q--)
		{
		scanf("%lld",&x2);
	scanf("%lld",&y2);
	L diff_x = x2 - x1;
			L diff_y = y2 - y1;
			L l1=0,r1=0,u1=0,d1=0;
			if(diff_x<0)
			{
				l1 = abs(diff_x);
			}
			else
			{
				r1 = abs(diff_x);
			}
			
			if(diff_y<0)
			{
				d1 = abs(diff_y);
			}
			else
			{
				u1 = abs(diff_y);
			}
			
			
			if(l>=l1 && r>=r1 && u>=u1 && d>=d1)
			{cprintf("YES ");
				 printf("%lld \n", l1+r1+u1+d1 );
			}
			else
			{
				char s1[4] = {"NO "};
				printf("%s \n" , s1);
			}
		}
		
	}
	
	return 0;
}
