//퀵정렬 알고리즘
//분할 정복 알고리즘을 사용
//일반적으로 가장 빠른 알고리즘
//평균 속도 O(N*logN)
//최악의 경우 O(N*N)

//다음의 숫자들을 오름차순으로 정렬하는 프로그램을 작성하시오
//1 10 5 8 7 6 4 3 2 9

//특정한 숫자를 기준으로 반을 나눈다. // 분할 정복
// <3>을 기준으로 왼쪽을 기준으로 3보다 큰 값을 찾는다.
// <3>을 기준으로 오른쪽 부터 3보다 작은 값을 찾는다.
// 찾았으면 큰 값과 작은 값을 바꿔준다.(이 작업을 반복한다.)
// <3> 7 8 1 5 9 6 10 2 4 
// <3> 2 8 1 5 9 6 10 7 4
// <3> 2 1 8 5 9 6 10 7 4
// 더이상 찾을 수 없는 상황이라면 작은 값들 보단 앞으로 3을 위치 시킨다.
// <2> 1 3 <8> 5 9 6 10 7 4
// 앞 부분과 뒷 부분으로 나뉘면 2와 8을 또 기준으로 삼는다.
// 그리고 앞의 연산을 반복해준다.
// 1 <2> 3 <8> 5 9 6 10 7 4
// 1 2 3 <8> 5 9 6 10 7 4
// 1 2 3 은 정렬이 된 상태이다
// 3을 했을때 처럼 또한 반복해주면 된다.
// 1 2 3 <8> 5 9 6 10 7 4
// 1 2 3 <8> 5 4 6 10 7 9
// 1 2 3 <8> 5 4 6 7 10 9
// 1 2 3 7 5 4 6 <8> 10 9
// 1 2 3 <7> 5 4 6 8 <10> 9
//........

#include<stdio.h>
int number = 10;
int data[10] = { 1,10,5,8,7,6,4,3,2,9 };

void quickSort(int *data, int start, int end) {
	if (start >= end) { // 원소가 1개인 경우
		return;
	}
	int key = start; // 키는 첫번째 원소
	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j) {//엇갈릴 때까지 반복
		while (data[i] <= data[key]) {
			i++;
		}
		while (data[j] >= data[key] && j >start) {
			j--;
		}
		if (i > j) {
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else {
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}

	}
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

int main()
{
	quickSort(data, 0, number - 1);
	for (int i = 0; i < number; i++)
		printf("%d ", data[i]);
	return 0;
}
