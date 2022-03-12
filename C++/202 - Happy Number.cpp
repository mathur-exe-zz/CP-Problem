#include <stdio.h>
#include<iostream>
#include<math.h>
#include <map>
using namespace std;

/* 
    202. Happy Number - https://leetcode.com/problems/happy-number/
*/

// cout <<
// cin >>

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    cout << n << " int \n";

    string st = to_string(n);
    cout << st << " string \n";
    
    int l = st.length(), sum=0;
    cout << l << " length \n";

    if(l == 1 && n!=1) cout << "0 - First if"; 
        // return 0;

    cout << "---------------- \n";
    while (l > 1) {
        sum=0;
        for(int i =0; i< l; i++) {
            int temp = int(st[i]) - '0';
            cout << temp << " temp " << i << " index ";
            sum += temp*temp;
            cout << sum << " sum \n";
        }
        cout << "\n\n";
        st = to_string(sum);
        cout << st << " New Sum \n";
        l = st.length();
        cout << l << " New Length \n";
    }
    
    if(sum==1) cout << "1"; 
        // return 1;
    // return false;
    cout << "0 - Final";

    return 0;
}