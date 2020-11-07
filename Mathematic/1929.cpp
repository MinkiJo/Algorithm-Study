#include<cstdio>

using namespace std;

int prime[1000001];

void print(int n,int m) {

	for (int i = n;i <= m;i++) {
		if(prime[i] != 0)
			printf("%d\n", prime[i]);		
	}
}
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 2;i <= m;i++) {
		prime[i] = i;
	}
	for (int i = 2;i*i <= m;i++) {
		if (prime[i] != 0) {
			for (int j = i*i;j<=m;j+= i) {
				prime[j] = 0;
			}
		}
	}
	print(n,m);
}