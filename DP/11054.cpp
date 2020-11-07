#include<iostream>
#include<algorithm>
using namespace std;

int a[1001];
int res1[1001];
int res2[1001];

int main() {
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++) {
		cin >> a[i];
	}

	for (int i = 1;i <= n;i++) {
		for (int j = 1;j < i;j++) {
			if (a[j]< a[i] && res1[j] + 1 > res1[i]) {
				res1[i] = res1[j] + 1;
			}
		}
	}

	for (int i = n;i >= 0;i--) {
		for (int j = n;j > i;j--) {
			if (a[j]< a[i] && res2[j] + 1 > res2[i]) {
				res2[i] = res2[j] + 1;
			}
		}
	}


	int max = 0;
	for (int i = 1;i <= n;i++) {
		if (max < res1[i] + res2[i]) {
			max = res1[i] + res2[i];
		}
	}cout << max+1;
}