#include<iostream>
#include<stack>
#include<string>
using namespace std;

stack <int> s;
int main() {
	int n, cnt;
	cin >> n;
	int a[100000];
	string str;
	bool ans = true;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	cnt = 0;

	for (int i = 1;i <= n;i++)
	{
		
		if (cnt < a[i]) {
			while (a[i] > cnt) {
				s.push(++cnt);
				str += "+";
			}
			s.pop();
			str += "-";
		}
		else {
			if (!s.empty()) {
			
				if (s.top() == a[i]) {
					s.pop();
					str += "-";
				}
				else {
					ans = false;
					
				}
			}
			
		}
		if (ans == false) {
			cout << "NO" << '\n';
			return 0;
		}
	}

	for (int i = 0;i < str.size();i++)
	{
		cout << str[i] << '\n';
	}
	
}