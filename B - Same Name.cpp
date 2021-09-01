#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std; // std::map~, std::cout~とかを省略する為

int main() {
    int ans = 0;
    int n; cin >> n; // 下for文のループ回数
	vector<string> A(n);
	vector<string> B(n);
	for (int i = 0;i<n;++i){
		cin >> A[i] >> B[i];
	}
	for(int i = 0;i<n;++i){
		for(int j=0;j<n;++j){
			if(A[i] == A[j] && B[i] == B[j]){
				++ans;
			}
		}
	}
	if(ans > n) cout << "Yes" << endl;
	else cout << "No" <<endl;
	return 0;
}