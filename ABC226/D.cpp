/**
*    author:  orangegummy
*    created: 07.11.2021 21:32:29
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
  int n;cin>>n;
  vector<pair<ll,ll>> A(n);
  rep(i,n){
    cin>>A[i].F>>A[i].S;
  }
  set<pair<ll,ll>> B;
  rep(i,n)rep(j,n){
    if(i!=j){
      ll a=A[i].F-A[j].F;
      ll b=A[i].S-A[j].S;
      ll c=gcd(a,b);
      a=a/c;
      b=b/c;
      B.insert(make_pair(a,b));
      B.insert(make_pair(a*-1,b*-1));
    }
  }
  cout<<B.size()<<endl;
  //code end
  return 0;
}