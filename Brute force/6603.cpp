#include<iostream>

using namespace std;
int a[10];
int b[10];
void go(int n, int index, int start) {
	if (index == 6) {
		for (int i = 0;i < index;i++) {
			cout << a[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = start;i <n;i++) {
		a[index] = b[i];
		go(n, index + 1, i+1);
	}
}

int main() {
	
	
	while (true) {
		int n;
		cin >> n;
		if (n == 0)
		{
			return 0;
		}
		for (int i = 0;i < n;i++)
			cin >> b[i];
		go(n, 0, 0);
		cout << '\n';
	}
	
	

}