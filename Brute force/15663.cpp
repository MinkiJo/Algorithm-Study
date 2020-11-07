#include<iostream>
#include<algorithm>
using namespace std;
int a[10];
int res[10];
bool used[10];
bool visit[10];
void go(int n, int m, int index) {
	if (index == m) {
		for (int i = 0;i < m;i++)
			cout << res[i]<< ' ';
		cout << '\n';
		return;
	}
	int before = -1;
	for (int i = 0;i < n;i++) {
		if (visit[i] == true || before == a[i])
			continue;
		visit[i] = true;
		before = a[i];
		res[index] = a[i];
		go(n, m, index + 1);
		visit[i] = false;
		
	
	}
}
int main() {
	int n,m;
	cin >> n >> m;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}

	sort(a, a + n);
	go(n, m, 0);
}