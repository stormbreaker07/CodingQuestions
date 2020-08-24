#include<bits/stdc++.h>
using namespace std;

char keypad_in[][10] = {"" , "" , "ABC" , "DEF" , "EHI"  ,"JKL" , "MNO" ,"PQRS" ,"TUV" , "WXYZ"};

void keypad(char *in, char *out , int i ,int j)
{

    if(in[i] == '\0')
    {
        out[j] = '\0';
        cout<<out<<endl;
        return ;
    }


int digit = in[i] - '0';
if(digit <=1)
{
    keypad(in , out , i+1 ,j);
}

for(int k=0; keypad_in[digit][k]!='\0' ;k++)
{
out[j] = keypad_in[digit][k];
keypad( in , out , i+1 , j+1); 

}



    return ;
}

int main() {

char a[100];
cin>>a;
char out[100];

keypad(a ,out , 0 , 0 );



    return 0;
}