#include <stdio.h>
#include<iostream>
#include<math.h>
#include <map>
using namespace std;

/* 
    1790. Check if One String Swap Can Make Strings Equal - https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/
*/

// cout <<
// cin >>

bool single_swap(string s1, string s2){
    int l1 = s1.length(), l2 = s2.length();
    if(l1 != l2) return false;
    if(s1 == s2) return true;
    int idx1 = -1, idx2 = -1;
    for (int i = 0; i < l1; i++) {
        if (s1[i] != s2[i]) {
            if (idx1 == -1) {
                idx1 = i;
            } 
            else if (idx2 == -1) {
                idx2 = i;
            } 
            else {
                return false;
            }
        }
    }
        
    if (idx2 < 0) return false;
    if (s1[idx1] == s2[idx2] && s1[idx2] == s2[idx1]) return true;
    return false;
}

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s1, s2;
    cin >> s1 >> s2;

    cout << single_swap(s1, s2);
    return 0;
}