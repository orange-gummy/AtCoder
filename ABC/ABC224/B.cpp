/**
*    author:  Dooloper
*    created: 23.10.2021 21:03:13
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
#define ALL(x) x.begin(),x.end() 
#define SIZE(x) ll(x.size())
#define F first
#define S second
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++)cout<<*i<<' ';cout<<*--x.end()<<endl;
ll myceil(ll a,ll b){return (a+(b-1))/b;}
ll myfloor(ll a,ll b){return a/b;}
#define endl '\n'

int main() {
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(false);
    //code start
    int h,w;cin>>h>>w;
    vector<vector<int>> A(h,vector<int>(w));
    bool ans=false;
    rep(i,h)rep(j,w)cin>>A[i][j];
    rep(i,h)rep(ii,h-i-1){
        rep(j,w)rep(jj,w-j-1){
            if(A[i][j]+A[i+ii+1][j+jj+1]>A[i+ii+1][j]+A[i][j+jj+1])ans=true;
        }
    }
    if(ans)cout<<"No"<<endl;
    else cout<< "Yes"<<endl;
    //code end
   return 0;
}