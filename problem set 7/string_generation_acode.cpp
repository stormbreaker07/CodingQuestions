#include<bits/stdc++.h>
using namespace std;

void acode(char *in , char *out ,int i , int j)
{
    if(in[i] == '\0')
    {
        out[j] = '\0';
        cout<<out<<endl;
    return ;
    }


    int digit = in[i] - '0';
    char letter =  'A' + digit - 1;
    out[j] =  letter;
    acode(in ,out, i+1 , j+1);

    if(in[i+1] != '\0' )
    {   
        int second_digit = in[i] - '0';
        int no = second_digit + digit*10;
        if(no<=26)
        {
          char second_letter = 'A' + no - 1;
            out[j] = second_letter;
            acode(in  , out , i+2 , j+1);
        }
    }

    return ;
}


int main()
{
    char s[100];
    cin>>s;
char out[100];
acode(s ,out , 0, 0);

    return 0;
}

