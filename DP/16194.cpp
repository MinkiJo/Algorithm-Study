#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	int a[10000];
	int res[1000];
	cin >> n;
	for (int i = 1;i <= n;i++) {
		cin >> a[i];
		res[i] = a[i];
	}

	int m = 0;
	
	for (int i = 2;i <= n;i++)
	{		
		for (int j = 1;j <i;j++) {
			int m = min(a[i], res[i - j] + res[j]);
			if (m < res[i])
				res[i] = m;
				
		}
	}
	
	cout << res[n];

}