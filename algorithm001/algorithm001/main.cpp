
//���� ���� �ð��� ���� ���� �߻�
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

void main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	srand(GetTickCount()); //GetTickCount���� Windows.h �ʿ�
	//srand(time(NULL));// time�Լ����� time.h �ʿ�
	for (int i = 0; i < 10; ++i)
	{
		arr[i] = (rand() % 11) + 10; //rand�� ���� 0~FFFF ������ ���� ������ �׷��� %10���� 10 ������ ���������� ������ �Ѵ�.
	}
	for (int i = 0; i < 10; ++i)
		printf("%d\n", arr[i]);
}



//
////���� ���� �ð��� ���� ���� �߻�
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<Windows.h>
//
//void main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	srand(GetTickCount()); //GetTickCount���� Windows.h �ʿ�
//	//srand(time(NULL));// time�Լ����� time.h �ʿ�
//	for (int i = 0; i < 10; ++i)
//	{
//		arr[i] = (rand() % 11) + 10; //rand�� ���� 0~FFFF ������ ���� ������ �׷��� %10���� 10 ������ ���������� ������ �Ѵ�.
//	}
//	for (int i = 0; i < 10; ++i)
//		printf("%d\n", arr[i]);
//}
//

//
////����� ����
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
//	int n = 10; // ���� ������ ���� ����
//	for (int i = 0; i < n; ++i)// �� �࿡ �� �Ǵ� ������ ��� ���� for�� 
//	{
//		PrintStarSpace(n, i);
//	}
//}

//#include<stdio.h>
//#include<stdlib.h>
//
////���� ���� �迭
//void main()
//{
//	////////////���� �迭�� �������� ���////////////////////
//	int row = 3, col = 5;
//	printf("2���� ���� ���� �Է�: ");
//	scanf_s("%d", &row);
//	printf("2���� ���� ���� �Է�: ");
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
//////Stack�� �޸𸮴� �Ѱ谡 �ֱ� ������ heep�޸𸮸� ����.
//////heep�޸𸮴� ��ǻ�� ���� �޸��� �Ѱ���� ��� �����ϴ� .
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