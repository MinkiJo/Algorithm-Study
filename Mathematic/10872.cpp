#include<cstdio>

int main() {
	int n;
	scanf("%d", &n);
	int res = 1;
	while (n >0) {
		res = res * n--;
		
	}
	printf("%d", res);
}