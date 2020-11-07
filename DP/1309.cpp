#include<iostream>
#include<algorithm>
using namespace std;

long long a[100001][3];
int mod = 9901;


int main() {
	int n;
	cin >> n;
	a[1][0] = a[1][1] = a[1][2] = 1;
	for (int i = 2;i <= n;i++) {
		a[i][0] = (a[i - 1][0] + a[i - 1][1] + a[i - 1][2] )%mod;
		a[i][1] =( a[i - 1][0]  + a[i - 1][2])%mod;
		a[i][2] =( a[i - 1][0] + a[i - 1][1])%mod;
	}

	cout << (a[n][0] + a[n][1] + a[n][2])%mod;

}