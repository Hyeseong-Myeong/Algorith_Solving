#include <iostream>
#include <string.h>
using namespace std;

#define min(x,y) x<=y ? x:y
#define INF 987654321

int num[1000001];

int makeone(int n) {
	if (n == 1) {
		return 0;
	}
	else if (num[n]!= -1) {
		return num[n];
	}
	int ret = INF;
	
	if (n % 2 == 0)
		ret = 1 + makeone(n / 2);
	if (n % 3 == 0)
		ret = min(ret, 1 + makeone(n / 3));
	if (n % 6 != 0)
		ret = min(ret, 1 + makeone(n - 1));

	return num[n] = ret;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	memset(num, -1, sizeof(num));

	int n;
	cin >> n;

	cout << makeone(n) << endl;
}