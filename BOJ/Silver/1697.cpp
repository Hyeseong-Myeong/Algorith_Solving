#include <iostream>
#include <queue>
using namespace std;

bool visited[100001];
int N, M;
queue <int> q;

int BFS(int n, int m) {
	int answer = 0;
	q.push(n);

	while (!q.empty()) {
		int size = q.size();

		for (int i = 0; i < size; i++) {
			n = q.front();
			q.pop();
			if (n == m) {
				return answer;
			}

			if (n > 0 && visited[n - 1] == false) {
				q.push(n - 1);
				visited[n - 1] = true;
			}
			if (n < 100000 && visited[n + 1] == false) {
				q.push(n + 1);
				visited[n + 1] = true;
			}
			if (n * 2 <= 100000 && visited[n * 2] == false) {
				q.push(n * 2);
				visited[n * 2] = 1;
			}
		}
		answer++;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> N >> M;
	cout << BFS(N, M);

	return 0;
}