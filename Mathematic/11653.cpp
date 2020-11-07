#include<iostream>
#include<stack>
using namespace std;
int main() {
	int n, i = 2;
	cin >> n;

	
	while(true){
		if (n == 1)
			break;
		else if (n % i == 0) {
			cout << i<<'\n';
			n = n / i;
			i = 2;
		}
		else i++;
	}
	

}