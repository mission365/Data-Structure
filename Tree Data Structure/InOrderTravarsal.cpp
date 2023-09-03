#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vll vector<ll>
#define srt sort(a,a+n)
#define sort_vec_gre sort(v.begin(),v.end(),greater<ll>())
#define for_n for(int i=0;i<n;i++)
#define v_sort sort(v.begin(),v.end())
 
/* find index of max value from array--->
int maximum_value= *max_element(a,a+n);
int maximum_value_index = find(a,a+n,mxval)-a;
*/

struct node {
    int data;
    node* left;
    node* right;
};

node* newnode(int data) {
    node* temp = new node();
    temp ->data = data;
    temp ->left = NULL;
    temp ->right = NULL;

    return temp;
}

void printInorder(node *node) {
    if(node == NULL) {
        return;
    }

    printInorder(node -> left);

    cout<< node->data <<endl;

    printInorder(node -> right);
}

int main()
{
    node *root = newnode(1);
    root -> left = newnode(2);
    root -> right = newnode(3);
    root -> left ->left = newnode(4);
    root -> left ->right = newnode(5);
    /*
                    1
                   / \
                  2   3
                 / \
                4   5
    
    */
    printInorder(root);

    return 0;
}