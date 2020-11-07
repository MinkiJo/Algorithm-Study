#include<iostream>
#include<vector>

using namespace std;
int a[21][21];
vector <int> t1, t2;
int sum1, sum2, ans = 1000000000;
void per(int n, int index) {
	if (index == n+1) {
		int sum1 = 0, sum2 = 0;
		if (t1.size() == n / 2 && t2.size() == n / 2)
		{
			for (int i = 0;i < n / 2;i++) {
				for (int j = 0;j < n / 2;j++) {
					sum1 += a[t1[i]][t1[j]];
					sum2 += a[t2[i]][t2[j]];
				}
			}

			if (abs(sum1 - sum2) < ans)
				ans = abs(sum1 - sum2);
			return;
		}
		return;
	}


	t1.push_back(index);
	per(n, index + 1);
	t1.pop_back();
	
	t2.push_back(index);
	per(n, index + 1);
	t2.pop_back();

}
int main() {
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= n;j++) {
			cin >> a[i][j];
		}
	}
	per(n, 1);
	cout << ans;

}