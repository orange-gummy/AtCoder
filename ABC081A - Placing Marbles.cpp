#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin >> s;
	int answer = 0;
	if(s[0] == '1') ++answer;
	if(s[1] == '1') ++answer;
	if(s[2] == '1') ++answer;
	cout << answer << endl;
	return 0;
}