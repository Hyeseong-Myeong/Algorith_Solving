#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int num;
	int time = 0;
	cin >> num;
	int* list = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> list[i];
	}
	sort(list, list + num);

	for (int i = 0; i < num; i++) {
		time = time + list[i] * (num - i);
	}

	cout << time;
}