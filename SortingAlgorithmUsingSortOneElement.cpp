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
    for (int i = 0; i < a-1; i++) {
        if(v1[i+1]<v1[i]){
            int temp = v1[i];
            v1[i] = v1[i+1];
            v1[i+1] = temp;
        }
        for (int j = i-1; j >= 0 ; j--) {
            if(v1[j+1]<v1[j]){
                int temp1 = v1[j];
                v1[j] = v1[j+1];
                v1[j+1] = temp1;
            }
        }
        for (auto i : v1) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
