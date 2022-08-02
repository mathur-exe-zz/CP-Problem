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
    Approach: Two Pointer
*/


int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here
    // Array i/p & O/p
    int n, s;
    cin >> n >> s;
    int arr[n];
    for(int i=0; i<n;i++)
        cin >> arr[i];

    int i =0, j=0, st=-1, en=-1, sum=0;
    
    while(j<n) {
        sum += arr[j];
        while(sum > s) {
            sum -= arr[i];
            i++;
        }
        if(sum==s) {
            st = i+1;   // Starting index is included
            en = j+1;   // End index isn't included
            break;
        }
        j++;
    }

    cout << st << " " << en << endl;

    return 0;
}