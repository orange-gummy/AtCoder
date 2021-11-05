/**
*    author:  orangegummy
*    created: 01.11.2021 16:57:37
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
  int n,m;cin>>n>>m;
  vector<int> tar(m);
  vector<int> ans(n,0);
  rep(i,m){
    int a;cin>>a;--a;
    tar[i]=a;
  }
  vector<vector<int>> A(m,vector<int>(n));
  rep(i,m)rep(j,n){
    int a;cin>>a;--a;
    A[i][j]=a;
  }
  rep(i,m){
    rep(j,n){
      if(tar[i]==A[i][j])++ans[j];
      else ++ans[tar[i]];
    }
  }
  coutall(ans);
  //code end
  return 0;
}