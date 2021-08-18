#include <iostream>
using namespace std;

string S;
int n, m;
int ret = 0;
char temp = 'I';

void togle() {
	if (temp == 'I')
		temp = 'O';
	else
		temp = 'I';
}

void IOIOI() {
	for (int i = 0; i < m - n; i++) {
		temp = 'I';
		for (int j = 0; j < n; j++) {
			if (S[i + j] == temp) {
				togle();
				if(j == n - 1)
					ret++;
			}else
					break;
		}
	}
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> n >> m;
	cin >> S;
	n = 2*n + 1;
	IOIOI();
	cout << ret << endl;
}