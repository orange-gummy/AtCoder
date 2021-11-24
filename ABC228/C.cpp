/**
*    author:  orangegummy
*    created: 20.11.2021 20:59:56
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
  int n,k;cin>>n>>k;
  vector<pair<int,int>> A(n);
  rep(i,n){
    int a,b,c;
    cin>>a>>b>>c;
    A[i].F=(a+b+c)*-1;
    A[i].S=i;
  }
  sort(all(A));
  int sakai=k;
  while(true){
    if(A[sakai].F*-1+300>=A[k-1].F*-1)++sakai;
    else break;
  }
  vector<int> ans(n,false);
  rep(i,sakai)ans[A[i].S]=true;
  rep(i,n){
    if(ans[i])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  //code end
  return 0;
}