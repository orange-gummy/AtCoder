#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) cin >> a[i];

	int ans = 0;

	while (true){
		bool odd = false;
		for (int i = 0; i < n; ++i){
			if (a[i] % 2 == 1){
				odd = true;
			}
		}
		if (odd) break;
		for(int i = 0; i < n; ++i){
			a[i] /= 2;
		}
		++ans;
	}
	cout << ans << endl;
	return 0;
}