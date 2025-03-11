#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;//N is node num. M is edge num.
vector <vector <int>> GP;
bool visited[1001];
int num = 0;

void input() {
	int a, b;
	cin >> a >> b;
	GP[a].push_back(b);
	GP[b].push_back(a);
}

void DFS(int s) {
	visited[s] = true;
	for (int i = 0; i < GP[s].size(); i++) {
		if (!visited[GP[s][i]]) {
			DFS(GP[s][i]);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> N >> M;
	
	GP.resize(N + 1);
	fill(visited, visited + N, false);

	for (int i = 0; i < M; i++) {
		input();
	}

	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			num++;
			DFS(i);
		}
	}

	cout << num << endl;
}