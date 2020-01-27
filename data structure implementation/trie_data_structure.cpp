#include<bits/stdc++.h>
using namespace std;

const int alpa = 26; 
/*create structure */
typedef struct Trie 
{ 
    struct Trie *children[alpa]; 
  
    // isEndOfWord is true if the node represents 
    // end of a word 
    bool isEnd; 
}* nodeptr; 

/*for new node*/
nodeptr getnode()
{
nodeptr n = new Trie;

n->isEnd = false;	
for(int i=0;i<alpa;i++)	
{n->children[i] = NULL;	
} 
return n;
}

void insert(nodeptr root,string s)
{
nodeptr temp = root;
for(unsigned int i=0;i<s.length();i++)
{
int index = s[i] - 'a';
if(!temp->children[index])
{
temp->children[index] = getnode();
temp = temp->children[index];
}
}
temp->isEnd = true;
}

bool search(nodeptr root,string s)
{
nodeptr temp = root;
for(unsigned int i=0;i<s.length();i++)
{int index = s[i] - 'a';
if(!temp->children[index])
{return false;}
temp = temp->children[index];
}
return(temp!=NULL && temp->isEnd);
}

bool isleaf(nodeptr root)
{
	
return root->isEnd != false; 	

}


void display(nodeptr root,string s,int level)
{
if(isleaf(root))
{	
cout<<s<<endl;
s.erase();	
}

for(int i=0;i<alpa;i++)
{
if(root->children[i])
	{
	s[level] = i+'a';
	display(root->children[i],s,level+1);
	}
}
}


int main()
{
int n;
cin>>n;
nodeptr root = getnode();
string a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];	
insert(root,a[i]);
}



	return 0;
}
