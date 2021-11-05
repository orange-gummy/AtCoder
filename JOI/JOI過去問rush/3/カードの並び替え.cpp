/**
*    author:  orangegummy
*    created: 05.11.2021 23:10:52
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
#define vecmax(x) max_element(x.begin(), x.end());
#define vecmin(x) min_element(x.begin(), x.end());
#define yn if(ans){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;};
#define endl '\n'

int n,m;
vector<int> cut(vector<int> A,int k){
  vector<int> B(2*n);
  rep(i,2*n){
    if(i<=2*n-k-1)B[i]=A[k+i];
    else B[i]=A[i-(2*n-k)];
  }
  return B;
}
vector<int> shuffle(vector<int> A){
  vector<int> B(2*n);
  rep(i,2*n){
    if(i%2==0){
      B[i]=A[i/2];
    }
    else{
      B[i]=A[n+i/2];
    }
  }
  return B;
}
int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  cin>>n>>m;
  vector<int> A(2*n);
  rep(i,2*n)A[i]=i+1;
  rep(i,m){
    int a;cin>>a;
    if(a==0)A=shuffle(A);
    else A=cut(A,a);
  }
  coutall(A);
  //code end
  return 0;
}