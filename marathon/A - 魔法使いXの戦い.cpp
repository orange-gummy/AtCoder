#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib> 
using namespace std;

int main(){
	long N,M,K;
	cin >> N >> M >> K;
	vector<int> A(N);
	for(int i=0;i<N;++i){
		cin >> A[i];
	}
	int index;
	for (int i=0;i<M;++i){
		std::vector<int>::iterator iter = std::max_element(A.begin(), A.end());
		index = std::distance(A.begin(), iter);
		if(A[index] == 0) break;
		long riso;
		riso = 0;
		long saikin;
		saikin = K;
		long tikasa;
		tikasa = K;
		int indexx;
		for(int j=0;j<N;++j){
			tikasa = riso - A[j];
			if (std::abs(tikasa)<std::abs(saikin)){
				saikin = tikasa;
				indexx = j;
			}
		}
		A[index] = (A[index] + A[indexx])%K;
		cout << index <<" " << indexx << endl;
	}
	return 0;
}