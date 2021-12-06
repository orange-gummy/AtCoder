/**
*    author:  orangegummy
*    created: 28.11.2021 20:58:10
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
#define coutall(x) for(auto i=x.begin();i!=--x.end();i++)cout<<*i<<" ";cout<<*--x.end()<<endl;
#define coutall2(x) rep(j,size(x)){for(auto i=x[j].begin();i!=--x[j].end();i++)cout<<*i<<" ";cout<<*--x[j].end()<<endl;};
#define vecmax(x) max_element(all(x))
#define vecmin(x) min_element(all(x))
#define yn if(ans){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;};
#define endl '\n'

int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  ll H,W,C,Q;cin>>H>>W>>C>>Q;
  vector<ll> ans(C,0);
  pair<ll,ll> num;num.F=0;num.S=0;
  vector<bool> tate(H,false);
  vector<bool> yoko(W,false);
  vector<vector<ll>> input(Q,vector<ll>(3));
  rep(iq,Q){
    cin>>input[iq][0]>>input[iq][1]>>input[iq][2];--input[iq][1];--input[iq][2];
  }
  for(ll i=Q-1;i>=0;--i){
    if(input[i][0]==1){
      if(tate[input[i][1]]==false){
        ++num.F;ans[input[i][2]]+=W-num.S;
      }
      tate[input[i][1]]=true;
    }
    else{
      if(yoko[input[i][1]]==false){
        ++num.S;ans[input[i][2]]+=H-num.F;
      }
      yoko[input[i][1]]=true;
    }
  }
  coutall(ans);
  //code end
  return 0;
}