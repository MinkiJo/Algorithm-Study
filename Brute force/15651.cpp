#include<iostream>

using namespace std;
bool visit[10];
int a[10];
void go(int n, int m, int index) {
	if (index == m) {
		for (int i = 0;i < m;i++)
			cout << a[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i =1;i <= n;i++) {
		
		a[index] = i;
		go(n, m, index + 1);
		
	}
}


int main() {
	int n, m;
	cin >> n >> m;
	go(n, m, 0);
}