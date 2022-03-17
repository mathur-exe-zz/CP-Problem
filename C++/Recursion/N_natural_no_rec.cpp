#include <stdio.h>
#include<iostream>
#include<math.h>
#include <map>
#include <vector>
#include <stack>
#include<unordered_map>
using namespace std;
/* 
    
*/

// cout <<
// cin >>

void print(int n) {
    if(n==0) return ;
    cout << n << " ";
    print(n-1);
    if(n==1) return;
    cout << n << " ";
    return;
}

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input_rec.txt", "r", stdin);
    freopen("output_rec.txt", "w", stdout);
#endif
    int n;
    cin >> n;

    // cout << p
    print(n);

    return 0;
}