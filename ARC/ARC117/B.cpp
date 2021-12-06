#include<bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
#define REP(i, a, b) for(int i = (a);i < (b);++i)
#define REPS(i, a, b) for(int i = (b)-1;i >= (a);--i)
#define rep(i, n) REP(i, 0, n)
#define reps(i, n) REPS(i, 0, n)
#define fora(i,I) for(const auto& i:I)
#define max3(x, y, z) max(x, max(y, z))
#define min3(x, y, z) min(x, min(y, z))
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
#define int long long int

signed main(){
	cin.tie(0);cout.tie(0);
	ios_base::sync_with_stdio(false);
	//code start
	int N,M;cin >> N >> M;
	int A[M];
	int B[M];
	int C[M];
	vector<string> A;
	rep(i,3*N){
		rep(a,M){
			A[a]=0;
			B[a]=0;
			C[a]=0;
		}
		string S="";
		rep(j,M){
			if(A[j]<N){
				++A[j];
				S += '0';
			}
			else if(B[j]<M){
				++B[j];
				S += '1';
			}
			else if(C[j]<M){
				++C[j];
				S += '2';
			}
		}
		else --i;
		SS = S;
	}
	//code end
	return 0;
}