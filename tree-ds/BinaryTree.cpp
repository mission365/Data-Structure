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
    node *left;
    node *right;
};

node* newnode(int data) {
    node* element = new node();
    element -> data = data;
    element -> left = NULL;
    element -> right = NULL;

    return element;
}

// node* newnode(int data) {
//     node* node = new struct node();
//     node -> data = data;
//     node -> left = NULL;
//     node -> right = NULL;
// }

void printTree(node *n) {
    //this is actually dfs
    while(n != NULL) {
        cout<< n->data << " ";
        printTree(n->left);
        n = n->right;
    } 
    //cout<<endl;

    /* output will be---->

        1 2 4 
        5
        3 6 
        7
    */
}

int main()
{
    node* root = newnode(1);
    /*
            1
          /   \
        NULL  NULL
    */

    root->left = newnode(2);
    /*
            1
           / \
          2   NULL
         / \
     NULL   NULL 
    */
    root->right = newnode(3);
    /*
            1
          /   \
        2      3
       / \    / \
      N   N  N   N
    */

    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right->left = newnode(6);
    root->right->right = newnode(7);

    printTree(root);
}