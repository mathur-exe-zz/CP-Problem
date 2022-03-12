#include <stdio.h>
#include<iostream>
#include<math.h>
#include <map>
using namespace std;

/* 
    Milk Mixing: https://usaco.guide/bronze/simulation?lang=cpp#example-2
*/

// cout <<
// cin >>

const int N = 3;
int c[N], m[N];

void pour(int i, int j){
    int amt = min(m[i], c[j]-m[j]);
    m[i] -= amt;
    m[j] += amt; 
}

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    for (int i = 0; i < N; ++i) 
        cin >> c[i] >> m[i];

    for(int i=0; i<100; i++)
        pour(i%N, (i+1)%N);

    for(int i=0; i<N; i++)
        cout << m[i] << " ";

    return 0;
}