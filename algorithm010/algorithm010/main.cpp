//선택 정렬
// 정렬 만큼 알고리즘의 효율성 차이를 극명하게 보여주는 것이 없기 때문
// 다음의 숫자들을 오름차순으로 만들어 줘라
// 1 10 5 8 7 6 4 3 2 9 

#include<stdio.h>

int main()
{
	int i, j, min, index, temp;
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };
	
	for (i = 0; i < 10; i++)
	{
		min = 9999;
		for (j = i; j < 10; j++) {
			if (min > array[j])
			{
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for (i = 0; i < 10; i++)
		printf("%d ", array[i]);
	return 0;
}

//// 시간 복잡도
//
//10+9+8+7+6+5+4+3+2+1
//=> 10*(10+1)/2 =55
//=> N*(N+1)/2 
//=> O(N*N)