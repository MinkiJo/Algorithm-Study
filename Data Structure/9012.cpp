#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool vps(string str){
	stack<char> s;
	for (int i = 0;i < str.size();i++)
	{
		if (str[i] == '(')
		{
			s.push('(');
		}
		else if (str[i] == ')') {
			if (!s.empty()) {
				if (s.top() == '(')
				{
					s.pop();
				}
				else {
					return false;
				}
			}
			else return false;
		}
		continue;
	}
	
	if (!s.empty())
		return false;
	else return true;
	
}

int main() {
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0;i < n;i++) {
		string str;
		cin >> str;
		if (vps(str) == true)
			cout << "YES\n";
		else cout << "NO\n";
	}
}