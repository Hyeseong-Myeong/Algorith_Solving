#include <iostream>
#include <queue>
#include <map>
using namespace std;

int T, k;
long long Num;
char OP;
priority_queue <long long> Qmax;
priority_queue <long long> Qmin;
map <long long, int> Qmap;

void QMAX_check() {
	while (!Qmax.empty() && Qmap[Qmax.top()] == 0) {
		Qmax.pop();
	}
}

void QMIN_check() {
	while (!Qmin.empty() && Qmap[-Qmin.top()] == 0) {
		Qmin.pop();
	}
}

void insertQ(long long num) {
	Qmap[num]++;
	Qmax.push(num);
	Qmin.push(-num);
}

void deleteQ(int num) {
	if (!Qmap.empty()) {
		if (num == 1) {
			QMAX_check();
			if (!Qmax.empty()) {
				Qmap[Qmax.top()]--;
				Qmax.pop();

			}		
		}
		else {
			QMIN_check();
			if (!Qmin.empty()) {
				Qmap[-Qmin.top()]--;
				Qmin.pop();
			}
		}
	}
}

void input() {
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> OP >> Num;
		if (OP == 'I') {
			insertQ(Num);
		}
		else {
			deleteQ(Num);
		}
	}
}

void output() {
	QMAX_check();
	QMIN_check();

	if (Qmax.empty() || Qmin.empty())
		cout << "EMPTY" << '\n';
	else
		cout << Qmax.top() << ' ' << -Qmin.top() << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	for (int i = 0; i < T; i++) {
		Qmap.clear();
		Qmax = priority_queue <long long>();
		Qmin = priority_queue <long long>();
		input();
		output();
	}

	return 0;
}