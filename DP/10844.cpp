#include<iostream>
using namespace std;
int mod = 1000000000;
long long a[101][10];
int main() {
	int n;
	cin >> n;
	for (int i = 1;i <= 9;i++)
		a[i][1] = 1;


	for (int i = 1;i <= n;i++) {
		a[0][i + 1] = a[1][i] % mod;
		a[9][i + 1] = a[8][i] % mod;
		for (int j = 1;j < 9;j++) {
			a[j][i + 1] = (a[j - 1][i] + a[j + 1][i]) % mod;
			
		}
	}

	long long  sum = 0;
	
	for (int i = 0;i <= 9;i++) {
		sum += a[i][n] % mod;
	}

	
	cout << sum % mod;
}