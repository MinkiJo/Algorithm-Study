#include<iostream>
#include<stack>
using namespace std;
int main() {
	int n,b;
	string ans;
	stack <char> s;
	cin >> n >> b;
	while (n != 0)
	{
		int r = n % b;
		if (r < 10)
			s.push((char)(r + '0'));
		else s.push((char)(r - 10 + 'A'));

		n /= b;
	}

	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}