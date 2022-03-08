#include <stdio.h>
#include<iostream>
#include<math.h>
#include <map>
using namespace std;

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    cout << n << "-->";
    while(n != 1 && n>0) {
        if(n%2==0) n /= 2;
        else n = 3*n +1;
        cout << n << "-->";
    }

    return 0;
}