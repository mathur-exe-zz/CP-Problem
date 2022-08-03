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

    // Array i/p & O/p
    int n;
    const int N = 1e6+2;
    cin >> n;
    int arr[n];
    int check[N];
    for(int i=0; i<n;i++) {
        cin >> arr[i];
    }
    for(int i =0; i<N; i++) {
        check[i] = false;
    }
    for(int i =0; i<n; i++) {
        if(arr[i] >= 0) {
            check[arr[i]] = true;
        }
    }
    for(int i=0; i<N; i++) {
        if(check[i] == false) {
            cout  << "Smallest missing: " << i << endl;
            return 0;
        }
    }

    cout << "Nth found" << endl;
    return 0;
}