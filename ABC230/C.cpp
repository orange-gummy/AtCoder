/**
 *    author:  orangegummy
 *    created: 03.12.2021 21:19:45
 **/
#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
using ull = unsigned long long;
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using vs = vector<string>;
using vpii = vector<pii>;
using vpll = vector<pll>;
#define pb push_back
#define mp make_pair
#define REP(i, a, b) for (int i = (a); i < (b); ++i)
#define REPS(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define rep(i, n) REP(i, 0, n)
#define reps(i, n) REPS(i, 0, n)
#define fora(i, I) for (const auto &i : I)
#define max3(x, y, z) max(x, max(y, z))
#define min3(x, y, z) min(x, min(y, z))
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define size(x) ll(x.size())
#define vecsort(x) sort(all(x))
#define vecrsort(x) sort(rall(x))
#define F first
#define S second
#define coutall(x)                                                             \
  for (auto i = x.begin(); i != --x.end(); i++)                                \
    cout << *i << endl;                                                        \
  cout << *--x.end() << endl;
#define coutall2(x)                                                            \
  rep(j, size(x)) {                                                            \
    for (auto i = x[j].begin(); i != --x[j].end(); i++)                        \
      cout << *i << " ";                                                       \
    cout << *--x[j].end() << endl;                                             \
  };
#define vecmax(x) max_element(all(x))
#define vecmin(x) min_element(all(x))
#define YesNo                                                                  \
  if (ans) {                                                                   \
    cout << "Yes" << endl;                                                     \
  } else {                                                                     \
    cout << "No" << endl;                                                      \
  };
#define yesno                                                                  \
  if (ans) {                                                                   \
    cout << "yes" << endl;                                                     \
  } else {                                                                     \
    cout << "no" << endl;                                                      \
  };
#define YESNO                                                                  \
  if (ans) {                                                                   \
    cout << "YES" << endl;                                                     \
  } else {                                                                     \
    cout << "NO" << endl;                                                      \
  };
#define endl '\n'
template <typename T> inline bool chmax(T &a, const T &b) {
  bool compare = a < b;
  if (a < b) a = b;
  return compare;
}
template <typename T> inline bool chmin(T &a, const T &b) {
  bool compare = a > b;
  if (a > b) a = b;
  return compare;
}

int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(false);
  // code start
  ll n, a, b;
  cin >> n >> a >> b;
  ll p, q, r, s;
  cin >> p >> q >> r >> s;
  ll ki = a - b;
  for (ll i = p; i <= q; ++i) {
    for (ll j = r; j <= s; ++j) {
      if (i - j == ki)
        cout << '#';
      else if (a-i==j-b)
        cout << '#';
      else
        cout << '.';
    }
    cout<<endl;
  }
  return 0;
}