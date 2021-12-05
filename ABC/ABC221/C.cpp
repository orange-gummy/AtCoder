/**
*    author:  Dooloper
*    created: 02.10.2021 17:15:59
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

ll binary(ll bina){
    ll ans = 0;
    for (ll i = 0; bina>0 ; i++)
    {
        ans+=(bina%2)*pow(10,i);
        bina = bina/2;
    }
    return ans;
}

int main() {
    //code start
    string S;cin >> S;
    vector<char> SC((int)S.size());
    rep(i,(int)S.size()){
        SC[i]=S[i];
    }
    sort(ALL(SC),greater<int>());
    ll ans=0;
    for(ll i=0;i<pow((int)S.size(),2);++i){
        string two = to_string(binary(i));
        string A="",B="";
        rep(j,(int)S.size()){
            if(two[j]=='1'&&(int)two.size()>j) A=A+SC[j];
            else B=B+SC[j];
        }
        if(A=="")A="0";
        if(B=="")B="0";
        ans = max(ans,stoll(A)*stoll(B));
    }
    cout << ans << endl;
    //code end
   return 0;
}