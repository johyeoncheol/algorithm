//메모리 구조에 대한 해결
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char name[20];
	char phone[20];
	int age;
};

/////////////Server code///////////////////////////////////

int Bsearch(void* key, void* x, int xn, int size, int(*compare)(void*, void*))//int(*compare)(Person, Person) Person끼리 비교해야 하기 때문에 바꿔줘야 한다.
																			  //void* 어떤 주소든 담을수 있는 void* 가 된다.
{
	int left = 0;
	int right = xn - 1;
	int middle;

	while (left <= right) {
		middle = (left + right) / 2;
		switch (compare(key, (char*)x + (middle*size)))
		{
		case 1:
			left = middle + 1;
			break;
		case -1:
			right = middle - 1;
			break;

		case 0:
			return middle;
		}
	}
	return -1;
}

/////////////////////Client code////////////////////////////////
int compare(int* a, int* b) // callback  당하는 함수
{
	if (*a > *b)
		return 1;
	else if (*a < *b)
		return -1;
	else
		return 0;
}

int main(void)
{
	int list[10] = { 20,24,26,30,35,40,70,72,84,96 };
	int key = 30;
	int* p = (int*)bsearch(&key, list, 5, sizeof(int), (int(*)(const void*, const void*))compare); // 첫번째 인수는 찾고자하는 인수의 주소
	if (p != NULL)
		printf("%d : %d 원소 존재\n", p - list, *p);
}

//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//struct Person {
//	char name[20];
//	char phone[20];
//	int age;
//};
//
///////////////Server code///////////////////////////////////
//
//int Bsearch(void* key,void* x, int xn, int size, int(*compare)(void*,void*))//int(*compare)(Person, Person) Person끼리 비교해야 하기 때문에 바꿔줘야 한다.
////void* 어떤 주소든 담을수 있는 void* 가 된다.
//{
//	int left = 0;
//	int right = xn - 1;
//	int middle;
//
//	while (left <= right) {
//		middle = (left + right) / 2;
//		switch (compare( (char*)x+(middle*size),key))
//		{
//		case 1:
//			left = middle + 1;
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//
//		case 0:
//			return middle;
//		}
//	}
//	return -1;
//}
//
///////////////////////Client code////////////////////////////////
//int compare(Person* a, Person* b) // callback  당하는 함수
//{
//	return strcmp(a->phone, b->phone);
//
//}
//
//int main(void)
//{
//	Person list[5] = { { "홍길동","010-2345-7834",25 },
//	{ "장길산","010-2345-6734",26 },
//	{ "임꺽정","010-2345-4334",30 },
//	{ "이몽룡","010-2345-4234",22 },
//	{ "성춘향","010-2345-1234",28 },
//	};
//
//	Person key = { "","010-2345-1234",0 };
//	int idx = Bsearch(&key, list, 5, sizeof(Person), (int(*)(void*,void*))compare); // 첫번째 인수는 찾고자하는 인수의 주소
//	if (-1 != idx)
//		printf("%d : %s 원소 존재\n", idx, list[idx].phone);
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//struct Person {
//	char name[20];
//	char phone[20];
//	int age;
//};
//
//int compare(int a, int b) // callback  당하는 함수
//{
//	if (a > b) {
//		return -1;
//	}
//	else if (a < b)
//		return 1;
//	else
//		return 0;
//}
//
//
//int Bsearch(int x[], int size, int key)
//{
//	int left = 0;
//	int right = size - 1;
//	int middle;
//
//	while (left <= right) {
//		middle = (left + right) / 2;
//		switch (compare(key, x[middle]))
//		{
//		case 1:
//			left = middle + 1;
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//
//		case 0:
//			return middle;
//		}
//	}
//	return -1;
//}
///////////////////////////////////////////////////////
//
//int main(void)
//{
//	//int list[10] = { 24,50,67,69,72,75,78,80,85,90 };
//
//	int list[10] = { 90,85,80,78,75,72,69,67,50,24 };
//
//	int idx = Bsearch(list, 10/*list의 갯수*/, 85/*찾고자 하는 key의 값*/); // key를 가지고 인덱스 번호를 찾으려고 하는 함수 
//	if (-1 != idx)
//		printf("%d : %d 원소 존재\n", idx, list[idx]);
//}

//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Person {
//	char name[20];
//	char phone[20];
//	int age;
//};
//
//int compare(int a, int b)
//{
//	if (a > b) {
//		return 1;
//	}
//	else if (a < b)
//		return -1;
//	else
//		return 0;
//}
//int Bsearch(int x[], int size, int key)
//{
//	int left = 0;
//	int right = size - 1;
//	int middle;
//
//	while (left <= right) {
//		middle = (left + right) / 2;
//		switch (compare(key, x[middle]))
//		{
//		case 1:
//			left = middle + 1;
//			break;
//		case -1:
//			right = middle - 1;
//			break;
//
//		case 0:
//			return middle;
//		}
//	}
//	return -1;
//}
//
//
//int main(void)
//{
//	Person list[5] = { { "홍길동","010-2345-1234",25 },
//	{ "임꺽정","010-2345-1234",26 },
//	{ "장길산","010-2345-1234",30 },
//	{ "이몽룡","010-2345-1234",22 },
//	{ "성춘향","010-2345-1234",28 },
//	};
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("name : %s, phone : %s, age : %d\n",
//			list[i].name, list[i].phone, list[i].age);
//	}
//}