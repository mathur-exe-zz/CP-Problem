#include <stdio.h>
#include<iostream>
#include<math.h>
#include <map>
#include <vector>
using namespace std;

/* 
    
*/

vector <int> subset;
int n;

// cout <<
// cin >>

void search(int k) {
    if (k == n+1)  {
        cout << "sht";
        for(int i =0; i<k; i++)
            cout << subset[i];
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
        cin >> subset[i];

    search(n);

    return 0;
}