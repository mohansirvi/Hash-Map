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
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int arr[26]={0};
        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']++;
        }
 
        int f = 0;
        for(int i=0;i<26;i++){
            if(arr[i]>1){
                f = 1;
                break;
            }
        }
        if(f){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
