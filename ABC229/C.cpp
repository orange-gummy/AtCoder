/**
*    author:  orangegummy
*    created: 27.11.2021 20:54:35
**/
#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
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
  ll n,w;cin>>n>>w;
  vector<pair<ll,ll>> A(n);
  rep(i,n)cin>>A[i].F>>A[i].S;
  sort(all(A), [](pii a, pii b){
   return a.F>b.F || (a.F==b.F && a.S<b.S);
  });
  ll ans=0;
  ll doko=0;
  while(true){
    if(w-A[doko].S<0)break;
    if(doko>n){cout<<ans<<endl;return 0;}
    ans+=A[doko].F*A[doko].S;
    w-=A[doko].S;
    ++doko;
  }
  ans+=A[doko].F*w;
  cout<<ans<<endl;
  //code end
  return 0;
}