/**
*    author:  orangegummy
*    created: 12.11.2021 21:22:08
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
int solve(string s,string t){
  REP(i,0,size(t)){
    REP(j,1,size(t)){
      if((i+1)+j*(size(s)-1)>size(t))continue;
      string sub="";
      rep(k,size(s)){
        sub+=t[i+j*k];
      }
      if(sub==s)return 1;
    }
  }
  return 0;
}
int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  int n;cin>>n;
  string s;cin>>s;
  int ans=0;
  rep(in,n){
    string t;cin>>t;
    ans+=solve(s,t);
  }
  cout<<ans<<endl;
  //code end
  return 0;
}