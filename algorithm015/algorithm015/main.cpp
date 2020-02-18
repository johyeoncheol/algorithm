#include<stdio.h>
// 다음의 5 이하의 자연수 데이터들을 오름차순 정렬하세요
// 1 3 2 4 3 2 5 3 1 2 3 4 4 3 5 1 2 3 5 2 3 1 4 3 5 1 2 1 1 1
// 범위 조건이 있는 경우에 한해서 굉장히 빠른 알고리즘
//계수 정렬의 시간 복잡도는 O(N)입니다.
int main()
{
	int temp;
	int count[5];
	int array[30] = {
		1,3,2,4,3,2,5,3,1,2,
		3,4,4,3,5,1,2,3,5,2,
		3,1,4,3,5,1,2,1,1,1
	};

	for (int i = 0; i < 5; i++) {
		count[i] = 0;
	}
	for (int i = 0; i < 30; i++) {
		count[array[i] - 1]++;
	}
	for (int i = 0; i < 5; i++) {
		if (count[i] != 0) {
			for (int j = 0; j < count[i]; j++) {
				printf("%d ", i + 1);
			}
		}
	}

	return 0;
}