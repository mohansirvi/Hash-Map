/*MOHAN SIRVI NIT SRINAGAR*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL)

int main()
{
    //your code goes here
    fast;
    ll n,cnt=0;
    cin>>n;
    ll arr[n];
    for(ll i=1;i<=n;i++){
        cin>>arr[i];
    }
    unordered_map<ll,ll>mp;
    for(ll i=1;i<=n;i++)
    {
        ll ans=INT_MIN,sum=0;
        for(ll j=i;j<=n;j++)
        {
            sum=sum+arr[j];
            if(ans<sum){
                ans=sum;
            }
            if(sum<0){
                sum=0;
            }
            mp[ans]++;
            if(mp[ans]==1){
                cnt+=ans;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
