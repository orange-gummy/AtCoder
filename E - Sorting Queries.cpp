//インクルードなど
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//イテレーション
#define REP(i, a, b) for(int i = (a);i < (b);++i)
#define REPS(i, a, b) for(int i = (b)-1;i >= (a);--i)
#define rep(i, n) REP(i, 0, n)
#define reps(i, n) REPS(i, 0, n)
#define fora(i,I) for(const auto& i:I)
//x:コンテナ
#define ALL(x) x.begin(),x.end() 
#define SIZE(x) ll(x.size())
//略記
#define F first
#define S second
//出力(空白区切りで昇順に)
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++)cout<<*i<<" ";cout<<*--x.end()<<endl;

//aをbで割る時の繰上げ,繰り下げ
ll myceil(ll a,ll b){return (a+(b-1))/b;}
ll myfloor(ll a,ll b){return a/b;}
#define int long long
#define endl '\n'

signed main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int q;cin >> q;
	int que;
	int tui;
	vector<int> A;
	int index=0;
	bool ok = false;
	rep(i,q){
		cin >> que;
		if(que==1){
			cin >> tui;
			A.push_back(tui);
		}
		else if(que==2){
			if(ok==true){
			std::vector<int>::iterator iter = std::min_element(A.begin(), A.end());
			int index = std::distance(A.begin(), iter);	
			}
			cout << A[index] << endl;
			A.erase(A.begin()+index);
		}
		else if(que==3){
			ok = true;
		}
	}
	return 0;
}