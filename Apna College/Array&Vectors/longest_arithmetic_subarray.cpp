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

/*
    TestCase: 
    7
    10 7 4 6 8 10 11
*/

/*
    Approach: 
    - As we loop through the array, we'll keep finding the difference between 
        a[j] & a[j-1]
    - Simultaneously, we'll keep track the largest arithmetic array    
*/

void main(int argc, char const *argv[]) {
    // Array i/p & O/p
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n;i++)
        cin >> arr[i];

    int ans = 2;            // In all cases, the longest subarray will be of len=2
    int pd = arr[1] - arr[0];   // Previous Difference
    int j=2;            // Index variable
    int curr_len = 2;   // Current length 

    while(j<n) {
        if(pd == arr[j]-arr[j-1]) {
            curr_len++;
        }
        else {
            pd = arr[j] - arr[j-1];
            curr_len = 2;
        }

        ans = max(ans, curr_len);
        j++;
    }
    cout << ans;



    // for(int i=0; i<n; i++) 
    //     cout << arr[i] << " ";


    return;
}