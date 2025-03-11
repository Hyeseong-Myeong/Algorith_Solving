#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <vector <int>> map;
vector <vector <bool>> visited;
vector <int> Hnum;
int N;

void input() {
	cin >> N;
	map.resize(N);
	visited.resize(N);
	for (int i = 0; i < N; i++) {
		string num;
		cin >> num;
		for (int j = 0; j < N; j++) {
			map[i].push_back(num[j] - 48);
			visited[i].push_back(false);
		}
	}
}

int dx[] = { 1, -1, 0, 0 };
int dy[] = { 0, 0 , 1, -1 };

void DFS(int x, int y) {
	visited[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && ny >= 0 && nx < N && ny < N && map[nx][ny] == 1 && visited[nx][ny] == false)
			DFS(nx, ny);
	}
	Hnum[Hnum.size() - 1]++;
}


void output() {
	sort(Hnum.begin(), Hnum.end());
	cout << Hnum.size() << '\n';
	for (int i = 0; i < Hnum.size(); i++) {
		cout << Hnum[i] << '\n';
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	input();
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j] && map[i][j] == 1) {
				Hnum.push_back(0);
				DFS(i, j);
			}	
		}
	}
	output();
}