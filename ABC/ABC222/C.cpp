/**
*    author:  Dooloper
*    created: 09.10.2021 21:04:07
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

int solve(char a,char b){
    if(a=='G'){
        if(b=='G')return 0;
        else if(b=='C')return 1;
        else return 2;
    }
    if(a=='C'){
        if(b=='C')return 0;
        else if (b=='P')return 1;
        else return 2;
    }
    else{
        if(b=='P')return 0;
        else if(b=='G')return 1;
        else return 2;
    }
}

int main() {
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(false);
    //code start
    int n,m;cin>>n>>m;
    vector<pair<pair<int,int>,string>> s(2*n);
    rep(i,2*n){
        s[i].F.S=0;
        s[i].F.F=i;
        cin >> s[i].S;
    }
    rep(i,m){
        rep(j,n){
            if(solve(s[2*j].S[i],s[2*j+1].S[i])==1)++s[2*j].F.S;
            if(solve(s[2*j].S[i],s[2*j+1].S[i])==2)++s[2*j+1].F.S;
        }
        sort(s.begin(),s.end(),[](const pair<pair<int,int>,string> &alpha,const pair<pair<int,int>,string> &beta){if(alpha.F.S != beta.F.S)return alpha.F.S > beta.F.S;else return alpha.F.F < beta.F.F;});
    }
    rep(i,2*n){
        cout << s[i].F.F+1 << endl;
        
    }
    //code end
   return 0;
}