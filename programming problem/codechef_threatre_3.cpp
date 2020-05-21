/*The Theatre Problem*/


/****killing like kamikaze****/
                      
     /*tanuj yadav*/                

/**********************/

/*the threatre problrm*/



#include<bits/stdc++.h>
using namespace std;


int main()
{
int t;
cin>>t;
long int ans=0;
for(int i=0;i<t;i++)
{
int n;
cin>>n;
char s;
int y,x;
int a[4][4];
for(int j=0;j<4;j++)
{
for(int k=0;k<4;k++)
{a[j][k] = 0;}
}
for(int j=0;j<n;j++)
{
cin>>s>>y;
x = int(s)-65;
if(y==12)
{y=0;}
else if(y==3)
{y=1;}
else if(y==6)
{y=2;}
else if(y==9)
{y=3;}
a[x][y]+=1;
}

int countin =0;

int visit[4] = {0};
long int sum;
long int mx = -10000000;
for(int j=0;j<4;j++)
{sum=0;
	countin =0;
int nw[4] ={0};
visit[j] = 1;
for(int k=0;k<4;k++)	
{
if(visit[k]!=1)
{visit[k]=1;
	for(int l=0;l<4;l++)
	{
		if(visit[l]!=1)
		{visit[l]=1;
			for(int m=0;m<4;m++)
			{
				if(visit[m]!=1)
				{
				
				nw[0] = a[0][j];
				nw[1] = a[1][k];
				nw[2] = a[2][l];
				nw[3] = a[3][m];
				for(int w=0;w<4;w++)
				{if(nw[w]==0)
					{countin++;}
				}
				sort(nw,nw+4,greater<int>());
				sum = 100*nw[0]+75*nw[1]+50*nw[2]+25*nw[3];
				sum = sum -100*countin;
				if(sum>mx)
				{mx=sum;}
				countin=0;
				}
			}
		
		visit[l]=0;	
		}	
	}
	
visit[k] = 0;
}
}	
visit[j] = 0;
}
cout<<mx<<endl;
ans = ans + mx;


}
cout<<ans;


	return 0;
}
