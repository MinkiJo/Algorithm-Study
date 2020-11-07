#include<iostream>
using namespace std;
int a[1001];
int res[1001];
int main() {
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
        res[i] = 1;
	}

	for (int i = 1;i < n;i++) {
		for (int j = 0;j < i;j++) {
			if (res[j] + 1 > res[i] && a[j] < a[i])
				res[i] = res[j] + 1;
		}

		
	}
	int max = 0;
	for (int i = 0;i < n;i++) {
		if (res[i] > max)
			max = res[i];
	}
	
	cout << max;
}