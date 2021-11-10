/**
*    author:  orangegummy
*    created: 10.11.2021 21:11:33
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
  int a,b;cin>>a>>b;
  vector<vector<bool>> A(a,vector<bool>(b,false));
  int n;cin>>n;
  rep(i,n){
    int a,b;cin>>a>>b;--a;--b;
    A[a][b]=true;
  }
  queue<pair<int,int>> que;
  que.push(make_pair(0,0));
  int ans=0;
  while(!que.empty()){
    pair<int,int> p=que.front();
    que.pop();
    if(p.F+1==a-1&&p.S==b-1)++ans;
    else if(p.F!=a-1&&!A[p.F+1][p.S])que.push(make_pair(p.F+1,p.S));
    if(p.F==a-1&&p.S+1==b-1)++ans;
    else if(p.S!=b-1&&!A[p.F][p.S+1])que.push(make_pair(p.F,p.S+1));
  }
  cout<<ans<<endl;
  //code end
  return 0;
}