#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <pair<int, int>> time;
vector <pair<int, int>> retTime;

int num;
int retNum = 0;

void input() {
	cin >> num;
	int a, b;
	for (int i = 0; i < num; i++) {
		cin >> a >> b;
		time.push_back(make_pair(a, b));
	}
}

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return a.second < b.second;
	}
}

void sortTime() {
	sort(time.begin(), time.end(), cmp);
}

void solve() {
	int fintime = 0;
	for (int i = 0; i < time.size(); i++) {
		if (time.at(i).first >= fintime) {
			fintime = time.at(i).second;
			retTime.push_back(make_pair(time.at(i).first, fintime));
			retNum++;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	input();
	sortTime();
	solve();

	cout << retNum;
}