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

struct node
{
    int data;
    node *next;
};

void printLinkedlist (node *n) {
    while(n!= NULL) {
        cout<<n->data<<endl;
        n= n->next;
    }
}

void printMiddleElement(node *head) {
    node *slow_ptr = head;
    node *fast_ptr = head;
    while(fast_ptr != NULL && fast_ptr->next != NULL) {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;
    }
    cout << "Middle element is:" << slow_ptr->data <<endl;
}

int main()
{
    node *head = new node(); node *second = new node(); node *third = new node();
    node *fourth = new node(); node *fifth = new node(); node *sixth = new node();
    node *seven = new node(); node *eight = new node(); node *ninth = new node();

    head -> data = 5; head ->next = second;
    second -> data = 1; second ->next = third;
    third -> data = 3; third ->next = fourth;
    fourth ->data = 4; fourth -> next = fifth;
    fifth -> data = -1; fifth-> next = sixth;
    sixth -> data= 90; sixth-> next = seven;
    seven -> data = 8; seven-> next = eight;
    eight -> data = 9; eight-> next = ninth;
    ninth -> data = 34; ninth-> next= NULL;

    //printLinkedlist(head);

    // node *start = head;
    // for(int i=0;i<5;i++) {
    //     cout<<start ->data<<endl;
    //     start = start->next;
    // }

    printMiddleElement(head);
}