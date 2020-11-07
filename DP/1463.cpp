#include<iostream>
#include<algorithm>


using namespace std;
int cache[1000001];

int min(int a, int b, int c) {
	if (a < b) {
		if (a < c) {
			return a;
		}
		else return c;
	}
	else {
		if (b < c)
			return b;
		else return c;
	}
}
int dp(int n) {
	if (n == 1)
		return 0;
	int a = 99999,b = 99999, c=99999;
	if (cache[n] > 0)
		return cache[n];

	if (n % 3 == 0)
		 a = dp(n / 3) + 1;

	if (n % 2 == 0)
		 b = dp(n / 2) + 1;

	 c = dp(n - 1) + 1;

	cache[n] = min(a, b,c);
	return cache[n];
}


int main() {
	int n;
	cin >> n;
	cout << dp(n);
}