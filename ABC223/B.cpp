/**
*    author:  Dooloper
*    created: 17.10.2021 21:03:41
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
string sift(string s){
    string res=s;
    rep(i,SIZE(s)){
        if(i==0)res[SIZE(s)-1]=s[0];
        else res[i-1]=s[i];
    }
    return res;
}
int main() {
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(false);
    //code start
    string s;cin>>s;
    string min=s;string max=s;
    rep(i,SIZE(s)){
        if(min>s)min=s;
        if(max<s)max=s;
        s=sift(s);
    }
    cout<<min<<endl<<max<<endl;
    //code end
   return 0;
}