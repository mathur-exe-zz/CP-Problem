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

    if(n==1) {
        cout << '1' << endl;
        return 0;
    }

    int ans=0, maxN=INT_MIN;
    for(int i =1; i<n-1;i++) {
        if(arr[i] > maxN && arr[i] > arr[i+1]) {
            maxN = max(maxN, arr[i]);
            ans++;
        }
    }

    cout << ans << endl;
    // for(int i=0; i<n; i++) 
    //     cout << arr[i] << " ";
    
    return 0;
}