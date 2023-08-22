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
int main()
{
    int x = 20;

    int *ptr;
    ptr = &x;

    cout<<"address of x(ptr): "<< ptr <<endl;
    cout<<"value stored in pointer(*ptr): "<< *ptr <<endl;
    cout<<endl;

    int a[] = {2,3,4,5,6};

    int *ptr1;
    ptr1 = a;

    int *ptr2;
    ptr2 = &a[0];

    cout<<"point the address of first element of array a :"<<ptr1<<endl;
    cout<<"point the address of first element of array a :"<<ptr2<<endl;

    return 0;
}