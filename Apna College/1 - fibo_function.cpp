#include <stdio.h>
#include<iostream>
#include<math.h>
#include <map>
using namespace std;

// cout <<
// cin >>

void fibo(int n);


int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here
    int n;
    cin >> n;
    fibo(n);

    return 0;
}

void fibo(int n) {
    int t1=0, t2=1;
    int temp;

    for(int i=0; i<5; i++) {
        cout << t1;
        temp = t1 + t2;
        t1 = t2;
        t2 = temp;
    }
}