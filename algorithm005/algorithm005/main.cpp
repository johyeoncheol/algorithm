
//#include<stdio.h>
//
//void Fibonacci(int n, int c1, int c2, int* presult)
//{
//	if (n == 1)
//		*presult = c1;
//	else if (n == 2)
//		*presult = c2;
//	else
//	{
//		int f1, f2;
//		Fibonacci(n - 1, c1, c2, &f1);
//		Fibonacci(n - 2, c1, c2, &f2);
//		*presult = f1 + f2;
//	}
//}
//
//int main()
//{
//	int result;
//	Fibonacci(5, 1, 2, &result);
//
//	printf("n : %d\n", result);
//}

//#include<stdio.h>
//
//int Fibonacci(int n, int c1, int c2)
//{
//	if (n == 1)
//		return c1;
//	else if (n == 2)
//		return c2;
//	else
//		return Fibonacci(n - 1, c1, c2) + Fibonacci(n - 2, c1, c2);
//}
//
//void main()
//{
//	printf("n : %d\n", Fibonacci(5, 1, 2));
//	printf("n : %d\n", Fibonacci(5, 2, 3));
//}