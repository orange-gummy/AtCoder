/**
*    author:  orangegummy
*    created: 07.11.2021 00:33:19
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
  vector<vector<int>> A(n,vector<int>(m));
  rep(i,n)rep(j,m){
    char a;cin>>a;
    if(a=='W')A[i][j]=0;
    else if(a=='B')A[i][j]=1;
    else A[i][j]=2;
  }
  int ans=9999999;
  for(int i=1;i<n-1;++i){
    for(int j=i+1;j<n;++j){
      int num=0;
      int a=i;int b=j;
      rep(k,n){
        if(a>0){
          rep(l,m)if(A[k][l]!=0)++num;
          --a;--b;
        }
        else if(b>0){
          rep(l,m)if(A[k][l]!=1)++num;--b;
        }
        else{
          rep(l,m)if(A[k][l]!=2)++num;
        }
      }
      ans=min(ans,num);
    }
  }
  cout<<ans<<endl;
  //code end
  return 0;
}