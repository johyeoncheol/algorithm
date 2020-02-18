#include<stdio.h>

//������ O(N*log N)
//�������� ���������� ����� ä���� �˰���
//�ǹ����� ���� ���� �Ǳ� ������ �־��� ��츦 ������ ���� -> ������
//���������� ��Ȯ�� ������ �����ٴ� ������ �־��� ��쿡�� O(N*log N)�� ����

//�׻� ������ �����ٴ� Ư¡�� ������ �ִ�.
// 7 6 5 8 3 5 9 1
// 67 58 35 19
// 5678 1359
// 13556789

const int number = 8;
int sorted[8]; // ���� �迭�� �ݵ�� ���� �迭�� ����� ��� �Ѵ�.

void merge(int a[] , int m , int middle , int n)
{
	int i = m;
	int j = middle + 1;
	int k = m;
	//���� ������� �迭�� ����
	while (i <= middle && j <= n) {
		if (a[i] <= a[j]) {
			sorted[k] = a[i];
			i++;
		}
		else {
			sorted[k] = a[j];
			j++;
		}
		k++;
	}
	// ���� �����͵� ����
	if (i > middle) {
		for (int t = j; t <= n; t++) {
			sorted[k] = a[t];
			k++;
		}
	}
	else {
		for (int t = i; t <= middle; t++) {
			sorted[k] = a[t];
			k++;
		}
	}

	//���ĵ� �迭�� ����
	for (int t = m; t <= n; t++) {
		a[t] = sorted[t];
	}
}

//�ϴ� �����ٴ� ������ ��� �Լ��� ����� ���� ����.
void mergeSort(int a[], int m, int n) {
	// ũ�Ⱑ 1 ���� ū ���
	if (m < n) {
		int middle = (m + n) / 2;
		mergeSort(a, m, middle);//�ΰ��� ������ ����
		mergeSort(a, middle+1, n);
		merge(a, m, middle,n); // �ٽ� ��ġ�� ����
	}
}

int main(void)
{
	int array[number] = { 7,6,5,8,3,5,9,1 };
	mergeSort(array, 0, number - 1);
	for (int i = 0; i < number; i++)
		printf("%d ", array[i]);
	return 0;
}