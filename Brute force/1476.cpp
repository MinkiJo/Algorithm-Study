#include<iostream>
#include<algorithm>
using namespace std;
int a[3];
int esm[3] = { 1,1,1 };

int main() {
	
	for (int i = 0;i <= 2;i++) {
		cin >> a[i];
	}

	int year = 1;
	while (true) {
		if (a[0] == esm[0] && a[1] == esm[1] && a[2] == esm[2])
			break;

		else {
			esm[0]++; esm[1]++; esm[2]++;
			if (esm[0] > 15)
				esm[0] = 1;
			if (esm[1] > 28)
				esm[1] = 1;
			if (esm[2] > 19)
				esm[2] = 1;
			year++;
		}

	}

	cout << year;
}