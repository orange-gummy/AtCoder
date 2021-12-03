/**
*    author:  orangegummy
*    created: 02.12.2021 00:21:07
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
template <typename T> inline bool chmin(T &a, const T &b) {
  bool compare = a > b;
  if (a > b) a = b;
  return compare;
}
template <typename T> inline bool chmax(T &a, const T &b) {
  bool compare = a < b;
  if (a < b) a = b;
  return compare;
}

int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(false);
  // code start
  int n;
  cin >> n;
  vector<vector<int>> A(n, vector<int>(n));
  vector<vector<int>> B(n, vector<int>(n));
  rep(i, n) rep(j, n) {
    char a;
    cin >> a;
    if (a == 'R')
      A[i][j] = 1;
    else if (a == 'G')
      A[i][j] = 2;
    else
      A[i][j] = 3;
  }
  rep(i, n) rep(j, n) {
    char a;
    cin >> a;
    if (a == 'R')
      B[i][j] = 1;
    else if (a == 'G')
      B[i][j] = 2;
    else
      B[i][j] = 3;
  }
  int ans = INT_MAX;
  rep(i, 4) {
    int sum = 0;
    if(i!=0)++sum;
    if(i==2)++sum;
    rep(i,n)rep(j,n)if(A[i][j]!=B[i][j])++sum;
    vvi C=A;
    rep(i,n)rep(j,n)C[i][j]=A[j][n-i-1];
    A=C;
    chmin(ans,sum);
  }
  cout<<ans<<endl;
  // code end
  return 0;
}