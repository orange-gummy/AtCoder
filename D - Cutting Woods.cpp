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
#define endl '\n'
#define int long long

signed main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int L,Q;
	cin >> L >> Q;
	int c,x;
	vector<int> A(L-1,1);
	int ans;
	rep(i,Q){
		cin >> c >> x;
		if(c == 1){
			A[x-1] = 0;
		}
		if(c == 2){
			ans = 0;
			rep(i,L-1){
				if(A[x-1+i] == 1) ++ans;
				else break;
			}
			rep(i,L-1){
				if(A[x-1-i] == 1) ++ans;
				else break;
			}
			cout << ans << endl;
		}
	}
	return 0;
}