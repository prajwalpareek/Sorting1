#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int partition(vector<int> &v1, int low ,int high){
    
    int k = low-1;
    int p = v1[high];
    for (int i = low; i <= high; i++) {
        if(v1[i]<p){
            k++;
            int temp1 = v1[k];
            v1[k] = v1[i];
            v1[i] = temp1;
        }
    }
    k++;
    int temp2 = v1[k];
    v1[k]   = v1[high];
    v1[high]  = temp2;
    return (k);
}
int quicksort(vector<int> &v1 , int low , int high){
    if(low<high){
        int p1 = partition(v1,low,high);
        
        quicksort(v1, low , p1-1);
        quicksort(v1 , p1+1, high);
        
    }
}

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
    quicksort(v1 , 0 , a-1);
    for (auto i : v1) {
        cout<<i<<" ";
    }

    return 0;
}

