// 삽입정렬
//각 숫자를 적절한 위치에 삽입하는 방법
// 데이터가 이미 거의 정렬된 상태에 한해서는 어떤 알고리즘 보다도 빠르다는 특징을 가진다.
//다음의 숫자들을 오름차순으로 정렬하는 프로그램을 만드시오
//1 10 5 8 7 6 4 3 2 9

#include<stdio.h>

int main() {
	int j,temp;
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };
	for (int i = 0; i < 9; i++) {
		j = i;
		while (array[j] > array[j + 1]) {
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;
		}
	}
	for (int i = 0; i < 10; i++)
		printf("%d ", array[i]);
	return 0;
}

// 시간 복잡도 O(N*N)