#include <iostream>
#include <algorithm>
using namespace std;

//시간초과
//이진탐색으로 시간복잡도 줄이기
/*
void binarySearch(int* M, int start, int end, int Num) {
	int mid;

	if (start > end) {
		cout << 0 << "\n";
		return;
	}
	else {
		mid = (start + end) / 2;
		if (M[mid] == Num)
			cout << 1 << "\n";
		else if (M[mid] > Num) {
			return binarySearch(M, start, mid - 1, Num);
		}
		else if (M[mid] < Num) {
			return binarySearch(M, mid + 1, end, Num);
		}
		else {
			cout << 0 << "\n";
			return;
		}
	}
}
*/

void binarySearch(int* arr, int start, int end, int Num) {
	int mid;

	while (end - start >= 0) {
		mid = (start + end) / 2;

		if (arr[mid] == Num) {
			printf("1 \n");
			return;
		}
		else if (arr[mid] > Num) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}

	printf("0 \n");
	return;

}

int main() {
	int m, n;

	scanf("%d", &m);
	int* M;
	M = new int[m];

	for (int i = 0; i < m; i++) {
		scanf("%d", &M[i]);
	}

	sort(M, M + m);
	int end = m;
	scanf("%d", &n);
	int* N;
	N = new int[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &N[i]);
		binarySearch(M, 0, end, N[i]);
	}
}