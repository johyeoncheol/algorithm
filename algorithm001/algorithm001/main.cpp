
//난수 연습 시간에 따라서 난수 발생
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

void main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	srand(GetTickCount()); //GetTickCount에는 Windows.h 필요
	//srand(time(NULL));// time함수에는 time.h 필요
	for (int i = 0; i < 10; ++i)
	{
		arr[i] = (rand() % 11) + 10; //rand의 값은 0~FFFF 사이의 값을 가진다 그래서 %10으로 10 이하의 나머지값을 가지게 한다.
	}
	for (int i = 0; i < 10; ++i)
		printf("%d\n", arr[i]);
}



//
////난수 연습 시간에 따라서 난수 발생
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<Windows.h>
//
//void main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	srand(GetTickCount()); //GetTickCount에는 Windows.h 필요
//	//srand(time(NULL));// time함수에는 time.h 필요
//	for (int i = 0; i < 10; ++i)
//	{
//		arr[i] = (rand() % 11) + 10; //rand의 값은 0~FFFF 사이의 값을 가진다 그래서 %10으로 10 이하의 나머지값을 가지게 한다.
//	}
//	for (int i = 0; i < 10; ++i)
//		printf("%d\n", arr[i]);
//}
//

//
////별찍기 연습
//#include<stdio.h>
//#include<stdlib.h>
//
//void PrintStarSpace(int n, int i)
//{
//	for (int j = 0; j < 2 * i + 1; ++j)
//		printf("%c", '*');
//	for (int j = 0; j < n - i - 1; ++j)
//		printf("%c", ' ');
//	printf("\n");
//}
//int main()
//{
//	int n = 10; // 별이 찍히는 행의 갯수
//	for (int i = 0; i < n; ++i)// 각 행에 별 또는 공백을 찍기 위한 for문 
//	{
//		PrintStarSpace(n, i);
//	}
//}

//#include<stdio.h>
//#include<stdlib.h>
//
////이중 동적 배열
//void main()
//{
//	////////////동적 배열을 이중으로 사용////////////////////
//	int row = 3, col = 5;
//	printf("2차원 행의 개수 입력: ");
//	scanf_s("%d", &row);
//	printf("2차원 열의 개수 입력: ");
//	scanf_s("%d", &col);
//
//	int** arr = (int**)malloc(sizeof(int*) * row);
//	for (int i = 0; i < row; ++i)
//		arr[i] = (int*)malloc(sizeof(int)*col);
//
//	//////////////////////////////////////////////////////////
//	for (int i = 0; i < row; ++i)
//		for (int j = 0; j < col; ++j)
//			arr[i][j] = ((i * 5) + (j + 1)) * 10;
//
//	for (int i = 0; i < row; ++i) {
//		for (int j = 0; j < col; ++j)
//			printf("arr[%d][%d] : %d\n", i,j, arr[i][j]);
//		printf("\n");
//	}
//
//	free(arr);
//
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//
//////Stack의 메모리는 한계가 있기 때문에 heep메모리를 쓴다.
//////heep메모리는 컴퓨터 내의 메모리의 한계까지 사용 가능하다 .
//void main()
//{
//	int* arr = (int*)malloc(sizeof(int) * 5);
//
//	arr[0] = 11;
//	for (int i = 1; i < 5; ++i)
//		arr[i] = 11 + arr[i - 1];
//
//	for (int i = 0; i < 5; ++i)
//		printf("arr[%d] : %d\n", i, arr[i]);
//
//	free(arr);
//
//}