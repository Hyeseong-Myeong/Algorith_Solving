#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map <int, int> hashcard;
int N, M;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	cin >> N;
		
	for (int i = 0; i < N; i++) {
		int card;
		cin >> card;
		unordered_map<int, int>::iterator finditer = hashcard.find(card);
		if (finditer == hashcard.end()) {
			hashcard.insert(unordered_map<int, int>::value_type(card, 1));
		}
		else {
			finditer->second++;
		}
	}

	cin >> M;
	for (int i = 0; i < M; i++) {
		int card;
		cin >> card;
		unordered_map<int, int>::iterator finditer = hashcard.find(card);
		if (finditer == hashcard.end()) {
			cout << 0 << " ";
		}
		else {
			cout << finditer->second << " ";
		}
	}

	return 0;
}