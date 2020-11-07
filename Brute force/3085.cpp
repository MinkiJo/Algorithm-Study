#include<iostream>
#include<algorithm>
using namespace std;
int n;
char a[51][51];
int search() {
	int cnt, max = 1;
	for (int i = 1;i <= n;i++) {
		cnt = 1;
		for (int j = 1;j < n;j++) {
			if (a[i][j] == a[i][j + 1]) {
				cnt++;
				if (cnt > max)
					max = cnt;
			}
			else
				cnt = 1;
		}

		cnt = 1;
		for (int j = 1;j < n;j++) {
			if (a[j][i] == a[j + 1][i]) {
				cnt++;
				if (cnt > max)
					max = cnt;
			}
			else
				cnt = 1;
		}
	}
	return max;
}

int main() {
	cin >> n;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= n;j++) {
			cin >> a[i][j];
		}
	}

	int m = 0;
	for (int i = 1;i < n;i++) {
		for (int j = 1;j <= n;j++) {
			swap(a[i][j], a[i + 1][j]);
			if (m < search())
				m = search();
			swap(a[i][j], a[i + 1][j]);
		}

		for (int j = 1;j <= n;j++) {
			swap(a[j][i], a[j][i + 1]);
			if (m < search())
				m = search();
			swap(a[j][i], a[j][i + 1]);
		}
	}
	cout << m;
}