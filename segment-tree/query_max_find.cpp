#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[100005], seg[4*100005];


void build(ll ind, ll low, ll high){
    if(low == high){
        seg[ind] == a[low];
        return;
    }

    ll mid = (low+high)/2;
    build(2*ind+1, low, mid);
    build(2*ind+2, mid+1, high);
    seg[ind] = max(seg[2*ind+1], seg[2*ind+2]);
}


ll query(ll ind, ll low, ll high, ll l, ll r){
    if(low>=l && high<=r){
        return seg[ind];
    }
    if(high<l || low>r){
        return INT_MIN;
    }
    ll mid = (low+high) / 2;
    ll left = query(2*ind+1, low, mid, l, r);
    ll right = query(2*ind+2, mid+1, high, l, r);
    return max(left, right);
}

int main() {
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    
    //build(index, begin, end)
    build(0, 0, n-1);

    ll q;
    cin>>q;
    while(q--){
        ll l,r;
        cin>>l>>r;
        //query(index, low, high, i, j)
        cout<< query(0,0,n-1, l,r);
    }
    return 0;
}