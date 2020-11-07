#include<iostream>

using namespace std;
int cnt = 0;
void add123(int now, int n) {
	if (now > n)
		return;
	if (now == n)
		cnt++;
	add123(now + 1, n);
	add123(now + 2, n);
	add123(now + 3, n);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		add123(0, n);
		
		cout << cnt << '\n';
		cnt = 0;
	}

}