/**
*    author:  orangegummy
*    created: 11.11.2021 21:48:17
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, a, b) for(int i = (a);i < (b);++i)
#define REPS(i, a, b) for(int i = (b)-1;i >= (a);--i)
#define rep(i, n) REP(i, 0, n)
#define reps(i, n) REPS(i, 0, n)
#define fora(i,I) for(const auto& i:I)
#define max3(x, y, z) max(x, max(y, z))
#define min3(x, y, z) min(x, min(y, z))
#define all(x) x.begin(),x.end() 
#define size(x) ll(x.size())
#define F first
#define S second
#define coutall(x) for(auto i=x.begin();i!=--x.end();i++)cout<<*i<<endl;cout<<*--x.end()<<endl;
#define coutall2(x) rep(j,size(x)){for(auto i=x[j].begin();i!=--x[j].end();i++)cout<<*i<<" ";cout<<*--x[j].end()<<endl;};
#define vecmax(x) max_element(all(x))
#define vecmin(x) min_element(all(x))
#define yn if(ans){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;};
#define endl '\n'

int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  int n,m;cin>>n>>m;
  vector<vector<int>> to(n);
  rep(i,m){
    int a,b;cin>>a>>b;--a;--b;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  set<int> A;
  vector<int> B;
  for(int i:to[0]){
    A.insert(i);B.push_back(i);
  }
  for(int i:B){
    for(int j:to[i]){
      A.insert(j);
    }
  }
  cout<<size(A)-1<<endl;
  //code end
  return 0;
}