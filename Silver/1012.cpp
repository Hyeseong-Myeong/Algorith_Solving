#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <vector <int>> field;
vector <vector <bool>> visited;
int dfsn;
int T, M, N, K;

void input(int num) {
	int x, y;
	for (int i = 0; i < num; i++) {
		cin >> x >> y;
		field[x][y] = 1;
	}
	return;
}

void DFS(int x, int y) {
	int dx[] = { -1, 1, 0, 0 };
	int dy[] = { 0, 0, 1, -1 };
	
	visited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
			if (!visited[nx][ny] && field[nx][ny] == 1) {
				DFS(nx, ny);
			}
		}
		else
			continue;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> T;
	
	for (int i = 0; i < T; i++) {
		dfsn = 0;
		cin >> M >> N >> K;
		field.resize(M);
		visited.resize(M);
		for (int j = 0; j < M; j++) {
			field[j].resize(N);
			visited[j].resize(N);
			fill(field[j].begin(), field[j].end(), 0);
			fill(visited[j].begin(), visited[j].end(), false);
		}
		input(K);

		for (int x = 0; x < M; x++) {
			for (int y = 0; y < N; y++) {
				if (!visited[x][y] && field[x][y] == 1) {
					dfsn++;
						DFS(x,y);
				}
			}
		}

		cout << dfsn << endl;
	}
}