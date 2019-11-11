#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int a;
    cin>>a;
    vector<int> v1;
    for (int i = 0; i < a; i++) {
        int b;
        cin>>b;
        v1.push_back(b);
    }
    int k = v1[a-1];
    for (int i = a-2; i >= 0; i--) {
        if(v1[i]>k){
            v1[i+1]=v1[i];
        }
        if(v1[i]<k){
            v1[i+1]=k;
            break;
        }
        for (auto i : v1) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    if(v1[0]==v1[1]){
        v1[0]=k;
    }
    for (auto i : v1) {
        cout<<i<<" ";
    }
    return 0;
}
