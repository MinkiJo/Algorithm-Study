#include<iostream>
#include<algorithm>

using namespace std;
int a[11];
int w[11][11];
int main() {
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++) {
			cin >> w[i][j];
		}
	}

	for (int i = 0;i < n;i++)
		a[i] = i;

	int min = 1000000 * 11;
	int sum;
	bool noRoute;
	do {
		sum = 0;
		noRoute = false;
		for (int i = 0;i < n - 1;i++)
		{
			
			if (w[a[i]][a[i + 1]] == 0) {
				noRoute = true;
				break;
			}
			sum += w[a[i]][a[i + 1]];
		}
		if (!noRoute && w[a[n - 1]][a[0]] != 0) {
			sum += w[a[n - 1]][a[0]];
			if (sum < min)
				min = sum;
		}

		
	} while (next_permutation(a, a + n));

	cout << min;
}