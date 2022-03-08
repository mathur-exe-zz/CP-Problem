#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string str;
	int count = 0;
	while (true) {
		cin >> str;
		if (str[0] == '-') break;
		stack <char> st;
		long long int closing = 0;
		long long int ans = 0;
		for (int i = 0; i < str.size() - 1; i++) {
			if (str[i] == '{') st.push('{');
			else {
				if (not st.empty()) st.pop();
				else closing++;
			}
		}
		if (st.size() > 0) {
			if (st.size() % 2 != 0) {
				closing--;
				ans += 2;
			}
			ans += st.size() / 2;
		}
		if (closing > 0) ans += closing / 2;
		cout << ++count << ". " << ans << endl;
	}
	return 0;
}