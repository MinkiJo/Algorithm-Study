#include<iostream>
#include<algorithm>
using namespace std;
int a[100];
int gcd(int a, int b) {
	if (a < b)
		swap(a, b);
	while (b != 0) {
		int temp = a;
		a = b;
		b = temp % b;
	}
	return a;
}
int main() {
	
	int n;
	cin >> n;
	while (n--) {

		int m;
		long long  res = 0;
		cin >> m;
		for (int i = 0;i < m;i++) {
			cin >> a[i];
		}
		for (int i = 0;i < m;i++) {
			for (int j = i + 1;j < m;j++) {
				res += gcd(a[i], a[j]);
			}
		}
		cout << res<<'\n';

	}
}