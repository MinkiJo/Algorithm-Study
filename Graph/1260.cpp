#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
vector<int> a[1000]; //그래프
bool visit[1001];
queue<int> q;
void dfs(int start) {
	visit[start] = true;
	printf("%d ", start);
	for (int i = 0;i < a[start].size();i++)
	{
		int next = a[start][i];
		if (visit[next] == false)
			dfs(next);

	}
}
void bfs(int start)
{
	memset(visit, false, sizeof(visit));
	visit[start] = true;
	q.push(start);
	while (!q.empty())
	{
		int node = q.front(); q.pop();
		printf("%d ", node);
		for (int i = 0;i < a[node].size();i++)
		{
			int next = a[node][i];
			if (visit[next] == false) {
				visit[next] = true;
				q.push(next);
			}
		}
	}
}


int main() {
	int n, m, start;
	scanf("%d %d %d", &n, &m, &start);
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
	dfs(start);
	printf("\n");
	bfs(start);
}