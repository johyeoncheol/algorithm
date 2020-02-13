//버블 정렬
//다음의 숫자들을 오름차순으로 정렬하는 프로그램을 작성하시오
//1 10 5 8 7 6 4 3 2 9

//옆에 있는 값과 비교해서 더 작은 값을 앞으로 보낸다.
// 옆에 있는 값과 비교해서 더 작은 값을 반복적으로 앞으로 보내는 정렬방법
// 정렬알고리즘중에서 가장 비효율적인 알고리즘

#include<stdio.h>

int main()
{
	int temp;
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9-i; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
		printf("%d ", array[i]);

	return 0;
}

//시간 복잡도
// 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 +1
// O(N*N)
// 그러나 계속 바꾸는 작업을 하기 때문에 실제로는 더 비효율적