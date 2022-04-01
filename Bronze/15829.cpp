#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;

char word[50];
int L;
int r = 31, M = 1234567891;
int result = 0;

void input() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	string temp;

	cin >> L >> temp;
	strcpy(word, temp.c_str());
}

int hashfunc() {
	long long R = 1, sum = 0, temp;
	for (int i = 0; i < L; i++) {
		temp = ((int)word[i] - 96) * R;
		temp %= M;
		sum += temp;
		R *= 31;
		R %= M;
		sum %= M;
	}

	return sum;
}

int main() {
	input();
	result = hashfunc();
	cout << result << '\n';
}