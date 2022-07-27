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

int binary(int arr[],  int n, int key) {
    int s = 0, e=n;
    while(s<=e) {
        int mid = (s+e)/2;
        if (arr[mid]==key) return mid;
        else if(arr[mid]<key) s = mid +1;
        else if (arr[mid] > key) e = mid-1;
    }
    return -1;
}

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i<n; i++) 
        cin >> arr[i];

    int key;
    cin >> key;

    cout << binary(arr, n, key);

    return 0;
}