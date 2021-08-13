#include <iostream>
using namespace std;

int main(){
	int a,b,c,x;
	cin >> a >> b >> c >> x;
	int money;
	int ans = 0;
	for (int i = 0; i <= a; ++i){
		money = 500*i;
		for(int j = 0; j <= b; ++j){
			money = 500*i + 100*j;
			for(int k = 0; k <= c; ++k){
				money = 500*i + 100*j + 50*k;
				if(money == x) ++ans;
			}
		}
	}
	cout << ans << endl;
	return 0;
}