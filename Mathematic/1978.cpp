#include<iostream>

using namespace std;
bool prime(int d) {
	if (d == 1)
		return false;
	for (int i = 2;i * i <= d;i++) {
		if (d % i == 0)
			return false;
	}
	return true;
}
int main() {
	int n, cnt = 0;
	cin >> n;
	for (int i = 0;i < n;i++) {
		int m;
		cin >> m;
		if (prime(m) == true)
			cnt++;
	}
	cout << cnt;


}