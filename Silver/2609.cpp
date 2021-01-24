#include <iostream>
using namespace std;

int GCD(int a, int b) {
	if (a % b == 0)
		return b;
	else
		return GCD(b, a % b);
}

int main() {
	int numA, numB;
	cin >> numA >> numB;
	
	int gcd = GCD(numA, numB);
	cout << gcd<< '\n' << numA * numB / gcd;
	
	return 0;
}