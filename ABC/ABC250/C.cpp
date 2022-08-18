/**
*    author:  orangegummy
*    created: 08.05.2022 20:31:54
**/
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ull = unsigned long long;
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using vs = vector<string>;
using vpii = vector<pii>;
using vpll = vector<pll>;
#define pb push_back
#define mp make_pair
#define REP(i, a, b) for(int i = (a);i < (b);++i)
#define REPS(i, a, b) for(int i = (b)-1;i >= (a);--i)
#define rep(i, n) REP(i, 0, n)
#define reps(i, n) REPS(i, 0, n)
#define fora(i,I) for(const auto& i:I)
#define max3(x, y, z) max(x, max(y, z))
#define min3(x, y, z) min(x, min(y, z))
#define all(x) x.begin(),x.end() 
#define rall(x) x.rbegin(),x.rend() 
#define size(x) ll(x.size())
#define vecsort(x) sort(all(x))
#define vecrsort(x) sort(rall(x))
#define F first
#define S second
#define coutall(x) for(auto i=x.begin();i!=--x.end();i++)cout<<*i<<endl;cout<<*--x.end()<<endl;
#define coutall2(x) rep(j,size(x)){for(auto i=x[j].begin();i!=--x[j].end();i++)cout<<*i<<" ";cout<<*--x[j].end()<<endl;};
#define vecmax(x) max_element(all(x))
#define vecmin(x) min_element(all(x))
#define YesNo if(ans){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;};
#define yesno if(ans){cout<<"yes"<<endl;}else{cout<<"no"<<endl;};
#define YESNO if(ans){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;};
#define endl '\n'
template <typename T> inline bool chmax(T& a, const T& b) {bool compare = a < b; if (a < b) a = b; return compare;}
template <typename T> inline bool chmin(T& a, const T& b) {bool compare = a > b; if (a > b) a = b; return compare;}

int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  int n,q;cin>>n>>q;
  vpii A(n);
  int start=0;
  if(n==2){
    if(q%2==1)cout<<2<<' '<<1<<endl;
    else cout<<1<<' '<<2<<endl;
    return 0;
  }
  rep(i,n){
    if(i==0){A[0].F=-1;A[0].S=1;}
    else if(i==n-1){A[i].F=n-2;A[i].S=INT_MAX;}
    else{A[i].F=i-1;A[i].S=i+1;}
  }
  rep(i,q){
    int x;cin>>x;--x;
    if(A[x].S==INT_MAX){
      int a=A[A[x].F].F;
      int b=A[x].F;
      if(a!=-1)A[a].S=x;
      A[A[x].F].F=x;
      A[A[x].F].S=INT_MAX;
      A[x].F=a;
      A[x].S=b;
    }else{
      int d=A[A[x].S].S;
      int a=A[x].F;
      if(a==-1)start=A[x].S;
      else A[a].S=A[x].S;
      if(d!=INT_MAX)A[d].F=x;
      A[A[x].S].S=x;
      A[A[x].S].F=a;
      A[x].F=A[x].S;
      A[x].S=d;
    }
  }
  cout<<start+1;
  while(A[start].S!=INT_MAX){
    start=A[start].S;
    cout<<' '<<start+1;
  }
  //code end
  return 0;
}