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
    int k = -1;
    int p = v1[0];
    for (int i = 1; i < a; i++) {
        if(v1[i]<p){
            k++;
            int temp1 = v1[k];
            v1[k] = v1[i];
            v1[i] = temp1;
        }
    }
    for (int i = 0; i < a; i++) {
        if(v1[i]==p){
            k++;
            int temp1 = v1[k];
            v1[k] = v1[i];
            v1[i] = temp1;
        }
    }
    for (auto i : v1) {
        cout<<i;
    }
    
    
    return 0;
}

