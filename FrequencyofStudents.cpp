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
    int n;
    string name;
    map<string,int> mp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>name;
        if(mp.count(name)==0){
            mp[name]=1;
        }
        else{
            mp[name]++;
        }
    }
    for (auto it : mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}
