/**
*    author:  orangegummy
*    created: 25.12.2021 22:08:38
**/
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ull = unsigned long long;
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using vs = vector<string>;
using vpii = vector<pii>;
using vpll = vector<pll>;
#define pb push_back
#define mp make_pair
#define REP(i, a, b) for(int i = (a);i < (b);++i)
#define REPS(i, a, b) for(int i = (b)-1;i >= (a);--i)
#define rep(i, n) REP(i, 0, n)
#define reps(i, n) REPS(i, 0, n)
#define fora(i,I) for(const auto& i:I)
#define max3(x, y, z) max(x, max(y, z))
#define min3(x, y, z) min(x, min(y, z))
#define all(x) x.begin(),x.end() 
#define rall(x) x.rbegin(),x.rend() 
#define size(x) ll(x.size())
#define vecsort(x) sort(all(x))
#define vecrsort(x) sort(rall(x))
#define F first
#define S second
#define coutall(x) for(auto i=x.begin();i!=--x.end();i++)cout<<*i;cout<<*--x.end()<<endl;
#define coutall2(x) rep(j,size(x)){for(auto i=x[j].begin();i!=--x[j].end();i++)cout<<*i<<" ";cout<<*--x[j].end()<<endl;};
#define vecmax(x) max_element(all(x))
#define vecmin(x) min_element(all(x))
#define YesNo if(ans){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;};
#define yesno if(ans){cout<<"yes"<<endl;}else{cout<<"no"<<endl;};
#define YESNO if(ans){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;};
#define endl '\n'
template <typename T> inline bool chmax(T& a, const T& b) {bool compare = a < b; if (a < b) a = b; return compare;}
template <typename T> inline bool chmin(T& a, const T& b) {bool compare = a > b; if (a > b) a = b; return compare;}
int ctoi(char c) {
	switch (c) {
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		default: return 0;
	}
}
int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  string s;cin>>s;
  vector<int> A(size(s)+1,0);
  rep(i,size(s)){
    REP(j,i,size(s)){
      A[j+1]+=ctoi(s[j-i]);
    }
  }
  bool ok=true;
  while(ok){
    ok =false;
    rep(i,size(A)){
            if(A[i]>999){
        ok=true;
        A[i-1]+=A[i]/1000;
        A[i]=A[i]%1000;
      }
            if(A[i]>99){
        ok=true;
        A[i-1]+=A[i]/100;
        A[i]=A[i]%100;
      }
      if(A[i]>9){
        ok=true;
        A[i-1]+=A[i]/10;
        A[i]=A[i]%10;
      }
    }
  }
  if(A[0]!=0){coutall(A);}
  else{
    for(auto i=A.begin()+1;i!=--A.end();i++)cout<<*i;cout<<*--A.end()<<endl;
  }
  //code end
  return 0;
}