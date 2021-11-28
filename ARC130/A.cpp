/**
*    author:  orangegummy
*    created: 28.11.2021 20:57:56
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
ll solve(ll a){
  if(a==1)return 0;
  ll re=(a*(a-1))/2;
  return re;
}
int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  ll n;cin>>n;string s;cin>>s;
  ll ans=0;
  char a;
  ll memo=1;
  rep(i,n){
    if(i==0)a=s[i];
    else{
      if(s[i]==a){
        ++memo;
      }
      else{
        ans+=solve(memo);
        memo=1;
      }
    }
    a=s[i];
  }
  ans+=solve(memo);
  cout<<ans<<endl;
  //code end
  return 0;
}