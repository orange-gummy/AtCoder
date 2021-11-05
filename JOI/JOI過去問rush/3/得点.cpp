/**
*    author:  orangegummy
*    created: 06.11.2021 00:30:05
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
#define vecmax(x) max_element(x.begin(), x.end());
#define vecmin(x) min_element(x.begin(), x.end());
#define yn if(ans){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;};
#define endl '\n'

int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  int n;cin>>n;
  vector<pair<int,int>> A(n);
  rep(i,n)cin>>A[i].F;
  int hito=0;
  int hitoto=0;
  rep(i,101){
    hitoto=hito;
    rep(j,n){
      if(A[j].F==100-i){
        ++hito;
        A[j].S=hitoto+1;
      }
    }
  }
  rep(i,n){
    cout<<A[i].S<<endl;
  }
  //code end
  return 0;
}