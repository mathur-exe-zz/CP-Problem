#include<bits/stdc++.h>
#include <queue>
#include <unordered_map>
using namespace std;

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char ch;
	queue <char> qu;
	unordered_map <char, int> mp;
	while (true) {
		cout << "Enter the next character" << endl;
		if (ch == '0') break;
		cin >> ch;
		if (mp.count(ch) == 0) { //Checking if the map is empty
			mp[ch] = 1; //Storing the element w/ it's counter as 1
			qu.push(ch); //Pushing the map entry to queue
		}
		else mp[ch] += 1; //If the element is already present in the map, increment it's counter by 1
		while (not qu.empty() and mp[qu.front()] != 1) qu.pop();
		// When the counter val of element >1, pop it from the queue
		if (not qu.empty()) cout << qu.front() << endl;
		// In the end, only element left in the queue is the one w/ odd counter
		else cout << "-1 \n";
		// If all the elements are in pairs return -1
	}

}
