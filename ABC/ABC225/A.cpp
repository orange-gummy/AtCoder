/**
*    author:  orangegummy
*    created: 30.10.2021 20:21:19
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
  string s;cin>>s;
  int a=0;
  if(s[0]==s[1])++a;
  if(s[2]==s[1])++a;
  if(s[0]==s[2])++a;
  if(a==0)cout<<6<<endl;
  if(a==1)cout<<3<<endl;
  if(a==2)cout<<1<<endl;
  if(a==3)cout<<1<<endl;
  //code end
  return 0;
}