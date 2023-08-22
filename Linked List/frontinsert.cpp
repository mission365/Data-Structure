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
    node *next;
};

void printLinkedList(node *n) {
    int count = 0;
    while(n != NULL) {
        cout<< n->data <<endl;
        n = n->next;
        count++;
    }
    cout<<"Total linked list elements are:"<<count<<endl;
}


//using head pointer------>
// node *push(node *head, int newdata) {
//     node *newNode = new node();
//     newNode->data = newdata;
//     newNode->next = head;
//     head = newNode;
//     return head;
// }

//using address of head pointer

void push(node **head_ref, int newData)  {

    node *newNode = new node();
    
    newNode->data = newData;
    newNode->next = *head_ref;
    *head_ref = newNode;
}

int main()
{

    // head = push(head, 5);
    // head = push(head, 7);
    // printLinkedList(head);

    // int num = 10;// int *p;// int **q;// *q = &*p;//  p = &num;// cout<<*p<<endl;// cout<<p<<endl;// cout<<&p<<endl;// cout<<**q<<endl;
    
    node *head = NULL;

    //cout<<&head<<endl;

    push(&head, 5);
    push(&head, 10);
    push(&head, 15);

    printLinkedList(head);




}