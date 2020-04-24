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
    cin>>n;
    string s;
    cin>>s;
    int arr[26]={0};
    for(int i=0;i<n;i++){
        arr[s[i]-'a']++;
    }
 
    if(arr[0]>0 && arr[4]>0 && arr[8]>0 && arr[14]>0 && arr[20]>0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
