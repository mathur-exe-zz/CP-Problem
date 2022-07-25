#include <stdio.h>
#include<iostream>
#include<math.h>
// #include <map>
using namespace std;

// cout <<
// cin >>

bool isPrime(int n);


int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here

    int a, b;
    cin >> a >> b;
    for (int i=a; i<=b; i++) {
        if(isPrime(i)) cout << i;
    }

    return 0;
}

bool isPrime(int n) {
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) 
            return false;
    }
    return true;
}