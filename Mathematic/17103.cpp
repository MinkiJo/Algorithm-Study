#include <iostream>
#include<cmath>
using namespace std;
bool prime[1000000];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		prime[0] = true;	prime[1] = true;

		for (int i = 2;i * i <= n;i++) {
			for (int j = i * i;j < n;j += i) {
				if (prime[j] == false) // false면 소수
					prime[j] = true;
			}

		}
		int cnt = 0;
		for (int i = 2;i <= n / 2;i++)
		{
			if (prime[i] == false && prime[n - i] == false)
				cnt++;
		}
		cout << cnt << '\n';
	}
}