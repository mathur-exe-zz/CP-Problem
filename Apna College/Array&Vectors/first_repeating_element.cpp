#include <stdio.h>
#include <bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<climits>
#include<vector>
#include <map>
using namespace std;

// cout <<
// cin >>


int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here

    
    // Array i/p & O/p
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n;i++)
        cin >> arr[i];

    // Indexing array
    const int N = 1e6+2;
    int idx[N];
    for(int i =0; i<N; i++) {
        idx[i] = -1;
    }

    // 
    int min_idx = INT_MAX;
    for(int i =0; i<n; i++) {
        if(idx[arr[i]] != -1) {
            min_idx = min(min_idx, idx[arr[i]]);
        }
        else {
            idx[arr[i]] = i;
        }
    }

    if(min_idx == INT_MAX) 
        cout << "-1" << endl;
    else 
        cout << min_idx << " index" << endl;


    // for(int i=0; i<n; i++) 
    //     cout << arr[i] << " ";
    

    return 0;
}