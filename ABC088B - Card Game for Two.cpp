#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) cin >> a[i];

	sort(a, a + n, greater<int>());
	int alice = 0;
	int bob = 0;
	for (int i = 0; i < n; ++i){
		if (i % 2 == 1){
			bob += a[i];
		}else{
			alice += a[i];
		}
	}
	int ans;
	ans = alice - bob;
	cout << ans << endl;
	return 0;
}