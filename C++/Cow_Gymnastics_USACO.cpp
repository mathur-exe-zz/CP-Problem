#include <stdio.h>
#include<iostream>
#include<math.h>
#include <map>
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

    int k, n;
    int ctr=0;
    cin >> k >> n;
    int a[k][n];
    boolean b[k][n];  

        for(int i=0; i<k; i++){
            for(int j=0; j<n; j++)
                cin >> a[i][j];

        }

        for(int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if(i!j && i>j){
                    b[i][j] = false;
                }
            }
        }


    return 0;
}