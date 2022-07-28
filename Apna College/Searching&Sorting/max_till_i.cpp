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

    int maxN = INT_MIN;
    for(int i =0; i<n; i++) {
        if(maxN < arr[i]) {
            maxN = arr[i];
        }

        cout << "Max value at " << i << " index is " << maxN << "\n";
    }

    for(int i=0; i<n; i++) 
        cout << arr[i] << " ";

    return 0;
}w