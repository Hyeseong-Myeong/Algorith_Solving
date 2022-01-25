#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N;
vector<int> ch_list;
//adjacency matrix
vector<vector<int>> arr;
vector<vector<int>> result_arr;
queue<int> Q;

void input() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> N;
	arr.resize(N);
	//N*N 2D Matrix
	result_arr.assign(N, vector<int>(N, 0));
	int temp;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> temp;
			if (temp == 0)
				continue;
			else if(temp == 1){
				arr[i].push_back(j);
			}
		}
	}
}

void qpush(int num) {
	ch_list[num] = 1;
	for (int j = 0; j < arr[num].size(); j++) {
		int temp = arr[num][j];
		if(ch_list[temp] == 0)
			Q.push(arr[num][j]);
	}
	
}

void solve() {
	for (int i = 0; i < N; i++) {
		ch_list.clear();
		ch_list.resize(N);
		for (int j = 0; j < arr[i].size(); j++) {
			Q.push(arr[i][j]);
		}
		while (!Q.empty()) {
			int num_check = Q.front();
			Q.pop();
			qpush(num_check);
		}
		for (int j = 0; j < N; j++) {
			if (ch_list[j] == 1)
				result_arr[i][j] = 1;
		}
		
		Q = queue<int>();
		ch_list = vector<int>();
	}
}

void output() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << result_arr[i][j] << ' ';
		}
		cout << '\n';
	}
}

int main() {
	input();
	solve();
	output();

}