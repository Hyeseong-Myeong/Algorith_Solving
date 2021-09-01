#include <iostream>
#include <queue>
using namespace std;

typedef struct printerQ {
	int num;
	bool B;
};

queue <printerQ> Q;
priority_queue <int> prQ;
int T, N, M, ret;

void input() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		printerQ pq;
		pq.num = num;
		prQ.push(num);
		if (i == M) {
			pq.B = true;
			Q.push(pq);
		}
		else {
			pq.B = false;
			Q.push(pq);
		}
	}
}

int findPorder() {
	ret = 0;
	while(!prQ.empty()){
		int tnum = prQ.top();
		prQ.pop();
		for (int i = 0; i < Q.size(); i++) {
			printerQ temp = Q.front();
			if (temp.num == tnum) {
				if (temp.B == true) {
					return ret + 1;
				}
				Q.pop();
				ret++;
				break;
			}
			else {
				Q.pop();
				Q.push(temp);
			}
		}
	}
	return -1;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> T;
	for (int i = 0; i < T; i++) {
		Q = queue <printerQ>();
		input();
		cout << findPorder() << '\n';
	}
}