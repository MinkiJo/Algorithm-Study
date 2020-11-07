#include<iostream>
#include<algorithm>

using namespace std;
int a[10001];
int main() {
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
		cin >> a[i];

	int p= -1;
	for (int i = n - 1;i > 0;i--) {
		if (a[i] > a[i - 1])
		{
			p = i-1;
			break;
		}

	}
	if (p == -1)
	{
		cout << "-1";
		return 0;
	}

	for (int i = n - 1;i > 0;i--) {
		if (a[i] > a[p])
		{
			swap(a[p], a[i]);
			break;
		}

	}

	sort(a + p + 1, a + n);
	for (int i = 0;i < n ;i++)
		cout << a[i] << ' ';
}