#include<iostream>
#include<algorithm>


using namespace std;
int cache[1000];


int dp(int n) {
	if (n == 1)
		return 1;
	else if (n == 2)
		return 3;

	else if (cache[n] > 0)
		return cache[n];

	cache[n] = (dp(n - 1) + 2*dp(n - 2))%10007;
	return cache[n];
}


int main() {
	int n;
	cin >> n;
	cout << dp(n);
}