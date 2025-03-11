#include <iostream>
#include <cstring>
using namespace std;

bool S[20] = { false, };

void add(int n) {
	if (!S[n - 1]) {
		S[n - 1] = true;
	}
}

void remove(int n) {
	if (S[n - 1]) {
		S[n - 1] = false;
	}
}

void check(int n) {
	if (S[n - 1]) {
		cout << 1 << '\n';
	}
	else {
		cout << 0 << '\n';
	}
}

void toggle(int n) {
	if (S[n - 1]) {
		S[n - 1] = false;
	}
	else {
		S[n - 1] = true;
	}
}

void all() {
	memset(S, true, 20);
}

void empty() {
	memset(S, false, 20);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		string str;
		int n;
		cin >> str;

		if (str == "add") {
			cin >> n;
			add(n);
		}
		else if (str == "remove") {
			cin >> n;
			remove(n);
		}
		else if (str == "check") {
			cin >> n;
			check(n);
		}
		else if (str == "toggle") {
			cin >> n;
			toggle(n);
		}
		else if (str == "all") {
			all();
		}
		else if (str == "empty") {
			empty();
		}
	}
}