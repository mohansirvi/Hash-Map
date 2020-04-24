#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL)

int main()
{
    //your code goes here
    fast;
    ll n;
    cin>>n;
    map<pair<ll,ll>,ll> mp;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        mp[make_pair(x,y)]++;
    }
    for(auto it : mp)
    {
       cout<< (it.first).first<< " "<< (it.first).second << " " << it.second <<endl;
    }
    return 0;
}
