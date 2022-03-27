/**
*    author:  orangegummy
*    created: 05.03.2022 20:56:52
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
#define coutall(x) for(auto i=x.begin();i!=--x.end();i++)cout<<*i<<endl;cout<<*--x.end()<<endl;
#define coutall2(x) rep(j,size(x)){for(auto i=x[j].begin();i!=--x[j].end();i++)cout<<*i<<" ";cout<<*--x[j].end()<<endl;};
#define vecmax(x) max_element(all(x))
#define vecmin(x) min_element(all(x))
#define YesNo if(ans){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;};
#define yesno if(ans){cout<<"yes"<<endl;}else{cout<<"no"<<endl;};
#define YESNO if(ans){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;};
#define endl '\n'
template <typename T> inline bool chmax(T& a, const T& b) {bool compare = a < b; if (a < b) a = b; return compare;}
template <typename T> inline bool chmin(T& a, const T& b) {bool compare = a > b; if (a > b) a = b; return compare;}
using mint = modint;
int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  modint::set_mod(998244353);
  ll n;cin>>n;
  vector<vector<mint>> A(n+1,vector<mint>(10,0));
  rep(i,n+1){
    if(i==0)continue;
    if(i==1)rep(k,9)A[1][k+1]=1;
    else{
      rep(j,9){
        if(j+1==1)A[i][j+1]=A[i-1][j+1]+A[i-1][j+2];
        else if(j+1==9)A[i][j+1]=A[i-1][j+1]+A[i-1][j];
        else A[i][j+1]=A[i-1][j]+A[i-1][j+1]+A[i-1][j+2];
      }
    }
  }
  mint ans;
  rep(i,9)ans+=A[n][i+1];
  cout<<ans.val()<<endl;
  //code end
  return 0;
}