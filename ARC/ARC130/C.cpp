/**
*    author:  orangegummy
*    created: 28.11.2021 22:00:03
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
int ctoi(char c) {
	switch (c) {
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		default: return 0;
	}
}
int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  string s,ss;cin>>s>>ss;
  vector<pair<ll,ll>> A(9,make_pair(0,0));
  rep(i,size(s)){
    ++A[ctoi(s[i])].F;
  }
  rep(i,size(ss)){
    ++A[ctoi(ss[i])].S;
  }
  string ans="";string anss="";
  rep(w,9)for(int i=8;i<0;--i){
    int a=min(A[i].F,A[(10-i+w)%10].S);
    A[i+1].F-=a;A[(9-i+w)%10].S-=a;
    rep(j,a){
      ans=ans+to_string(i);
      anss=anss+to_string((10-i+w)%10);
    }
  }
  rep(i,9)rep(j,A[i].F)ans=to_string(i+1)+ans;
  rep(i,9)rep(j,A[i].S)anss=to_string(i+1)+anss;
  cout<<ans<<endl<<anss<<endl;
  //code end
  return 0;
}