#include <iostream>
using namespace std;
int main() {
	string a[8] = { "000","001","010","011","100","101","110","111"};
	string res = "";
	
	string str;
	cin >> str;
	if (str[0] == '0')
		res += "0";
	else if (str[0] == '1')
		res += "1";
	else if (str[0] == '2')
		res += "10";
	else if (str[0] == '3')
		res += "11";
	else {
		res += a[str[0] - '0'];
	}
	for (int i = 1;i < str.size();i++) {
		res += a[str[i]-'0'];
	}
	
	

	cout << res;
}