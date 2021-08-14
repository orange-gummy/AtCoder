#include <iostream>
using namespace std;

int main(){
	int n,a,b;
	cin >> n >> a >> b;
	int wa;
	int ans = 0;
	int ama;
	for (int i = 1; i <= n; ++i){
		ama = i;
		wa = 0;
		while (ama != 0){
			wa += ama % 10;
			ama = ama/10;
		}
		if (wa >= a && wa <= b) ans += i;
	}
	cout << ans << endl;
	return 0;
}