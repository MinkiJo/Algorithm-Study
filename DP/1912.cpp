#include<iostream>
#include<stack>
using namespace std;
int a[100001];
int res[100001];

int main() {
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	res[0] = a[0];
	for (int i = 1;i < n;i++) {
		if (res[i - 1] + a[i] < a[i])
			res[i] = a[i];
		else res[i] = res[i - 1] + a[i];
	}

	int max = -1000;
	for (int i = 0;i < n;i++)
	{
		if (max < res[i])
			max = res[i];
	}
	cout << max;
}