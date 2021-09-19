#include <iostream>
using namespace std;

int main(){
	int n,m;
	char s;
	cin >> n >> s >> m;
	cout << n;
	if(m<3) cout << "-" << endl;
	if(m>2 && m<7) cout << endl;
	if(m>6) cout << "+" <<endl;
	return 0;
}