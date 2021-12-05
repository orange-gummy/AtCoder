/**
*    author:  Dooloper
*    created: 17.10.2021 21:13:21
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
#define endl '\n'

int main() {
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(false);
    //code start
    int n;cin>>n;
    vector<pair<int,int>> A(n);
    rep(i,n){
        cin>>A[i].F>>A[i].S;
    }
    vector<double> D(n);
    rep(i,n){
        D[i]=(double)D[i-1]+(double)A[i].F/(double)A[i].S;
    }
    double sa;
    int index;
    rep(i,n){
        if((double)D[n-1]/(double)2<=D[i]){
            sa=(double)D[n-1]/(double)2-(double)D[i-1];
            index=i-1;
            break;
        }
    }
    double wa=0;
    rep(i,index+1){
        wa+=A[i].F;
    }
    wa+=(double)sa*(double)A[index+1].S;
    cout<< fixed << setprecision(15)<<wa<<endl;
    //code end
   return 0;
}