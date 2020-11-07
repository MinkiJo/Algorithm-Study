#include<iostream>
#include<stack>
#include<cmath>
using namespace std;
stack<int> s;
int main() {
	int a, b, m;
	int num[26];
	cin >> a >> b;
	cin >> m;
	for (int i = 1;i <= m;i++) {
		cin >> num[m-i];
	}

	

	int d = 0;
	for (int i = 0;i < m;i++) {
		d += (int)pow(a, i) * num[i];
	}
	
	while (d!= 0) {
		s.push(d % b);
		d /= b;
	}

	while (!s.empty()) {
		cout << s.top() << ' ';
		s.pop();
	}
}