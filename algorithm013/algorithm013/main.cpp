#include<stdio.h>

//퀵정렬 O(N*log N)
//병합정렬 분할정복의 방법을 채택한 알고리즘
//피벗값에 따라서 편향 되기 때문에 최악의 경우를 가질수 있음 -> 퀵정렬
//병합정렬은 정확히 반절씩 나눈다는 점에서 최악의 경우에도 O(N*log N)을 따름

//항상 반으로 나눈다는 특징을 가지고 있다.
// 7 6 5 8 3 5 9 1
// 67 58 35 19
// 5678 1359
// 13556789

const int number = 8;
int sorted[8]; // 정렬 배열은 반드시 전역 배열로 만들어 줘야 한다.

void merge(int a[] , int m , int middle , int n)
{
	int i = m;
	int j = middle + 1;
	int k = m;
	//작은 순서대로 배열에 삽입
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
	// 남은 데이터도 삽입
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

	//정렬된 배열을 삽입
	for (int t = m; t <= n; t++) {
		a[t] = sorted[t];
	}
}

//일단 나눈다는 점에서 재귀 함수로 만드는 것이 좋다.
void mergeSort(int a[], int m, int n) {
	// 크기가 1 보다 큰 경우
	if (m < n) {
		int middle = (m + n) / 2;
		mergeSort(a, m, middle);//두개로 나누는 과정
		mergeSort(a, middle+1, n);
		merge(a, m, middle,n); // 다시 합치는 과정
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