/**
*    author:  Dooloper
*    created: 17.10.2021 17:13:07
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
    n=1000-n;
    int ans=0;
    while(n>=500){
        n-=500;++ans;
    }
    while(n>=100){
        n-=100;++ans;
    }
    while(n>=50){
        n-=50;++ans;
    }
    while(n>=10){
        n-=10;++ans;
    }
    while(n>=5){
        n-=5;++ans;
    }
    cout<<ans+n<<endl;
    //code end
   return 0;
}