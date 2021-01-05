/*���� ó���ϴ� ���� ����п��� ����� �߿��� ���̴�.����п��� N���� ���� ��ǥ�ϴ� �⺻ ��谪���� ������ ���� �͵��� �ִ�.��, N�� Ȧ����� ��������.

������ : N���� ������ ���� N���� ���� ��
	�߾Ӱ� : N���� ������ �����ϴ� ������ �������� ��� �� �߾ӿ� ��ġ�ϴ� ��
	�ֺ� : N���� ���� �� ���� ���� ��Ÿ���� ��
	���� : N���� ���� �� �ִ񰪰� �ּڰ��� ����
	N���� ���� �־����� ��, �� ���� �⺻ ��谪�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void) {
	int n, arr[8001], max = 0;
	double sum = 0;
	int mode; //�ֺ�
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

	double Amean = sum / n; //������
	int mid = list[n/2]; //�߾Ӱ�
	int range = list[list.size() - 1] - list[0]; //����

	printf("%.0f\n", Amean);
	printf("%d\n", mid);
	printf("%d\n", mode);
	printf("%d\n", range);

}