#include <stdio.h>
#include<iostream>
#include<math.h>
#include <map>
#include <vector>
#include <stack>
#include<unordered_map>
using namespace std;

/* 
    PS: String of binary nos w/o consecutive 1s
    Link: https://leetcode.com/discuss/general-discussion/1287402/count-number-of-binary-strings-without-consecutive-1s 
*/

// cout <<
// cin >>

int count(int prev, int n){
    if(n==0) return 0;
    if(n==1) {
        if(prev==0)
            return 2;
        if(prev==1)
            return 1;
    }
    if(prev==0) 
        return count(0, n-1) + count(1, n-1);
    if(prev==1)
        return count(0, n-1);

}

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input_rec.txt", "r", stdin);
    freopen("output_rec.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    
    cout << "Starting val = 1 --> " << count(1, n) << "\n";
    cout << "Starting val = 0 --> " << count(0, n);

    return 0;
}