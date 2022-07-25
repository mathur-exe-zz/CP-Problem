#include <stdio.h>
#include<iostream>
#include<math.h>
#include <map>
using namespace std;

// cout <<
// cin >>

/*
    1           |           0C0       
    1 1         |           1C0 1C1      
    1 2 1       |           2C0 2C1 2C2
    1 3 3 1     |           3C0 3C1 3C2 3C3
    1 4 6 4 1   |           4C0 4C1 4C2 4C3 4C4
*/

int fact(int n) {
    int ft = 1;
    for(int i=2; i<=n; i++) {
        ft *= i;
    }
    return ft;
}   

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            int temp = fact(i)/(fact(j)*fact(i-j));
            cout << temp << " "; 
        }
        cout << "\n";
    }

    return 0;
}