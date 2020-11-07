#include<iostream>
#include<algorithm>
using namespace std;

int a[1001][3];
int res[1001][3];
int max_val = 1000001;


int main() {
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++) {
		for (int j = 0;j <= 2;j++) {
			cin >> a[i][j];
		}
	}

	//0을 선택할때
	res[1][0] = a[1][0];
	res[1][1] = res[1][2] = max_val;
	for (int i = 2;i <= n;i++) {
		res[i][0] = min(res[i - 1][1], res[i - 1][2]) + a[i][0];
		res[i][1] = min(res[i - 1][0], res[i - 1][2]) + a[i][1];
		res[i][2] = min(res[i - 1][0], res[i - 1][1]) + a[i][2];
	}


	int min1 = min(res[n][1], res[n][2]);
	//1을 선택할때
	res[1][1] = a[1][1];
	res[1][0] = res[1][2] = max_val;
	for (int i = 2;i <= n;i++) {
		res[i][0] = min(res[i - 1][1], res[i - 1][2]) + a[i][0];
		res[i][1] = min(res[i - 1][0], res[i - 1][2]) + a[i][1];
		res[i][2] = min(res[i - 1][0], res[i - 1][1]) + a[i][2];
	}
	int min2 = min(res[n][0], res[n][2]);
	//2을 선택할때
	res[1][2] = a[1][2];
	res[1][0] = res[1][1] = max_val;
	for (int i = 2;i <= n;i++) {
		res[i][0] = min(res[i - 1][1], res[i - 1][2]) + a[i][0];
		res[i][1] = min(res[i - 1][0], res[i - 1][2]) + a[i][1];
		res[i][2] = min(res[i - 1][0], res[i - 1][1]) + a[i][2];
	}
	int min3 = min(res[n][0], res[n][1]);

	cout << min({ min1,min2,min3 });
}