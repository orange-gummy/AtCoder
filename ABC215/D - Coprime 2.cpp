#include<bits/stdc++.h>
#define SIZE 100005
using namespace std;
vector<int> pfact(int x){
  vector<int> res;
  for(int i=2;i*i<=x;i++){
    while(x%i==0){
      x/=i;
      res.push_back(i);
    }
  }
  if(x!=1){res.push_back(x);}
  return res;
}
int main(){
  int n,m;
  cin >> n >> m;
  vector<bool> fl(SIZE,true);
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    vector<int> v=pfact(a);
    for(auto &nx : v){
      if(fl[nx]){
        for(int j=nx;j<SIZE;j+=nx){fl[j]=false;}
      }
    }
  }
  vector<int> res;
  for(int i=1;i<=m;i++){
    if(fl[i]){res.push_back(i);}
  }
  cout << res.size() << '\n';
  for(auto &nx : res){cout << nx << '\n';}
  return 0;
}