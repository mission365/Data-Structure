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

struct Node {
    int data;
    Node *next;
};

void printDetails(Node *n) {
    while(n != NULL) {
        cout<< n->data <<endl;
        n = n->next;
    }
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head-> data = 5;
    head-> next = second;

    second-> data = 3;
    second-> next = third;

    third-> data = 10;
    third-> next = NULL;

    printDetails(head);
    return 0;
}