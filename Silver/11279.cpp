#include <iostream>
#include <vector>
using namespace std;

vector <int> heap;
int n, input;

void insertMaxHeap() {
	int child = heap.size() - 1;
	while (heap[child] > heap[child / 2] && child/2 >=1) {
		swap(heap[child], heap[child / 2]);
		child /= 2;
	}
}

void deleteMaxHeap() {
	swap(heap[1], heap[heap.size() - 1]);
	heap.pop_back();
	int parent = 1;
	int child = parent * 2;

	if (child + 1 <= heap.size() - 1) {//���ǿ� error �߻�
		child = (heap[child] > heap[child + 1]) ? child : child + 1;
	}

	while (child <= heap.size() - 1 && heap[child] > heap[parent]) {
		swap(heap[child], heap[parent]);
		child *= 2;

		if (child + 1 <= heap.size() - 1) {
			child = (heap[child] > heap[child + 1]) ? child : child + 1;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	int n;
	cin >> n;
	heap.push_back(0);

	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input == 0) {
			if (heap.size() == 1) {
				cout << 0 << endl;
			}
			else {
				cout << heap[1] << endl;
				deleteMaxHeap();
			}
		}
		else {
			heap.push_back(input);
			insertMaxHeap();
		}
	}

}