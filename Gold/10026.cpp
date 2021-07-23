#include <iostream>
#include <string>
#include <cstring>
using namespace std;

char pic[100][100];
bool visited[100][100];
int N;
int num = 0, RGnum = 0;

int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };

void DFS(int x, int y) {
	visited[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || ny < 0 || nx >= N || ny >= N)
			continue;
		else if (!visited[nx][ny] && pic[x][y] == pic[nx][ny]) {
			DFS(nx, ny);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	string st;

	for (int i = 0; i < N; i++) {
		cin >> st;
		for (int j = 0; j < N; j++) {
			pic[i][j] = st[j];
		}
	}

	memset(visited, false, sizeof(visited));


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j]) {
				DFS(i, j);
				num++;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (pic[i][j] == 'R')
				pic[i][j] = 'G';
			else
				continue;
		}
	}

	memset(visited, false, sizeof(visited));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j]) {
				DFS(i, j);
				RGnum++;
			}
		}
	}
	cout << num << ' ' << RGnum << endl;

	return 0;
}