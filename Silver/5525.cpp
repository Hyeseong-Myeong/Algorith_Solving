#include <iostream>
#include <vector>
using namespace std;

string S, temp = "I";
int n, m;
int cnt = 0, ret = 0;
vector<int> list;

void IOIOI() {
	for (int i = 0; i < m - 2; i++) {
		if (S[i] == 'I' && S[i + 1] == 'O' && S[i + 2] == 'I') {
			cnt++;
			i++;
		}
		else {
			if (cnt != 0) {
				list.push_back(cnt);
				cnt = 0;
			}
		}
	}
	if (cnt != 0)
		list.push_back(cnt);

	for (int i = 0; i < list.size(); i++) {
		if (n <= list[i])
			ret = ret + list[i] - n + 1;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> n >> m;
	cin >> S;
	
	for (int i = 0; i < n; i++) {
		temp += "OI";
	}

	IOIOI();
	cout << ret << endl;
}