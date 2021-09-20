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
	int n;cin >> n;
	int a[2000005],b[2000005],c[2000005];
	for(int i=1;i<=n;++i){
		cin >> a[i];
	}
	for(int i=1;i<=n;++i){
		if (a[i]==0) b[i] = b[i-1]+1;
		else b[i] = b[i-1];
	}
	for(int i=n;i>=0;i--){
		if(a[i]==1) c[i] = c[i+1]+1;
		else c[i] = c[i+1];
	}
	int ans = 10000000000;
	for(int i=0;i<=n;++i) ans = min(ans,b[i]+c[i+1]);
	cout << ans << endl;
	//code end
	return 0;
}