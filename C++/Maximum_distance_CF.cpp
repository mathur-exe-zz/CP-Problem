#include <stdio.h>
#include<iostream>
#include<math.h>
#include <map>
#include <vector>
using namespace std;

/* 
    
*/

// cout <<
// cin >>

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n; cin >> n;
    int d, max_sq=0;

    vector <int> x(n);
    vector <int> y(n);

    // for(int i=0; i<n; i++) cin >> x[i];
    // for(int i=0; i<n; i++) cin >> y[i];

    for (int& t: x) cin >> t;
    for (int& t: y) cin >> t;

    for(int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++){
            d = int(pow(x[i]-x[j], 2.0) + pow(y[i]-y[j], 2.0));
            max_sq = max(max_sq, d);
        }
    }

    cout << max_sq;

    return 0;
}