/**
*    author:  orangegummy
*    created: 30.10.2021 21:11:10
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
#define coutall(x) for(auto i=x.begin();i!=--x.end();i++)cout<<*i<<' ';cout<<*--x.end()<<endl;
#define vecmax(x) max_element(x.begin(), x.end());
#define vecmin(x) min_element(x.begin(), x.end());
#define endl '\n'

int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  int n,m;cin>>n>>m;
  bool ans=true;
  vector<vector<int>> A(n,vector<int>(m));
  rep(i,n)rep(j,m)cin>>A[i][j];
  rep(i,n)rep(j,m){
    if(i!=0){
      if(A[i][j]-7!=A[i-1][j])ans=false;
    }
    if(j!=0){
      if(A[i][j]-1!=A[i][j-1])ans=false;
    }
  }
  rep(i,m-1)if(A[0][i]%7==0)ans=false;
  rep(i,m-1)if(A[0][i+1]%7==1)ans=false;
  if(ans)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  //code end
  return 0;
}