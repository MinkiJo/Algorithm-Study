#include<iostream>
#include<algorithm>
using namespace std;

long long  a[10];


int main() {
	int sum = 0;
	int m, n;
	for (int i = 0;i < 9;i++) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a + 9);
	for (int i = 0;i < 8;i++) {
		for (int j = i + 1;j <= 8;j++) {
			if (a[i] + a[j] == sum - 100) {
				 m = i;  n = j;
			}
		}
	}

	for (int i = 0;i < 9;i++) {
		if (i != m && i != n)
			cout << a[i] << '\n';
	}

	
}