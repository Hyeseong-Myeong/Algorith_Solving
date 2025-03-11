#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int N, M, V;
vector <vector<int>> list;
bool visited[1001];
queue <int> Q;

void DFS(int s) {
	if (!visited[s]) {
		visited[s] = true;
		cout << s << ' ';
		for (int i = 0; i < list[s].size(); i++) {
			if (!visited[list[s][i]]) {
				DFS(list[s][i]);
			}
		}
	}
}

void BFS(int s) {
	Q.push(s);
	visited[s] = true;
	int n;
	while(!Q.empty()) {
		n = Q.front();
		cout << n << ' ';
		Q.pop();
		for (int i = 0; i < list[n].size(); i++) {
			if (!visited[list[n][i]]) {
				visited[list[n][i]] = true;
				Q.push(list[n][i]);
			}
		}
	}
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> N >> M >> V;
	list.resize(N+ 1);

	int a, b;
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		list[a].push_back(b);
		list[b].push_back(a);
	}
	for (int i = 0; i <=N; i++) {
		sort(list[i].begin(), list[i].end());
	}

	fill(visited, visited + 1001, false);
	DFS(V);
	cout << endl;
	fill(visited, visited + 1001, false);
	BFS(V);

	return 0;
}