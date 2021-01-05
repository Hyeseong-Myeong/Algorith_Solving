/*수를 처리하는 것은 통계학에서 상당히 중요한 일이다.통계학에서 N개의 수를 대표하는 기본 통계값에는 다음과 같은 것들이 있다.단, N은 홀수라고 가정하자.

산술평균 : N개의 수들의 합을 N으로 나눈 값
	중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
	최빈값 : N개의 수들 중 가장 많이 나타나는 값
	범위 : N개의 수들 중 최댓값과 최솟값의 차이
	N개의 수가 주어졌을 때, 네 가지 기본 통계값을 구하는 프로그램을 작성하시오.*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void) {
	int n, arr[8001], max = 0;
	double sum = 0;
	int mode; //최빈값
	bool isSecond = false;

	for (int i = 0; i < 8001; i++)
		arr[i] = 0;
	int x;
	cin >> n;
	vector <int>list;
	vector<int> vec(8001, 0);
	for (int i = 0; i < n; i++) {
		
		cin >> x;
		list.push_back(x);
		sum += list[i];

		x = (list[i] <= 0) ? abs(list[i]) : list[i] + 4000;
		vec[x]++;
		if (vec[x] > max)
			max = vec[x];
	}

	sort(list.begin(), list.end());

	for (int i = -4000; i < 4001; i++) {
		x = i <= 0 ? abs(i) : i + 4000;
		if (vec[x] == max) {
			mode = i;
			if (isSecond)
				break;
			isSecond = true;
		}
	}

	double Amean = sum / n; //산술평균
	int mid = list[n/2]; //중앙값
	int range = list[list.size() - 1] - list[0]; //범위

	printf("%.0f\n", Amean);
	printf("%d\n", mid);
	printf("%d\n", mode);
	printf("%d\n", range);

}