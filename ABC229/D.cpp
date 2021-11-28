/**
*    author:  orangegummy
*    created: 27.11.2021 20:54:38
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

int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  string s;cin>>s;int k;cin>>k;
  vector<ll> A;
  vector<ll> B;
  A.push_back(0);
  B.push_back(0);
  bool d=false;
  rep(i,size(s)){
    
    if(d){
      int a=0;
      while(s[i]=='X'){
        ++a;++i;
      }
      A.push_back(a);
      d=false;
    }
        
    if(!d){
      int a=0;
      while(s[i]=='X'){
        ++a;++i;
      }
      B.push_back(a);
      d=true;
    }
  }
  ll ans=0;
  ll en=0;
  rep(i,size(B)){
    while(B[en+1+1]-B[i+1]<=k){++en;if(size(B)-1==en)break;}
    if(size(B)-1==en)break;
    ans=max(A[en+1+1]-A[i+1],ans);
  }
  cout<<ans<<endl;
  //code end
  return 0;
}