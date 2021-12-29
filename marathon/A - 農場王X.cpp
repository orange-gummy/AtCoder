#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, a, b) for(int i = (a);i < (b);++i)
#define REPS(i, a, b) for(int i = (b)-1;i >= (a);--i)
#define rep(i, n) REP(i, 0, n)
#define reps(i, n) REPS(i, 0, n)
#define fora(i,I) for(const auto& i:I)
//x:コンテナ
#define ALL(x) x.begin(),x.end() 
#define SIZE(x) ll(x.size())
//略記
#define F first
#define S second
//出力(空白区切りで昇順に)
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++)cout<<*i<<" ";cout<<*--x.end()<<endl;
//aをbで割る時の繰上げ,繰り下げ
ll myceil(ll a,ll b){return (a+(b-1))/b;}
ll myfloor(ll a,ll b){return a/b;}
#define endl '\n'

void buy(int x,int y){
	cout << x << " " << y << endl;
}

signed main(){
	cin.tie(0);cout.tie(0);
	ios_base::sync_with_stdio(false);
	//code start
	int N,M,T;cin>>N>>M>>T;
	vector<vector<int>> A(M,vector<int>(5));
	rep(i,M){
		rep(j,5){
			cin >> A[i][j];
		}
	}
	int index;
	int money = 1;
	vector<vector<int>> B(0,vector<int>(3));
	rep(i,T){
		int dis = i;
		while(true){
			auto result = find(A.begin(), A.end(), dis);
			index = distance(A.begin(),result);
			if(result != A.end()) break;
			++dis;
		}
		if(B.size() == 0 && money >= pow((int)B.size()+1,3)){
			money -= (B.size()+1)^3;
			buy(A[index][0],A[index][1]);
			B.push_back(vector<int>());
			B[B.size()-1].push_back(A[index][0]);
			B[B.size()-1].push_back(A[index][1]);
			B[B.size()-1].push_back(dis);
		}else{
			bool a = false;
			rep(j,(int)B.size()){
				if(B[j][2] < i){
					cout << B[j][0] << " " << B[j][0] << " ";
					B[j][0] = A[index][0];
					B[j][1] = A[index][1];
					cout << B[j][0] << " " << B[j][0] << endl;
					a = true;
					break;
				}
			}
			if(a==false) cout << "-1" << endl;
		}
	}
	//code end
	return 0;
}