#include <stdio.h>
#include<iostream>
#include<math.h>
#include <map>
#include <vector>
#include <stack>
#include<unordered_map>
using namespace std;
/* 
    
*/

// cout <<
// cin >>

int count(int n) {
    int a[n], b[n];
    a[0] = b[0] = 1;
    for(int i =1; i<n; i++) {
        a[i] = a[i-1] + b[i-1];
        b[i] = a[i-1];
    }
    return a[n-1] + b[n-1];
}

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    /*
        Single int recursive i/p
        int n;
        cin >> n;
    */
    int n;
    cin >> n;
    cout << count(n);

    return 0;
}