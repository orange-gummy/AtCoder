/**
*    author:  orangegummy
*    created: 28.10.2021 23:35:26
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
#define endl '\n'

int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  vector<bool> A(30,0);
  rep(i,30){
    int a;cin>>a;
    A[a-1]=1;
  }
  rep(i,30){
    if(A[i]==0)cout<<i+1<<endl;
  }
  //code end
  return 0;
}