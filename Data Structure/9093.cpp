#include<iostream>
#include<string>
#include<stack>
using namespace std;
stack <char> s;
int main() {
	int n;
	cin >> n;
	cin.ignore();
	
	while (n--) {
		string str;
		getline(cin, str);
		for (int i = 0;i < str.size() + 1;i++) {
			if (str[i] == ' ' || str[i] == '\0')
			{
				while (!s.empty())
				{
					cout << s.top();
					s.pop();
				}
				cout << " ";
			}
			else {
				s.push(str[i]);
			}

		}
		cout << "\n";
	}


}