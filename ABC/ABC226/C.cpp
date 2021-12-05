/**
*    author:  orangegummy
*    created: 07.11.2021 21:10:58
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
  ll n;cin>>n;
  vector<pair<vector<ll>,ll>> A(n);
  rep(i,n){
    ll t;cin>>t;
    ll k;cin>>k;
    A[i].S=t;
    rep(j,k){
      ll a;cin>>a;--a;
      A[i].F.push_back(a);
    }
  }
  ll ans=0;
  queue<ll> que;
  vector<ll> dist(n, -1);
  que.push(n-1);
  while(!que.empty()){
    ll v=que.front();
    que.pop();
    ans+=A[v].S;
    for(ll nv:A[v].F){
      if(dist[nv]!=-1)continue;
      dist[nv]=1;
      que.push(nv);
    }
  }
  cout<<ans<<endl;
  //code end
  return 0;
}