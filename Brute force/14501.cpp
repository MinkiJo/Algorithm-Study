#include<iostream>

char a[16];
using namespace std;
int t[16];
int p[16];
int ans = 0;
void per(int start, int n, int sum) {
	if (start == n+1) {
		if (ans < sum)
			ans = sum;
		sum = 0;
	}
	else if (start > n+1)
	{
		sum = 0;
		return;
	}
	
	for (int i = start;i <= n;i++) {
		
		per(i + t[i], n, sum+p[i]);
		per(i + 1, n, sum);
	}
}
int main() {
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++) {
		cin >> t[i] >> p[i];
	}
	per(1, n, 0);
	cout << ans;

}