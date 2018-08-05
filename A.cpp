#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	string s;
	set<string>se;
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> s;
		sort(s.begin(), s.end());
		s.erase(unique(s.begin(), s.end()), s.end());
		se.insert(s);
	}
	cout << se.size();
	return 0;
} 