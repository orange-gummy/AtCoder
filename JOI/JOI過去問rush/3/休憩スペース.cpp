/**
*    author:  orangegummy
*    created: 07.11.2021 17:31:48
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
  int n,m,d;cin>>n>>m>>d;
  vector<vector<bool>> A(n,vector<bool>(m));
  rep(i,n)rep(j,m){
    char a;cin>>a;
    if(a=='.')A[i][j]=false;
    else A[i][j]=true;
  }
  int ans=0;
  rep(i,n)rep(j,m){
    if(A[i][j]==false){
      if(i-d+1>=0){
        bool ok=true;
        rep(k,d)if(A[i-k][j]==true)ok=false;
        if(ok)++ans;
      }
      if(j-d+1>=0){
        bool ok=true;
        rep(k,d)if(A[i][j-k]==true)ok=false;
        if(ok)++ans;
      }
      if(i+d<=n){
        bool ok=true;
        rep(k,d)if(A[i+k][j]==true)ok=false;
        if(ok)++ans;
      }
      if(j+d<=m){
        bool ok=true;
        rep(k,d)if(A[i][j+k]==true)ok=false;
        if(ok)++ans;
      }
    }
  }
  cout<<ans/2<<endl;
  //code end
  return 0;
}