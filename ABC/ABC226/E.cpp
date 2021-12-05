/**
*    author:  orangegummy
*    created: 07.11.2021 21:51:47
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
#define vecmax(x) max_element(all(x));
#define vecmin(x) min_element(all(x));
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
  int ans=0;
  int aa=0;
  rep(i,n){
    queue<ll> que;
    vector<ll> dist(n, -1);
    que.push(i);
    while(!que.empty()){
      ll v=que.front();
      que.pop();
      for(ll nv:to[v]){
        if(nv==i){
          ++ans;dist[nv]=dist[n]+1;aa+=dist[nv];break;
        }
        if(dist[nv]!=-1)continue;
        dist[nv]=dist[n]+1;
        que.push(nv);
      }
    }
  }
  cout<<ans<<endl;
  rep(i,n)cout<<aa<<endl;
  //code end
  return 0;
}