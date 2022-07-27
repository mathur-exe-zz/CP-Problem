#include <stdio.h>
#include<iostream>
#include<climits>
#include<math.h>
#include <map>
#include <vector>
using namespace std;

// cout <<
// cin >>


int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here

    vector <int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(2);
    v.push_back(0);

    // for(int i =0; i<v.size();i++)
    //     cout << v[i] << endl;

    // vector <int>:: iterator it;
    // for(it=v.begin(); it!=v.end(); it++) {
    //     cout << *it << endl;
    // }

    vector <int> v2 (3, 50);
    swap(v, v2);

    for(auto element:v) {
        cout << element << endl;
    }

    // v.pop_back();

    return 0;
}