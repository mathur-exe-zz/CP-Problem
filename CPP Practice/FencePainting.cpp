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

    int cb, ce, mb, me;
    cout << "Enter the area covered by John \n";
    cin >> mb >> me;

    cout << "Enter the area covered by cow \n";
    cin >> cb >> ce;

    int t1 = mb > cb? cb : mb;  
    int t2 = me > ce? me : ce;
    cout << t2 - t1;

    return 0;
}