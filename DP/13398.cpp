#include<iostream>
#include<algorithm>
using namespace std;

int a[100001];
int res[100001][2];


int main() {
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++) {
		cin >> a[i];
	}
	int ans = a[1];
	res[1][1] = res[1][0] = a[1];



	for (int i = 2;i <= n;i++) {
		res[i][0] = max(res[i - 1][0] + a[i], a[i]);
		res[i][1] = max(res[i - 1][0], res[i - 1][1] + a[i]);
		ans = max(ans, max(res[i][0], res[i][1]));
	}
	cout << ans;
}