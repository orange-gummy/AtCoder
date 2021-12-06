/**
*    author:  orangegummy
*    created: 28.11.2021 20:57:56
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  ll n;char s[1<<19];;scanf("%d%s",&n,s+1);
  ll ans=0;
  int memo=0;
  for(int i=1;i<=n+1;++i){
    ++memo;
    if(i==n+1||s[i]!=s[i+1]){
      ans+=memo*(memo-1);
      memo=0;
    }
  }
  printf("%ld\n",ans/2);
  //code end
  return 0;
}