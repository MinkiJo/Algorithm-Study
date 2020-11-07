#include<cstdio>
#include<queue>
#define MAX 200000
using namespace std;
bool visit[MAX];
int dis[MAX];
int link[MAX];
queue <int> q;
void print(int n, int k) {
	if (n != k)
	{
		print(n, link[k]);
	}
	printf("%d ", k);
}
int main() {
	
	int n, k;
	scanf("%d %d",&n,&k);
	visit[n] = true;
	link[n] = -1;
	q.push(n);
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		if (cur - 1 >= 0)
		{
			if (visit[cur - 1] == false)
			{
				q.push(cur - 1);
				dis[cur - 1] = dis[cur] + 1;
				visit[cur - 1] = true;
				link[cur - 1] = cur;
			}
		}

		if (cur + 1 < MAX)
		{
			if (visit[cur + 1] == false)
			{
				q.push(cur + 1);
				dis[cur + 1] = dis[cur] + 1;
				visit[cur + 1] = true;
				link[cur + 1] = cur;
			}
		}

		if (2*cur < MAX)
		{
			if (visit[2*cur] == false)
			{
				q.push(2 * cur);
				dis[2 * cur] = dis[cur] + 1;
				visit[2 * cur] = true;
				link[2*cur] = cur;
			}
		}
	}

	printf("%d\n", dis[k]);
	print(n, k);
	
}

