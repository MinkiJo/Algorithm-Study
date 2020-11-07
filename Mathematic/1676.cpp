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


	
}#include<cstdio>

int main() {
	int n;
	scanf("%d", &n);
	int cnt5 = 0;
	for (int i = 5;i <= n;i++) {
		if (i % 5 == 0) {
			if (i % 25 == 0) {
				if (i % 125 == 0)
					cnt5 += 3;
				else cnt5 += 2;
			}
			else cnt5 += 1;
		}
	}
	printf("%d", cnt5);
}