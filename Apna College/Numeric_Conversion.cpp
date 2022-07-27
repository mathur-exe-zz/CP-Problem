#include <stdio.h>
#include <bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<climits>
#include<vector>
#include <map>
using namespace std;

/*
1 | 1+1         c=- | sum=sum*10+1
1 | 1+0         c=- | sum = sum*10 + 0
1 | 0+0         c=0 | sum = sum*10 + 0 
-----
0 | 1+1         c=1 | sum = sum*10 + 0
0 | 1+0         c=- | sum = sum*10 +1
0 | 0+0         c=- | sum = sum*10 + 0
*/

// cout <<
// cin >>

void addB(int a, int b) {
    int ans=0, carry=0;
    while(a>0 && b>0) {
        if(a%2==0 && b%2==0){
            ans = ans*10 + carry;
            carry = 0;
        }
        else if (a%2==0 && )
    }

}

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here
    int a, b;
    cin >> a >> b;
    addB(a, b);
    return 0;
}