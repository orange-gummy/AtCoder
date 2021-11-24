/**
*    author:  orangegummy
*    created: 21.11.2021 12:47:35
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

int main() {
	cin.tie(0);cout.tie(0);
	ios_base::sync_with_stdio(false);
	//code start
	int n;cin>>n;
	vector<pair<int,int>> A(n);
	rep(i,n)cin>>A[i].F;
	rep(i,n)cin>>A[i].S;
	int m=INT_MAX;
	int ind;
	rep(i,n){
		if(A[i].F<m){m=A[i].F;ind=i;}
	}
	vector<int> ans(n);
	rep(i,2*n){
		if(i==0)ans[ind]=A[ind].S;
		ans[(i+ind+1)%n]=min(ans[(i+ind)%n]+A[(i+ind)%n].F,A[(i+ind+1)%n].S);
	}
	coutall(ans);
	//code end
	return 0;
}