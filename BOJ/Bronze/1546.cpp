#include <iostream>
#include <vector>
using namespace std;

double N, M = 0;
vector <double>point;
vector <double> new_point;

void input() {
	cin >> N;
	point.resize(N);
	new_point.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> point[i];
		if (M < point[i])
			M = point[i];
	}
}

double solve() {
	double sum = 0;
	for (int i = 0; i < N; i++) {
		new_point[i] = point[i] / M * 100;
		sum += new_point[i];
	}
	return sum / N;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	input();
	cout << solve() << '\n';
}