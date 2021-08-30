#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct tmt {
	int x, y;
};

int M, N, ret = 0;
vector <vector<int>> tomato;
queue <tmt> Q;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0 , -1 };

void input() {
	cin >> N >> M;
	tomato.resize(M);
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			int k;
			cin >> k;
			tomato[i].push_back(k);
			if (tomato[i][j] == 1) {
				Q.push({ i, j });
			}
		}
	}
}

void BFS() {
	while (!Q.empty()) {
		int x = Q.front().x;
		int y = Q.front().y;
		Q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (0 <= nx && 0 <= ny && nx < M && ny < N && tomato[nx][ny] == 0) {
				tomato[nx][ny] = tomato[x][y] + 1;
				Q.push({ nx, ny });
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	input();
	BFS();

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (tomato[i][j] == 0) {
				cout << -1 << '\n';
				return 0;
			}

			if (ret < tomato[i][j])
				ret = tomato[i][j];
		}
	}

	cout << ret - 1 << '\n';
	return 0;
}