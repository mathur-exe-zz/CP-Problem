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

int fibo(int n){
    if(n ==0) return 0;
    if(n==1) return 1l;
    return fibo(n-1) + fibo(n-2);
}

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input_rec.txt", "r", stdin);
    freopen("output_rec.txt", "w", stdout);
#endif
    int n;
    cin >> n;

    cout << fibo(n); 
    return 0;
}