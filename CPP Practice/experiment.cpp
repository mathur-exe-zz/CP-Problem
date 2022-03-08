#include <stdio.h>
#include<iostream>
#include<math.h>
#include <map>
// #include "debugging.h"
using namespace std;

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    map <string, int> m;

    // m["hello"] = 1;
    // cout << m["hello"];

    for (int i =0; i<10; i++) {
        m[to_string(i)] = i*100;
    }

    // cout << m;
    // for (auto x : m)
    //     cout << x.first << " ";
    // cout << "\n";
    // cout << m["342"]

    cout << __LINE__;
    
    return 0;
}