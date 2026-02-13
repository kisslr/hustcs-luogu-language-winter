#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int INF = 0x3f3f3f3f;
int m, n;
int board[105][105];
int dist[105][105][2];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
void dfs(int x, int y, int c, int cost, int is_magic) {
    if (cost >= dist[x][y][c]) return;
    dist[x][y][c] = cost;
    if (x == m - 1 && y == m - 1) return;
    for (int i = 0; i < 4; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx >= m || ny < 0 || ny >= m) continue;
        if (board[nx][ny] != -1) {
            int new_cost = cost + (c == board[nx][ny] ? 0 : 1);
            dfs(nx, ny, board[nx][ny], new_cost, 0);
        } else if (!is_magic) {
            dfs(nx, ny, c, cost + 2, 1);
        }
    }
}
int main() {
    scanf("%d%d", &m, &n);
    memset(board, -1, sizeof(board));
    memset(dist, 0x3f, sizeof(dist));
    for (int i = 0; i < n; ++i) {
        int x, y, c;
        scanf("%d%d%d", &x, &y, &c);
        board[x - 1][y - 1] = c;
    }
    dfs(0, 0, board[0][0], 0, 0);
    int ans = min(dist[m - 1][m - 1][0], dist[m - 1][m - 1][1]);
    if (ans == INF) printf("-1");
    else printf("%d", ans);
    return 0;
}