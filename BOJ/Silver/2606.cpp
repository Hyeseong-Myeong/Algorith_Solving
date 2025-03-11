#include <iostream>
#include <vector>
using namespace std;

int n, m;
int s, e;
int Inum = 0;

vector <vector<int>> adjArray;

void DFS(int start, bool* visited) {
	if (!visited[start]) {
		visited[start] = true;
		Inum++;
		if (!adjArray[start].empty()) {
			int size = adjArray[start].size();
			for (int i = 0; i < size; i++) {
				DFS(adjArray[start].at(i), visited);
			}
		}
		else 
			return;
	}
	else
		return;
}

void AddEdge(int start, int end) {
	adjArray[start].push_back(end);
	adjArray[end].push_back(start);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> n;
	cin >> m;
	adjArray.resize(n + 1);

	bool* visited = new bool[n+1];
//	visited = { false, };
	for (int i = 0; i <= n; i++) {
		visited[i] = false;
	}
	for (int i = 0; i < m; i++) {
		cin >> s >> e;
		AddEdge(s, e);
	}

	DFS(1, visited);

	cout << Inum - 1;

}