#include <iostream>
using namespace std;

int N;
string Nums;
int sum = 0;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> N;
	cin >> Nums;
	for (int i = 0; i < N; i++) {
		sum += Nums[i] - '0';
	}
	cout << sum << '\n';

}