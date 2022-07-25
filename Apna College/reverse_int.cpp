#include <stdio.h>
#include<iostream>
#include<math.h>
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
    int n, rev=0;
    cin >> n;

    while (n>0) {
        int d = n%10;
        rev = rev*10 + d;
        n /= 10;
    }

    cout << rev;

    return 0;
}