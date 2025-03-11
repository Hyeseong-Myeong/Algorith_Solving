#include <iostream>
#include <queue>
using namespace std;

#define MAX 100

int MIN(int a, int b) {
	if (a < b)
		return a;
	else
		return b;
}

int N, M;
int MAP[MAX][MAX];
int relationship[MAX][MAX];

void input() {
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		MAP[a][b] = 1;
		MAP[b][a] = 1;
	}
}

void solve() {
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			for (int k = 1; k <= N; k++) {
				if (j == k)
					continue;
				else if (MAP[j][i] != 0 && MAP[i][k]) {
					if (MAP[j][k] == 0)
						MAP[j][k] = MAP[j][i] + MAP[i][k];
					else
						MAP[j][k] = MIN(MAP[j][k], MAP[j][i] + MAP[i][k]);
				}
			}
		}
	}
}

int kb() {
	int result = 10000000;
	int person = 1;
	for (int i = 1; i <= N; i++) {
		int tmp = 0;
		for (int j = 1; j <= N; j++) {
			tmp += MAP[i][j];
		}

		if (result > tmp) {
			result = tmp;
			person = i;
		}
	}
	return person;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	input();
	solve();
	cout << kb() << '\n';
}