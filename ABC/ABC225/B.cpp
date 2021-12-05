/**
*    author:  orangegummy
*    created: 30.10.2021 21:04:47
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
  int n;cin>>n;
  int kyo=0;
  int a,b;cin>>a>>b;
  int c,d;cin>>c>>d;
  if(a==c||a==d)kyo=a;
  if(b==c||b==d)kyo=b;
  bool ans=true;
  if(kyo==0)ans=false;
  rep(i,n-3){
    int a,b;cin>>a>>b;
    if(a!=kyo&&b!=kyo)ans=false;
  }
  if(ans)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  //code end
  return 0;
}