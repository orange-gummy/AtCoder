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

#define endl '\n'

signed main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	string a,b,c;
	cin >> a >> b >> c;
	if("ABC"!= a && "ABC"!= b &&"ABC"!= c)cout<<"ABC";
	if("AGC"!= a && "AGC"!= b &&"AGC"!= c)cout<<"AGC";
	if("AHC"!= a && "AHC"!= b &&"AHC"!= c)cout<<"AHC";
	if("ARC"!= a && "ARC"!= b &&"ARC"!= c)cout<<"ARC";
	return 0;
}