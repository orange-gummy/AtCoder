#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<vector<int>> AA(N, vector<int>(N));
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin >> AA[i][j];
		}
	}
	vector<vector<int>> OK(N, vector<int>(N, 0));
	vector<vector<int>> ANS(N, vector<int>(N, 0));
	int maxi, maxj, max;
	bool owaru = false;
	bool dame = false;
	int power = 0;

	while (true)
	{
		owaru = false;
		max = 0;
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < N; ++j)
			{
				if (AA[i][j] > max && OK[i][j] == 0)
				{
					owaru = true;
					max = AA[i][j];
					maxi = i;
					maxj = j;
				}
			}
		}
		if (owaru == false) break;
		for (int i = 0; i <= min(min(40 - maxi, maxi), min(40 - maxj, maxj)); ++i)
		{
			dame = false;
			for (int j = 0; j < N; ++j)
			{
				for (int k = 0; k < N; ++k)
				{
					if ((std::abs(maxi - j) + std::abs(maxj - k)) <= i)
					{
						if (OK[j][k] != 0)
							dame = true;
					}
					if (dame == true)
						break;
				}
				if (dame == true)
					break;
			}
			if (dame == true)
				break;
			ANS[maxi][maxj] = i;
		}
		for (int j = 0; j < N; ++j)
		{
			for (int k = 0; k < N; ++k)
			{
				if ((std::abs(maxi - j) + std::abs(maxj - k)) <= ANS[maxi][maxj])
				{
					OK[j][k] = 1;
				}
			}
		}
	}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cout << ANS[i][j];
			if (j != 39)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}