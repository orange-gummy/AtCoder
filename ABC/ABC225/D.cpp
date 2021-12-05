/**
*    author:  orangegummy
*    created: 30.10.2021 21:37:21
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
  int n,q;cin>>n>>q;
  vector<pair<int,int>> A(n,pair<int,int>(-1,-1));
  rep(i,q){
    int que;cin>>que;
    if(que==1){
      int x,y;cin>>x>>y;--x;--y;
      A[x].S=y;A[y].F=x;
    }
    if(que==2){
      int x,y;cin>>x>>y;--x;--y;
      A[x].S=-1;
      A[y].F=-1;
    }
    if(que==3){
      int x;cin>>x;--x;
      while(A[x].F!=-1){
        x=A[x].F;
      }
      vector<int> ans;
      while(A[x].S!=-1){
        ans.push_back(x);
        x=A[x].S;
      }
      ans.push_back(x);
      cout<<size(ans);
      for(int i:ans){
        cout<<" "<<i+1;
      }
      cout<<endl;
    }
  }
  //code end
  return 0;
}