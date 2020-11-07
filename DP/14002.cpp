#include<iostream>
#include<stack>
using namespace std;
int a[1001];
int res[1001];
int memo[1001];
stack <int> s;
int main() {
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
		res[i] = 1;
	}
	
	for (int i = 1;i < n;i++) {
		for (int j = 0;j < i;j++) {
			if (res[j] + 1 > res[i] && a[j] < a[i]) {
				res[i] = res[j] + 1;
				memo[i] = j;
			}
		}
	}


	int max = 0;
	int maxindex;
	for (int i = 0;i < n;i++) {
		if (res[i] > max) {
			max = res[i];
			maxindex = i;
		}
	}

	cout << max<<'\n';
	int k = maxindex;
	
	while (true) {
		s.push(a[k]);
		if (res[k] == 1)
			break;
		k = memo[k];
	}
	while (!s.empty()) {
		cout << s.top()<< ' ';
		s.pop();
	}
}