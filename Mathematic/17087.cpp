#include <iostream>
#include<algorithm>
using namespace std;
int a[100001];
int b[100001];


int gcd(int a, int b) {
	if (a < b)
		swap(a, b);
	while (b != 0)
	{
		int temp = a;
		a = b;
		b = temp % b;
	}
	return a;
}
int main() {
	
	int n, res;
	long long s;
	bool ok;
	cin >> n >> s;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	for (int i = 0;i < n;i++) {
		b[i] = s - a[i] < 0 ? a[i] - s : s - a[i];
	}
	res = b[0];
	for (int i = 0;i < n-1;i++) {
		res = gcd(res, b[i + 1]);		
	}
	cout << res;
}