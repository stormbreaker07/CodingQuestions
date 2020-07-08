#include <bits/stdc++.h>
#include <queue>
using namespace std;

typedef struct tree {
	int data;
	tree* left;
	tree* right;
}* nodeptr;
nodeptr root = NULL;

nodeptr getnode(int data)
{
nodeptr newnode = new tree;
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;
return newnode;
}
		
	
stack<nodeptr> s;
nodeptr curr;
nodeptr temp;

void inorder(nodeptr root)
{
curr = root;
while(curr!=NULL)
{s.push(curr);
	curr=curr->left;
}
while(curr == NULL && !s.empty())
{curr = s.top();  s.pop();
cout<<curr->data<<" ";	
curr= curr->right;
if(curr!=NULL)
{s.push(curr);
	curr=curr->left;
}
}
}




int main()
{        /*   1 
            /   \ 
          2      3 
        /  \ 
      4     5 
 */
    root = getnode(1);
	root->left = getnode(2);
	root->right = getnode(3);
	root->left->left = getnode(4);
	root->left->right = getnode(5);
	inorder(root);

return 0;
}
