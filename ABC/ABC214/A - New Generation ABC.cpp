#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	if (n <= 125) cout << 4;
	else if(n <= 211) cout << 6;
	else if(n <= 214) cout << 8;
	return 0;
}