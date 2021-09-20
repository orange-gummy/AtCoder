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
#define int long long int
signed main(){
	//cin.tie(0);//cout.tie(0);
	//ios_base::sync_with_stdio(false);
	//code start
	int N,B;cin >> N >> B;
	vector<int> A(N);
	int migi=0,hidari=-1;
	rep(i,N){
		char c;cin >> c;
		if(c == '.'){
			A[i] = 0;
		}
		else{
			A[i] = 1;
			if(hidari==-1) hidari=i;
			migi = i;
		}
	}
	int ans=0;
	int left=0,right=0;
	rep(i,N){
		if(A[i]==1){
			ans += abs(B-1-i)*2;
			if(i<B-1) ++left;
			else ++right;
		}
	}
	if(left<right){
		ans -= migi-(B-1);
		ans += (right-left-1)*B*2;
	}
	else{
		ans -= B-1 -hidari;
		ans += (left-right)*(N-B+1)*2;
	}
	cout << ans << endl;
	//code end
	return 0;
}