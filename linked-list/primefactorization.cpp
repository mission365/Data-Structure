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
    int n;
    cin>>n;
    vector<int> prime_factors;
    for(int i=2;i<=n;i++) {
        while(n%i==0) {
            prime_factors.push_back(i);
            n/=i;
        }
    }
    for(int prime :prime_factors) {
            cout<<prime<<" ";
    }
    return 0;
}