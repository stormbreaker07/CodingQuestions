#include <bits/stdc++.h>
using namespace std;




int main()
{
int n,ax,ay,bx,by,cx,cy;
cin>>n;
cin>>ax>>ay; /* for queen */
cin>>bx>>by; /* for starting */
cin>>cx>>cy; /* for end */

/*first box*/

if(ax>=bx && ax>=cx && by>=ay && by<=n && ay<=cy && cy<=n)
{cout<<"YES";}
	
/* second box */	
else if(ax<=bx && bx<=n && ax<=cx && cx<=n && ay<=by && by<=n && ay<=cy && cy<=n)
{cout<<"YES";}

/* third box */
else if(ax<=bx && bx<=n && ax<=cx && cx<=n && by>=1 && ay>=by && 1<=cy && cy<=ay)
{cout<<"YES";}

/* fourth box */
else if(1<=bx && bx<=ax && 1<=cx && cx<=ax && 1<=by && by<=ay && 1<=cy && cy<=ay)
{cout<<"YES";}

else 
{cout<<"NO";}



return 0;
} 
	
	
