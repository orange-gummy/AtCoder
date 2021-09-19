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
	int N;cin >> N;
	vector<vector<bool>> A(N,vector<bool>(N));
	vector<vector<bool>> B(N,vector<bool>(N));
	string S;
	bool ok = false;
	rep(i,N){
		rep(j,N){
			cin >> S;
			if(S=="#")A[i][j] = true;
			else A[i][j] = false;
		}
	}
	rep(i,N){
		rep(j,N){
			cin >> S;
			if(S=="#")B[i][j] = true;
			else B[i][j] = false;
		}
	}
	rep(i,N){
		rep(j,N){
			rep(n,N){
				rep(m,N){
					
				}
			}
		}
	}
	//code end
	return 0;
}