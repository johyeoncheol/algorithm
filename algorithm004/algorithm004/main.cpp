//#include<stdio.h>
//
//int Factorial(int n)
//{
//	if (n == 1)
//		return 1;
//
//	return Factorial(n - 1) * n;
//}
//int main()
//{
//	int total = Factorial(5);
//	printf("%d\n", total);
//}


////��� �Լ��� �ൿ�� ���������� ���°��� �ٸ���!!
////���� ������ ������ �ϸ� �������ǿ� �����ؾ� �Ѵ�.
//#include<stdio.h>
//void Print(int n)
//{
//	printf("+%d\n", n);
//	if (n > 0)
//	{
//		for (int i = 0; i < r; ++i)
//			Print (n - 1);
//	}
//	printf("-%d\n", n);
//
//}
//int main()
//{
//	Print(5);
//}

//
////��� �Լ��� �ൿ�� ���������� ���°��� �ٸ���!!
////���� ������ ������ �ϸ� �������ǿ� �����ؾ� �Ѵ�.
//#include<stdio.h>
//void Print(int n)
//{
//	printf("+%d\n", n);
//	if (n > 0)
//	{
//		Print(n - 1);
//		Print(n - 1);
//		Print(n - 1);
//	}
//	printf("-%d\n", n);
//
//}
//int main()
//{
//	Print(5);
//}

//
////��� �Լ��� �ൿ�� ���������� ���°��� �ٸ���!!
////���� ������ ������ �ϸ� �������ǿ� �����ؾ� �Ѵ�.
//#include<stdio.h>
//void Print(int n)
//{
//	printf("+%d\n", n);
//	if (n > 1)
//	{
//		Print(n - 1);
//		Print(n - 1);
//	}
//	printf("-%d\n", n);
//
//}
//int main()
//{
//	Print(5);
//}


//��� �Լ��� �ൿ�� ���������� ���°��� �ٸ���!!
//���� ������ ������ �ϸ� �������ǿ� �����ؾ� �Ѵ�.
//#include<stdio.h>
//void Print(int n)
//{
//
//	printf("+%d\n", n);
//	if (n > 0)
//	{
//		Print(n - 1);
//		Print(n - 1);
//	}
//	printf("-%d\n", n);
//
//}
//int main()
//{
//	Print(5);
//}
//

//
////��� �Լ��� �ൿ�� ���������� ���°��� �ٸ���!!
////���� ������ ������ �ϸ� �������ǿ� �����ؾ� �Ѵ�.
//#include<stdio.h>
//void Print(int n)
//{
//	if (n<0)
//		return;
//	printf("%d\n", n);
//	Print(n - 1);
//}
//int main()
//{
//	Print(5);
//}
//
//
////
////��� �Լ��� �ൿ�� ���������� ���°��� �ٸ���!!
////���� ������ ������ �ϸ� �������ǿ� �����ؾ� �Ѵ�.
//#include<stdio.h>
//void Print(int n)
//{
//	printf("%d\n", n);
//	if (n < 10)
//		Print(n + 1);
//}
//int main()
//{
//	Print(5);
//}


//
////��� �Լ��� �ൿ�� ���������� ���°��� �ٸ���!!
////���� ������ ������ �ϸ� �������ǿ� �����ؾ� �Ѵ�.
//#include<stdio.h>
//void Print(int n)
//{
//	printf("%d\n", n);
//	if (n > 0)
//		Print(n - 1);
//}
//int main()
//{
//	Print(5);
//}


////��� �Լ��� �ൿ�� ���������� ���°��� �ٸ���!!
//#include<stdio.h>
//void Print(int n)
//{
//	printf("%d\n", n);
//	if (n > 0)
//		Print(n-1);
//}
//int main()
//{
//	Print(10);
//}

//////////////////////////////////////////////////////////////////////////////////////
//#include<stdio.h>
//
//int buf[5];
//int front = 0 /*�������� �ϴ� ��ġ*/, rear = 0/*�־����� ��ġ*/;
//
//void Push(int data)
//{
//	if ((rear + 1)%5 == front)
//		return ;//log
//	rear = (rear + 1) % 5;
//	buf[rear] = data;
//}
//
//int Pop()
//{
//	if (front == rear)
//		return -1;
//	front = (front + 1) % 5;
//	return buf[front];
//}
//
//int main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//	Push(40);
//	Push(50);
//	Push(60);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//}


//#include<stdio.h>
//
//int buf[5];
//int front = 0 /*�������� �ϴ� ��ġ*/, rear = 0/*�־����� ��ġ*/;
//
//void Push(int data)
//{
//	rear = (rear + 1) % 5;
//	buf[rear] = data;
//}
//
//int Pop()
//{
//	front = (front + 1) % 5;
//	return buf[front];
//}
//
//int main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//	Push(40);
//	Push(50);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//}

//���� ť
//#include<stdio.h>
//
//int buf[5];
//int front = 0 /*�������� �ϴ� ��ġ*/, rear = 0/*�־����� ��ġ*/;
//
//void Push(int data)
//{
//	rear = rear + 1;
//	if (rear == 5)
//		rear = 0;
//	buf[rear] = data;
//}
//
//int Pop()
//{
//	front = front + 1;
//	if (front == 5)
//		front = 0;
//	return buf[front];
//}
//
//int main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//	Push(40);
//	Push(50);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//}

//�⺻���� queue �� ����
//#include<stdio.h>
//
//int buf[5];
//int front=0 /*�������� �ϴ� ��ġ*/,rear =0/*�־����� ��ġ*/;
//
//void Push(int data)
//{
//	buf[rear++] = data;
//}
//
//int Pop()
//{
//	return buf[front++];
//}
//
//int main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//}
//


//#include<stdio.h>
//#include<queue>
//
//using namespace std;
//typedef queue<int> Queue;
//
//int main()
//{
//	Queue q;
//
//	q.push(10);
//	q.push(20);
//	q.push(30);
//
//	printf("%d\n", q.front()); q.pop();
//	printf("%d\n", q.front()); q.pop();
//	printf("%d\n", q.front()); q.pop();
//}
