#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
	string str;
	
	cin >> str;
	
	if (str.size() % 3 == 1) {
		cout << (str[0] - '0');
		for (int i = 1;i < str.size() ;i+=3) {
			cout << 4 * (str[i] - '0') + 2 * (str[i + 1] - '0') + (str[i + 2] - '0');
		}
	}

	else if (str.size() % 3 == 2) {
		cout << 2 * (str[0] - '0') + (str[1] - '0');
		for (int i = 2;i < str.size();i+=3) {
			cout << 4 * (str[i] - '0') + 2 * (str[i + 1] - '0') + (str[i + 2] - '0');
		}
	}

	else {
		
		for (int i = 0;i < str.size() - 2;i+=3) {
			cout << 4 * (str[i] - '0') + 2 * (str[i+1] - '0') + (str[i+2] - '0');
		}

	}


	
}