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

bool myCompare(pair <int , int> p1, pair <int, int> p2) {
    return p1.first<p2.first;
}

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here

    int arr[] = {10, 16, 7, 14, 5, 3, 2, 9};
    vector <pair <int, int>> v;



    // // auto pair making of the element of the arr w/ their index
    // for(int i =0; i<(sizeof(arr)/sizeof(arr[0]));i++) {
    //     v.push_back(make_pair(arr[i], i));
    // }

    // // sorting the array based on the v.first of the vector 
    // sort(v.begin(), v.end(), myCompare);
    

    // // replacing v.second w/ the the new index value, i.e after sorting 
    // for(int i =0; i<v.size(); i++) {
    //     arr[v[i].second] = i;
    // }

    // // 
    // for(int i=0; v.size(); i++) {
    //     cout << arr[i];
    // }


    return 0;
}