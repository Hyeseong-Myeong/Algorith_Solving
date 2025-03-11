#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int Wnum = 0;
int Bnum = 0;
int map[130][130];

void cut(int ns, int ms, int ne, int me)
{
	int check = map[ns][ms];

	for (int i = ns; i < ne; ++i) {
		for (int j = ms; j < me; ++j) {
			if (check == 0 && map[i][j] == 1) {
				check = 2;
			}
			else if (check == 1 && map[i][j] == 0) {
				check = 2;
			}
			if (check == 2) {
				cut(ns, ms, (ns + ne) / 2, (ms + me) / 2);
				cut((ns + ne) / 2, (ms + me) / 2, ne, me);
				cut(ns, (ms + me) / 2, (ns + ne) / 2, me);
				cut((ns + ne) / 2, ms, ne, (ms + me) / 2);
				return;
			}
		}
	}

	if (check == 0) {
		++Wnum;
	}
	else if (check == 1) {
		++Bnum;
	}

	return;
}

int main() {
	int n;
	cin >> n;

	memset(map, 0, sizeof(map));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> map[i][j];
		}
	}

	cut(0, 0, n, n);

	cout << Wnum << endl;
	cout << Bnum << endl;

	return 0;
}