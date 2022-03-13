#include <stdio.h>
#include<iostream>
#include<math.h>
#include <map>
#include <vector>
#include <stack>
#include<unordered_map>
using namespace std;

/* 
   496. Next Greater Element I - https://leetcode.com/problems/next-greater-element-i/ 
*/

// cout <<
// cin >>

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector <int> nums1, nums2;
    int n1, n2;
    cin >> n1 >> n2;
    for(int i=0; i<n1; i++) cin >> nums1[i];
    cout << "\n";
    for (int i=0; i<n2; i++) cin >> nums2[i];

    stack <int> s;
    unordered_map <int, int> nge;
    vector <int> t;
        
    for(int i=0; i<n2; i++) {
        if(s.empty()) s.push(nums2[i]);
        else {
            int top = s.top();
            while(!s.empty() && s.top() < nums2[i]) {
                nge[s.top()] = nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }
    }
    while(!s.empty()){
        nge[s.top()] = -1;
        s.pop();
    }
    
    for(auto i : nums1)
        t.push_back(nge[i]);
    
    for(auto j : t)
        cout << j << " ";

    return 0;
}