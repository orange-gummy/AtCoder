#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int s[n];
	int t[n];
	for(int i = 1; i <= n; ++i) cin >> s[i];
	for(int i = 1; i <= n; ++i) cin >> t[i];
	int have[n] = {};
	s[0] = s[n];
	t[0] = t[n];
	long time = 0;
	int al[n] = {0};
	int end =0;
	while (true){
		++time;
		for(int i = 1; i <= n; ++i) {
			if(have[i] == 1 && s[i] != 0) s[i] -= 1;
			if (s[i-1] == 0 ||t[i] == time){
				have[i] = 1;
				if (al[i] == 0) al[i] = time;
			}
		}
		if (end == 0) break;
	}
	for(int i = 1; i <= n; ++i){
		cout << al[i] << endl;
	}
	return 0;
}