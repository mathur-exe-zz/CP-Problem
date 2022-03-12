#include <stdio.h>
#include<iostream>
#include<math.h>
#include <map>
using namespace std;

/* 
    
*/

vector <int> v;
int n;

// cout <<
// cin >>

void search(int k) {
    if (k == n+1) {
        // process subset
    } 
    else {
        // include k in the subset
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
        // don’t include k in the subset
        search(k+1);
    }
}


int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> n;
    for(int i=0; i<n; i++)
        cin >> v[i];

    search()

    return 0;
}