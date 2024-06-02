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

struct student
    {
        int roll;
        string name;
        int mobile_no;

        void printDetails() {
            cout<<"Name is: "<<name<<endl;
            cout<<"Roll is: "<<roll<<endl;
            cout<<"mobile_no is: "<<mobile_no<<endl;
        }
    };

int main()
{
    // student p1,p2;
    // p1.roll = 21250002;
    // p1.name = "Mission Devnath";
    // p1.mobile_no = 55;

    // p2.roll = 21250007;
    // p2.name = "Mrinal Devnath";
    // p2.mobile_no = 56;

    student p1 = {2125002, "Mission Devnath", 55};
    student p2 = {21250034, "alice ", 57};

    p1.printDetails();
    cout<<endl;
    p2.printDetails();
    
    return 0;
}