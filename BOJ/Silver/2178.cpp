#include <iostream>
#include <queue>
using namespace std;

int N, M;
int visited[101][101];
int num[101][101];
char map[101][101];
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

void input() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> map[i];
	}
}

void BFS(int x, int y) {
	visited[x][y] = 1;
	queue <pair<int, int>> Q;
	Q.push(make_pair(x, y));

	while (!Q.empty()) {
		x = Q.front().first;
		y = Q.front().second;

		Q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (0 <= nx && nx < N && 0 <= ny && ny < M) {
				if (map[nx][ny] == '1' && visited[nx][ny] == 0) {
					num[nx][ny] = num[x][y] + 1;
					visited[nx][ny] = 1;
					Q.push(make_pair(nx, ny));
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	input();
	BFS(0, 0);
	cout << num[N - 1][M - 1] + 1 << '\n';
}