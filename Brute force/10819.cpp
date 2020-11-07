#include<iostream>
#include<algorithm>

using namespace std;
int a[10001];
int main() {
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
		cin >> a[i];
	int sum = 0, max = 0;
	sort(a, a + n);
	while (next_permutation(a, a + n)) {
	
		sum = 0;
		for (int i = 0;i <= n - 2;i++) {
			sum += abs(a[i] - a[i + 1]);
		}
		if (max < sum)
			max = sum;
	}

	cout << max;
}