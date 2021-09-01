#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n,m;cin>>n>>m;
	vector<vector<int>> A(m);
	int boal;
	vector<int> boall(m,0);
	vector<int> a(m,1);
	for(int i = 0;i<m;++i){
		cin >> boal;
		boall[i] = boal;
		A[i] = vector<int>(boal);
		for(int j = 0;j<boal;++j){
			cin >> A[i][j];
		}
	}
	bool ok= false;
	while(true){
		for(int i = 0;i<m;++i){
			for(int j = 0;j<boal;++j){
				if(A[i][a[i]] == A[j][a[j]]){
					a[i] = a[i] + 1;
					a[j] = a[j] + 1;
				}
			}
		}
		ok = false;
		for(int i = 0;i<m;++i){
			if(a[i] != boall[i]){
				ok = true;
			}
		}
		if ( ok == false) cout << "Yes"<< endl;
		if ( ok == false) break;
		ok = false;
		for(int i = 0;i<m;++i){
			if(a[i] != boall[i]){
				ok = true;
			}
		}
		if(ok = false){
			cout << "No" <<endl;
			break;
		}
	}
	return 0;
}