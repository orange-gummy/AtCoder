#include <iostream>
using namespace std;

int main(){
	long long n;
	cin >> n;
	long long m = n;
	string ans = "";
	while(m != 0){
	if(m%2 == 1){
		ans = "A" + ans;
		m -= 1;
	}
	else{
		ans = "B" + ans;
		m = m/2;
	}
	}
	cout << ans << endl;
	return 0;
}