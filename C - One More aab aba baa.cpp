#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void solve(string s) {
	int ans;
	cin >> ans;
	int time =0;
	do {
	++time;
	if (time == ans){
	cout << s << endl;
	}
	} while (next_permutation(s.begin(), s.end()));
}

int main() {
	string argc;
	cin >> argc;
	sort(argc.begin(), argc.end());
	solve(argc);
	return 0;
}