#include<cstdio>
#include<queue>
using namespace::std;
int a[50][50];
int visit[50][50];

int dx[] = { 1,1,1,0,0,-1,-1,-1 };
int dy[] = { 0,1,-1,1,-1,1,0,-1 };
queue<pair<int, int>> q;

void bfs(int x, int y,int w, int h, int* cnt) {
	int c = *cnt;
	q.push(make_pair(x, y));
	visit[x][y] = c;
	

	while (!q.empty())
	{
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0;i < 8;i++)
		{
			int newx = x + dx[i];
			int newy = y + dy[i];
			if(newx >= 0 && newy >= 0 && newx < h && newy < w)
			if (a[newx][newy] == 1 && visit[newx][newy] == 0)
			{
				q.push(make_pair(newx, newy));
				visit[newx][newy] = c;
			}
		}
	}
}

int main() {
	int w, h, cnt;
	
	while (true) {
		
		cnt = 1;
		scanf("%d %d", &w, &h);
		if (w == 0 && h == 0)
			break;

		for (int i = 0;i < h;i++)
			for (int j = 0;j < w;j++) {
				scanf("%d", &a[i][j]);
				visit[i][j] = 0;
			}

		for (int i = 0;i < h;i++)
			for (int j = 0;j < w;j++)
				if (a[i][j] == 1 && visit[i][j] == 0) {
					bfs(i, j, w, h, &cnt);
					cnt++;
			}



		
		int res = 0;
		for (int i = 0;i < h;i++)
			for (int j = 0;j < w;j++)
				if (res < visit[i][j])
					res = visit[i][j];

		printf("%d\n", res);
	}
	return 0;
}