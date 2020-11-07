#include <cstdio>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
 
vector <int> a[100001];
queue <int>q;
int parent[100001];
bool visit[100001];
int main() {
    int n,x,y;
    scanf("%d", &n);
    for (int i = 0;i < n-1;i++) {
        scanf("%d %d", &x, &y);
        
        a[x].push_back(y);
        a[y].push_back(x);
    }

    q.push(1);
    visit[1] = true;
    while (!q.empty()) {
        int m = q.front();
        q.pop();
        visit[m] = true;
        for (int k : a[m]) {
            if (visit[k]  != true) {
                parent[k] = m;
                q.push(k);
                visit[k] = true;
            }
            else {
                parent[m] = k;
                visit[m] = true;
            }
        }
    }
    

    for (int i = 2;i <= n;i++) {
        printf("%d\n", parent[i]);
    }
    
}