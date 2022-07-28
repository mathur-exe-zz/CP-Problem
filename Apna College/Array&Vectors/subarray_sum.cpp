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
    int n, sum=0;
    cin >> n;

    int arr[n];
    for(int i=0; i<n;i++)
        cin >> arr[i];

    for(int i =0; i<n; i++) {
        sum =  0;
        for (int j=i; j<n; j++) {
            sum += arr[j];
            cout << arr[j] << " ";
        }
            cout << sum << endl;
    }


    // for(int i=0; i<n; i++) 
    //     cout << arr[i] << " ";
    

    return 0;
}