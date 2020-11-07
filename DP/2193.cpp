#include<iostream>
using namespace std;
long long a[91][2];
int main() {
	a[1][1] = 1;

	int n;
	cin >> n;
	for (int i = 1;i <= n;i++) {
		a[i + 1][1] = a[i][0];
		a[i + 1][0] = a[i][0] + a[i][1];
	}
	cout << a[n][0] + a[n][1];
}