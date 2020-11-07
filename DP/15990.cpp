#include<iostream>
using namespace std;
int mod = 1000000009;
long long a[100001][4];
int res[100001];
int main() {
	a[1][1] = 1;a[2][2] = 1;a[3][1] = 1;a[3][2] = 1;a[3][3] = 1;
	res[1] = 1; res[2] = 1;res[3] = 3;
	int t;
	cin >> t;

	
	for (int i = 4;i <= 100000;i++)
	{
		a[i][1] = (a[i - 1][2] + a[i - 1][3]) % mod;
		a[i][2] = (a[i - 2][1] + a[i - 2][3]) % mod;
		a[i][3] = (a[i - 3][2] + a[i - 3][1]) % mod;
			
		res[i] = (a[i][1] + a[i][2] + a[i][3]) % mod;
	}

	while (t--) {
		int n;
		cin >> n;

	cout << res[n] << '\n';
	}
}