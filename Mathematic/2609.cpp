#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b) {
	if (a < b)
		swap(a,b);
	while (b != 0) {
		int temp = a;
		a = b;
		b = temp % b;
	}
	return a;
}

int lcm(int a, int b,int min) {
	
	int l = a < b ? a : b;
	while(true){
		if (l % a == 0 && l % b== 0) {
			return l;
		}
		else l = l +min;
	}
}

int main() {
	int a, b;
	cin >> a >> b;
	int min = gcd(a, b);
	cout << min << '\n';
	int max = lcm(a, b, min);
	cout << max;
}