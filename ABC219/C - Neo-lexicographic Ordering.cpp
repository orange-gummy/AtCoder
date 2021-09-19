#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
#define endl '\n'

signed main(){
	cin.tie(0);cout.tie(0);
	ios_base::sync_with_stdio(false);
	//code start
	map<char,int> A;
	char C;
	rep(i,26){
		cin >> C;
		A[C]=i+1;
	}
	int N; cin >> N;
	vector<pair<ll,string>> B(N);
	rep(i,N){
		cin >> B[i].S;
		B[i].F = 0;
		rep(j,(int)B[i].S.size()){
			B[i].F += A[B[i].S[j]]*(10-j*27);
		}
	}
	sort(ALL(B));
	rep(i,N){
		cout << B[i].S << endl;
	}
	//code end
	return 0;
}