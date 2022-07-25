#include <stdio.h>
#include<iostream>
// #include<math.h>
// #include <map>
using namespace std;

// cout <<
// cin >>

bool check(int a, int b, int c) {
    int x = max(a, max(b, c));
    int y, z;
    if(x == a) {
        y = b;
        z = c;
    }
    else if (x == b) {
        y = a;
        z = c;
    }
    else {
        y = a;
        z = b;
    }

    if(x*x == y*y + z*z) return true;
    else return false;
}


int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here
    int a, b, c;
    cin >> a, b, c;
    if(check(a, b, c)) cout << "Yes";
    else cout << "No"; 

    return 0;
}