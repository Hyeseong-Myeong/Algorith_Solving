#include <iostream>
#include <math.h>
using namespace std;

int sum = 0;
int num = 0;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	for (int i = 0; i < 5; i++) {
		cin >> num;
		sum += (int)pow(num, 2) % 10;
	}
	cout << sum % 10;

}