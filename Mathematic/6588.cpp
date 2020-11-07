#include<cstdio>
bool prime[1000001];
int main() {


	for (int i = 2;i*i < 1000000;i++) {
		for (int j = i * i;j < 1000000;j+=i) {
			if (prime[j] == false) //소수면 false
				prime[j] = true;
		}
	}
	while (true) {
		int n;
		scanf("%d", &n);

		if (n == 0)
			break;
		for (int i = 2;i < n;i++) {
			if (prime[i] == false && prime[n - i] == false) {			
				printf("%d = %d + %d\n", n,i, n - i);				
				break;
			}
		}
	}
}