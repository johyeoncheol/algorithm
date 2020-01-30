


//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//void PrintList(int list[], int size)
//{
//	printf("size : %d\n", list[0]);
//	for (int i = 1; i <= size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//
//void Swap(int& a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//void Push_heap(int list[], int size)
//{
//	list[0] = size;
//	int child = size;
//	int parent = child / 2;
//
//	while (parent >= 1)
//	{
//		if (list[child] > list[parent])
//			Swap(list[child], list[parent]);
//		else
//			break;
//
//		child = parent;
//		parent = child / 2;
//	}
//}
//void Make_heap(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		Push_heap(list, ++list[0]);
//}
//void Pop_heap(int list[], int& size) //���Ҹ� ���� �������� ���� ���� �κа� ���� ���� �κ��� �ٲ��ش�.
//{
//	list[0] = --size;
//	Swap(list[1], list[size + 1]);
//	int parent = 1;
//	int child = parent * 2;
//	while (child <= size)
//	{
//		if (child < size && list[child] < list[child + 1]) //child+1�� ��ȿ�����Ͱ� �ƴҶ��� �� �۾��� �� �ʿ䰡 ����.
//			child = child + 1;
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//		parent = child;
//		child = parent * 2;
//	}
//
//}
//void Sort_heap(int list[],int size) 
//{
//	int heapSize = size;
//	for (int i = 0; i < 10; ++i)
//		Pop_heap(list, heapSize);
//}
//int main()
//{
//	int list[20] = { 0,50,70,60,25,45,92,38,76,65,58 };
//	//int list[20] = { 0,70,20,50,60,25,45,92,38,76,65 };
//	int heapSize = 10;
//
//	Make_heap(list, 10);
//	PrintList(list, 10);
//	Sort_heap(list, 10);
//	PrintList(list, 10);
//
//
//}


#include<stdio.h>
#include<algorithm>
using namespace std;

void PrintList(int list[], int size)
{
	printf("size : %d\n", list[0]);
	for (int i = 1; i <= size; ++i)
		printf("%5d", list[i]);
	printf("\n");
}

void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}
void Push_heap(int list[], int size)
{
	list[0] = size;
	int child = size;
	int parent = child / 2;

	while (parent >= 1)
	{
		if (list[child] > list[parent])
			Swap(list[child], list[parent]);
		else
			break;

		child = parent;
		parent = child / 2;
	}
}
void Make_heap(int list[], int size)
{
	for (int i = 0; i < size; ++i)
		Push_heap(list, ++list[0]);
}
//������� ���� �������� �����°��� ���!!
void Pop_heap(int list[], int& size) //���Ҹ� ���� �������� ���� ���� �κа� ���� ���� �κ��� �ٲ��ش�.
{
	list[0] = --size;
	Swap(list[1], list[size + 1]);
	int parent = 1;
	int child = parent * 2;
	while (child <= size)
	{
		if (child < size && list[child] < list[child + 1]) //child+1�� ��ȿ�����Ͱ� �ƴҶ��� �� �۾��� �� �ʿ䰡 ����.
			child = child + 1;
		if (list[parent] < list[child])
			Swap(list[parent], list[child]);
		else
			break;
		parent = child;
		child = parent * 2;
	}

}
int main()
{
	//int list[20] = { 10,50,70,60,25,45,92,38,76,65 };
	int list[20] = { 0,70,20,50,60,25,45,92,38,76,65 };
	int heapSize = 10;

	Make_heap(list, 10);
	PrintList(list, 10);

	Pop_heap(list, heapSize);
	PrintList(list, 10);

	Pop_heap(list, heapSize);
	PrintList(list, 10);

	Pop_heap(list, heapSize);
	PrintList(list, 10);


}


//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//void PrintList(int list[], int size)
//{
//	printf("size : %d\n", list[0]);
//	for (int i = 1; i < 10; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//
//void Swap(int& a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//void Push_heap(int list[], int size)
//{
//	list[0] = size;
//	int child = size;
//	int parent = child / 2;
//	
//	while (parent>=1)
//	{
//		if (list[child] > list[parent])
//			Swap(list[child], list[parent]);
//		else
//			break;
//
//		child = parent;
//		parent = child / 2;
//	}
//}
//int main()
//{
//	//int list[20] = { 10,50,70,60,25,45,92,38,76,65 };
//	int list[20] = { 3,70,20,50,60,25,45,92,38,76,65 };
//
//	int heapSize = 3;
//	PrintList(list, 10);
//
//	Push_heap(list, ++heapSize);
//	PrintList(list, 10);
//
//	Push_heap(list, ++heapSize);
//	PrintList(list, 10);
//
//	Push_heap(list, ++heapSize);
//	PrintList(list, 10);
//
//	Push_heap(list, ++heapSize);
//	PrintList(list, 10);
//
//	Push_heap(list, ++heapSize);
//	PrintList(list, 10);
//
//	Push_heap(list, ++heapSize);
//	PrintList(list, 10);
//
//	Push_heap(list, ++heapSize);
//	PrintList(list, 10);
//
//}

//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//void PrintList(int list[], int size)
//{
//	printf("size : %d", list[0]);
//	for (int i = 0; i < 10; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int main()
//{
//	int list[10] = { 10,50,70,60,25,45,92,38,76,65 };
//	int heapSize = 0;
//	PrintList(list, 10);
//
//	Push_heap(list, ++heapSize);
//
//
//
//}

//list[0] size���� �߰�
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//void PrintList(int list[], int size) 
//{
//	printf("size : %d", list[0]);
//	for (int i = 0; i < 10; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int main()
//{
//	int list[10] = { 10,50,70,60,25,45,92,38,76,65 };
//	
//	PrintList(list, 10);
//
//
//
//
//}

//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int list[10] = { 20,50,70,60,25,45,92,38,76,65 };
//	//make_heap(list, list + 10);
//
//	push_heap(list, list + 1);
//	push_heap(list, list + 2);
//	push_heap(list, list + 3);
//	push_heap(list, list + 4);
//	push_heap(list, list + 5);
//	push_heap(list, list + 6);
//	push_heap(list, list + 7);
//	push_heap(list, list + 8);
//	push_heap(list, list + 9);
//	push_heap(list, list + 10);
//
//	//sort_heap(list, list + 10);
//	pop_heap(list, list + 10);
//	pop_heap(list, list + 9);
//	pop_heap(list, list + 8);
//	pop_heap(list, list + 7);
//	pop_heap(list, list + 6);
//	pop_heap(list, list + 5);
//	pop_heap(list, list + 4);
//	pop_heap(list, list + 3);
//	pop_heap(list, list + 2);
//	pop_heap(list, list + 1);
//
//	for (int i = 0; i < 10; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//
//}

//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int list[10] = { 20,50,70,60,25,45,92,38,76,65 };
//	//make_heap(list, list + 10);
//
//	push_heap(list, list + 1);
//	push_heap(list, list + 2);
//	push_heap(list, list + 3);
//	push_heap(list, list + 4);
//	push_heap(list, list + 5);
//	push_heap(list, list + 6);
//	push_heap(list, list + 7);
//	push_heap(list, list + 8);
//	push_heap(list, list + 9);
//	push_heap(list, list + 10);
//
//	sort_heap(list, list + 10);
//
//	for (int i = 0; i < 10; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//
//}

//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int list[10] = { 20,50,70,60,25,45,92,38,76,65 };
//	//make_heap(list, list + 10);
//
//	push_heap(list, list + 1);
//	push_heap(list, list + 2);
//	push_heap(list, list + 3);
//	push_heap(list, list + 4);
//	push_heap(list, list + 5);
//	push_heap(list, list + 6);
//	push_heap(list, list + 7);
//	push_heap(list, list + 8);
//	push_heap(list, list + 9);
//	push_heap(list, list + 10);
//
//	for (int i = 0; i < 10; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//
//}

//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int list[10] = { 20,50,70,60,25,45,92,38,76,65 };
//	make_heap(list, list + 10);
//	
//	for (int i = 0; i < 10; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//
//}