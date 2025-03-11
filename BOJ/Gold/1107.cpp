#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;

int MAX = 1000001;
int INF = 987654321;

int N, M;
vector <int> broken;

int change100() {
	return abs(N - 100);
}

bool direct(int num) {
	if (num == 0) {
		if (find(broken.begin(), broken.end(), 0) == broken.end())
			return true;
		else
			return false;
	}
	while (num != 0) {
		if (find(broken.begin(), broken.end(), num % 10) != broken.end())
			return false;
		num /= 10;
	}
	return true;
}

int lengthpush(int num) {
	if (num == 0)
		return 1;
	int ret = 0;
	while (num != 0) {
		num /= 10;
		ret++;
	}
	return ret;
}

int changenum() {
	int ret = INF;
	int sim = 0;

	for (int i = 0; i < MAX; i++) {
		if (direct(i)) {
			int clicknum = abs(N - i);
			if (ret > clicknum) {
				ret = clicknum;
				sim = i;
			}
		}
	}

	return ret + lengthpush(sim);
}

void input() {
	cin >> N >> M;
	int temp;
	for (int i = 0; i < M; i++) {
		cin >> temp;
		broken.push_back(temp);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	input();
	cout << min(change100(), changenum()) << '\n';
	
	return 0;
}