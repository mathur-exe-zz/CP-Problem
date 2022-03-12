#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

void dbg() {
    cerr << "x is " << endl; 
}


int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    dbg();
    int n;
    cout << "Enter the number of repetitions";
    cin >> n;
    for (int i=0; i<n; i++) 
        cout << "Hello World";
    dbg();
    return 0;
}