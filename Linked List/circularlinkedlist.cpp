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
    cout<<"Total "<<count<<" elements in Linked list."<<endl;
}

void circularLinkedList(node *first) {
    node *temp = first;

    if(first != NULL) {
        cout<< temp->data <<endl;
        temp = temp->next;

        while(temp != first) {
            cout<< temp->data <<endl;
            temp = temp->next;
        }
    }
}

int main()
{
    node *head = new node(); node *second = new node(); node *third = new node();
    node *four = new node(); node *five = new node(); node *six = new node();
    node *seven = new node(); node *eight = new node(); node *nine = new node();

    head->data = 8; head->next = second;
    second->data = 10; second->next = third;
    third->data = 12; third->next = four;
    four->data = 14; four->next = five;
    five->data = 16; five->next = six;
    six->data = 18; six->next = seven;
    seven->data = 20; seven->next = eight;
    eight->data = 22; eight->next = nine;
    nine->data = 24; nine->next = head;

    //printLinkedList(head);
    circularLinkedList(nine );
    return 0;
}