#include <iostream>
using namespace std;

int alphabet_num[26] = { 0, };
int max_num = 0;
string word;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> word;
	int len = word.length();
	for (int i = 0; i < len; i++) {
		if (word[i] <= 'Z') {
			alphabet_num[word[i] - 65]++;
		}
		else {
			alphabet_num[word[i] - 97]++;
		}
	}

	char ret;
	for (int i = 0; i < 26; i++) {
		if (alphabet_num[i] == max_num) {
			ret = '?';
		}
		else if (alphabet_num[i] > max_num) {
			max_num = alphabet_num[i];
			ret = 'A' + i;
		}
	}
	cout << ret << '\n';
	return 0;

}