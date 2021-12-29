#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define MAX 101

int N, R;
string nCr[MAX][MAX];

//long long int�� ������ �ʰ��ϹǷ�, ���ڿ��� ǥ���� �ڸ������� ���ϴ� ����� ���.

string addBigNum(string s1, string s2) {
	int sum = 0;
	string ret;

	while (!s1.empty() || !s2.empty() || sum) {
		if (!s1.empty()) {
			sum += s1.back() - '0';
			s1.pop_back();
		}
		if (!s2.empty()) {
			sum += s2.back() - '0';
			s2.pop_back();
		}
		ret.push_back((sum % 10) + '0');
		sum /= 10;
	}

	reverse(ret.begin(), ret.end());
	return ret;
}

string solve(int n, int r) {
	if (n == r || r == 0)
		return "1";

	string &ret = nCr[n][r];

	if (ret != "")
		return ret;
	
	ret = addBigNum(solve(n - 1, r - 1), solve(n - 1, r));
	return ret;
}

void input() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> N >> R;
}

int main() {
	input();
	cout << solve(N, R) << endl;

	return 0;
}