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
    cin >> n;
    int arr[n];
    for(int i=0; i<n;i++)
        cin >> arr[i];

    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++) {
        currentSum += arr[i];
        if(currentSum < 0) 
            currentSum = 0;

        maxSum = max(maxSum, currentSum);
    }

    cout << maxSum << endl;
    return 0;
}