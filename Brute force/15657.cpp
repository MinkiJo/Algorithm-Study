#include<iostream>
#include<algorithm>
using namespace std;
bool visit[10];
int a[10];
int res[10];
void go(int n, int m, int index, int start) {
	if (index == m) {
		for (int i = 0;i < m;i++)
			cout << res[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i =start;i <= n;i++) {
		
		res[index] = a[i];
		
		go(n, m, index +1, i);
	
	}
}


int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1;i <= n;i++) {
		cin >> a[i];
	}
	sort(a+1, a + n+1);
	go(n, m, 0,1);
}