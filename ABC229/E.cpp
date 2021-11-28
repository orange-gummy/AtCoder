/**
 *    author:  orangegummy
 *    created: 27.11.2021 21:50:24
 **/
#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
#define REP(i, a, b) for (int i = (a); i < (b); ++i)
#define REPS(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define rep(i, n) REP(i, 0, n)
#define reps(i, n) REPS(i, 0, n)
#define fora(i, I) for (const auto &i : I)
#define max3(x, y, z) max(x, max(y, z))
#define min3(x, y, z) min(x, min(y, z))
#define all(x) x.begin(), x.end()
#define size(x) ll(x.size())
#define F first
#define S second
#define coutall(x)                              \
  for (auto i = x.begin(); i != --x.end(); i++) \
    cout << *i << endl;                         \
  cout << *--x.end() << endl;
#define coutall2(x)                                     \
  rep(j, size(x))                                       \
  {                                                     \
    for (auto i = x[j].begin(); i != --x[j].end(); i++) \
      cout << *i << " ";                                \
    cout << *--x[j].end() << endl;                      \
  };
#define vecmax(x) max_element(all(x))
#define vecmin(x) min_element(all(x))
#define yn                 \
  if (ans)                 \
  {                        \
    cout << "Yes" << endl; \
  }                        \
  else                     \
  {                        \
    cout << "No" << endl;  \
  };
#define endl '\n'
struct UnionFind
{
  vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

  UnionFind(int N) : par(N)
  { //最初は全てが根であるとして初期化
    for (int i = 0; i < N; i++)
      par[i] = i;
  }

  int root(int x)
  { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
    if (par[x] == x)
      return x;
    return par[x] = root(par[x]);
  }

  void unite(int x, int y)
  {                   // xとyの木を併合
    int rx = root(x); // xの根をrx
    int ry = root(y); // yの根をry
    if (rx == ry)
      return;     // xとyの根が同じ(=同じ木にある)時はそのまま
    par[rx] = ry; // xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
  }

  bool same(int x, int y)
  { // 2つのデータx, yが属する木が同じならtrueを返す
    int rx = root(x);
    int ry = root(y);
    return rx == ry;
  }
};
int main()
{
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(false);
  // code start
  int n, m;
  cin >> n >> m;
  UnionFind tree(n + 1);
  for (int i = 0; i < m; i++)
  {
    int x, y;
    cin >> x >> y;
    tree.unite(x, y);
  }
  int count = 0;
  vector<int> ans(n);
  vector<int> ne;
  ne.push_back(n - 1);
  for (int i = n; i < 0; --i)
  {
    if (i == n)
      ans[i] = 0;
    else
    {
      for (int j : ne)
      {
        if (!tree.same(i, j))
        {
          ++count;
          ne.push_back(j);
        }
      }
      ans[i] = count;
    }
  }
  rep(i, n) cout << ans[i] << endl;
  // code end
  return 0;
}