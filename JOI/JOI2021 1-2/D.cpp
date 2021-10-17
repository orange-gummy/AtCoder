/**
*    author:  Dooloper
*    created: 17.10.2021 13:57:51
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
    int n;cin>>n;
    vector<int> count(2005,0);
    rep(i,n){
        int a;cin>>a;++count[a];
    }
    int min=101;
    int ans=0;
    rep(i,2005){
        if(count[i]!=0&&count[i]<min){
            min=count[i];
            ans=i;
        }
    }
    cout<<ans<<endl;
    //code end
   return 0;
}