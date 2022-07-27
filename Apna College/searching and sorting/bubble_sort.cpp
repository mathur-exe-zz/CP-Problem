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

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n;i++)
        cin >> arr[i];

    /*
        1. We start from the first element and compare if it's larger than the next element
        2. If it's greater then swap the two 

    */

    int ctr = 1;
    while(ctr < n) {
        for(int i =0; i<n-ctr; i++) {
            if(arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        ctr++;
    }

    for(int i=0; i<n; i++) 
        cout << arr[i] << " ";
    

    return 0;
}