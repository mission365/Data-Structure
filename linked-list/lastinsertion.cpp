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
 
struct node
{
    int data;
    node *next;
};

void printLinkedList(node *n) {
    while(n != NULL) {
        cout<< n->data <<endl;
        n = n->next;
    }
}

void push(node **head_ref , int newData) {
    node *newNode = new node();
    newNode->data = newData; 
    newNode->next = *head_ref;
    *head_ref = newNode;
}

void middle_insertion(node *prev_node, int newData) {
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = prev_node->next;
    prev_node->next = newNode;
}

void last_insertion(node **head_ref, int newdata) {
    node *newNode = new node();
    newNode->data = newdata;
    newNode->next = NULL;

    node *last = *head_ref;
    if(*head_ref == NULL) {
        *head_ref = newNode;
        return;
    }  
    while(last->next != NULL) {
        last = last->next;
    }  
    last->next = newNode;
    return;
}

int main()
{
    node *head = NULL;
    push(&head , 5);
    push(&head , 10);
    push(&head , 15);

    middle_insertion(head->next, 25);

    last_insertion(&head , 20);

    printLinkedList(head);
    
}