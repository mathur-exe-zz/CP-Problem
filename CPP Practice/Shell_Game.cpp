#include <stdio.h>
#include<iostream>
#include<math.h>
#include <map>
using namespace std;

/* 
  Shell Game: http://www.usaco.org/index.php?page=viewproblem2&cpid=891  
*/


int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, a, b, g;
    int i=1, win=0;
    cin >> n;

    while(i<=n){
        cin >> a >> b >> g;
        if(g==a || g==b) win++;
        i++;
    }

    cout << win;

    return 0;
}