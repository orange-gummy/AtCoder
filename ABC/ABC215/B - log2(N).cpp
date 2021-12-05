#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main(){
	unsigned long long n;
	cin >> n;
	long long ans;
	ans = floor(log2((long double)n));
	cout << ans << endl;
	return 0;
}