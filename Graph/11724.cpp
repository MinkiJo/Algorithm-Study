#include<cstdio>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
vector<int> a[1001]; //그래프
bool visit[1001] = { false };
int count = 0;

void dfs(int start) {	
	visit[start] = true;
	for (int i = 0;i < a[start].size();i++)
	{
		int next = a[start][i];
		if (visit[next] == false)
			dfs(next);
	}
}


int main() {

	int n, m,count=0;
	scanf("%d %d", &n, &m);
	for (int i = 0;i < m;i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		a[x].push_back(y);
		a[y].push_back(x);
	}
	for (int i = 1;i <= n;i++)
	{
		sort(a[i].begin(), a[i].end());
	}

	for (int i = 1;i <= n;i++) {
		if (visit[i] == false) {
			dfs(i);
			count++;
		}
	}
	printf("%d",count);
	
}