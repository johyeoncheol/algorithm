#include <stdio.h>
#include <stdlib.h>

struct Stack
{
	int* buf;
	int top = 0;
};

//저장되고 꺼내는 위치를 알고 있어야 한다 그 위치를 top이라고 한다. 최깃값은 0이라고 셋팅
void Push(Stack& s, int data)
{
	s.buf[s.top++] = data;
}

int Pop(Stack& s)
{
	return s.buf[--s.top];
}

void InitStack(Stack& s, int length = 100)
{
	s.buf = (int*)malloc(sizeof(int) * length);
	s.top = 0;
}
void UninitStack(Stack& s)
{
	free(s.buf);
	s.top = 0;
}

int main()
{
	Stack st;
	InitStack(st);

	Push(st, 100);
	Push(st, 200);
	Push(st, 300);

	printf("%d\n", Pop(st));
	printf("%d\n", Pop(st));
	printf("%d\n", Pop(st));
	UninitStack(st);

	Stack st2;
	InitStack(st2, 10000);
	Push(st2, 1050);
	printf("%d\n", Pop(st2));
	UninitStack(st2);
}


//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Stack
//{
//	int* buf;
//	int top = 0;
//};
//
////저장되고 꺼내는 위치를 알고 있어야 한다 그 위치를 top이라고 한다. 최깃값은 0이라고 셋팅
//void Push(Stack& s, int data)
//{
//	s.buf[s.top++] = data;
//}
//
//int Pop(Stack& s)
//{
//	return s.buf[--s.top];
//}
//
//void InitStack(Stack& s)
//{
//	s.buf = (int*)malloc(sizeof(int) * 5);
//	s.top = 0;
//}
//void UninitStack(Stack& s)
//{
//	free(s.buf);
//	s.top = 0;
//}
//
//int main()
//{
//	Stack st;
//	InitStack(st);
//
//	Push(st, 100);
//	Push(st, 200);
//	Push(st, 300);
//
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//	UninitStack(st);
//
//	Stack st2;
//	InitStack(st2);
//	Push(st2, 1050);
//	printf("%d\n", Pop(st2));
//	UninitStack(st2);
//}


//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Stack
//{
//	int buf[5];
//	int top = 0;
//};
//
////저장되고 꺼내는 위치를 알고 있어야 한다 그 위치를 top이라고 한다. 최깃값은 0이라고 셋팅
//void Push(Stack& s, int data)
//{
//	s.buf[s.top++] = data;
//}
//
//int Pop(Stack& s)
//{
//	return s.buf[--s.top];
//}
//
//void InitStack(Stack& s)
//{
//	s.top = 0;
//}
//void UninitStack(Stack& s)
//{
//	s.top = 0;
//}
//
//int main()
//{
//	Stack st;
//	InitStack(st);
//
//	Push(st, 100);
//	Push(st, 200);
//	Push(st, 300);
//
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//	UninitStack(st);
//
//	Stack st2;
//	InitStack(st2);
//	Push(st2, 1050);
//	printf("%d\n", Pop(st2));
//	UninitStack(st2);
//}

//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Stack
//{
//	int buf[5];
//	int top = 0;
//};
//
////저장되고 꺼내는 위치를 알고 있어야 한다 그 위치를 top이라고 한다. 최깃값은 0이라고 셋팅
//void Push(Stack& s, int data)
//{
//	s.buf[s.top++] = data;
//}
//
//int Pop(Stack& s)
//{
//	return s.buf[--s.top];
//}
//
//void InitStack(Stack& s)
//{
//	s.top = 0;
//}
//void UninitStack(Stack& s)
//{
//	s.top = 0;
//}
//
//int main()
//{
//	Stack st;
//	InitStack(st);
//
//	Push(st, 100);
//	Push(st, 200);
//	Push(st, 300);
//
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//	UninitStack(st);
//
//	Stack st2;
//	InitStack(st2);
//	Push(st2,1050);
//	printf("%d\n", Pop(st2));
//	UninitStack(st2);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Stack //이런걸 얼래 stack class 
//{
//	int buf[5];
//	int top = 0;
//
//	//저장되고 꺼내는 위치를 알고 있어야 한다 그 위치를 top이라고 한다. 최깃값은 0이라고 셋팅
//	void Push(Stack& s, int data)
//	{
//		buf[top++] = data;
//	}
//
//	int Pop(Stack& st)
//	{
//		return buf[--top];
//	}
//};
//
//
//int main()
//{
//	Stack st = { 0 };
//
//	st.Push(st, 100);
//	st.Push(st, 200);
//	st.Push(st, 300);
//
//	printf("%d\n", st.Pop(st));
//	printf("%d\n", st.Pop(st));
//	printf("%d\n", st.Pop(st));
//
//	Stack st2 = { 0 };
//	st.Push(st2, 1050);
//	printf("%d\n", st.Pop(st2));
//
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//struct Stack //이런걸 얼래 stack class 
//{
//	int buf[5];
//	int top = 0;
//
//	//저장되고 꺼내는 위치를 알고 있어야 한다 그 위치를 top이라고 한다. 최깃값은 0이라고 셋팅
//	void Push(int data)
//	{
//		buf[top++] = data;
//	}
//
//	int Pop()
//	{
//		return buf[--top];
//	}
//};
//
//
//int main()
//{
//	Stack st = { 0 };
//
//	st.Push(100);
//	st.Push(200);
//	st.Push(300);
//
//	printf("%d\n", st.Pop());
//	printf("%d\n", st.Pop());
//	printf("%d\n", st.Pop());
//
//	Stack st2 = { 0 };
//	st2.Push(1050);
//	printf("%d\n", st2.Pop());
//
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//struct Stack //이런걸 얼래 stack class 
//{
//	int buf[5];
//	int top = 0;
//
//	//저장되고 꺼내는 위치를 알고 있어야 한다 그 위치를 top이라고 한다. 최깃값은 0이라고 셋팅
//	void Push(int data)
//	{
//		buf[top++] = data;
//	}
//
//	int Pop()
//	{
//		return buf[--top];
//	}
//};
//
//
//int main()
//{
//	Stack st = { 0 };
//
//	st.Push(100);
//	st.Push(200);
//	st.Push(300);
//
//	printf("%d\n", st.Pop());
//	printf("%d\n", st.Pop());
//	printf("%d\n", st.Pop());
//
//	Stack st2 = { 0 };
//	st2.Push(1050);
//	printf("%d\n", st2.Pop());
//
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//struct Stack //이런걸 얼래 stack class 
//{
//	int buf[5];
//	int top = 0;
//
//	//저장되고 꺼내는 위치를 알고 있어야 한다 그 위치를 top이라고 한다. 최깃값은 0이라고 셋팅
//	void Push(Stack& s, int data)
//	{
//		buf[top++] = data;
//	}
//
//	int Pop(Stack& st)
//	{
//		return buf[--top];
//	}
//};
//
//
//int main()
//{
//	Stack st = { 0 };
//
//	st.Push(st, 100);
//	st.Push(st, 200);
//	st.Push(st, 300);
//
//	printf("%d\n", st.Pop(st));
//	printf("%d\n", st.Pop(st));
//	printf("%d\n", st.Pop(st));
//
//	Stack st2 = { 0 };
//	st.Push(st2, 1050);
//	printf("%d\n", st.Pop(st2));
//
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//struct Stack
//{
//	int buf[5];
//	int top = 0;
//};
//
////저장되고 꺼내는 위치를 알고 있어야 한다 그 위치를 top이라고 한다. 최깃값은 0이라고 셋팅
//void Push(Stack& s, int data)
//{
//	s.buf[s.top++] = data;
//}
//
//int Pop(Stack& st)
//{
//	return st.buf[--st.top];
//}
//
//int main()
//{
//	Stack st = { 0 };
//
//	Push(st, 100);
//	Push(st, 200);
//	Push(st, 300);
//
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//	printf("%d\n", Pop(st));
//
//	Stack st2 = { 0 };
//	Push(st2,1050);
//	printf("%d\n", Pop(st2));
//
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//struct Stack
//{
//	int buf[5];
//	int top = 0;
//};
//
////저장되고 꺼내는 위치를 알고 있어야 한다 그 위치를 top이라고 한다. 최깃값은 0이라고 셋팅
//void Push(int buf[], int& top, int data)
//{
//	buf[top++] = data;
//}
//
//int Pop(int buf[], int& top)
//{
//	return buf[--top];
//}
//
//int main()
//{
//	Stack st = { 0 };
//
//	Push(st.buf, st.top, 100);
//	Push(st.buf, st.top, 200);
//	Push(st.buf, st.top, 300);
//
//	printf("%d\n", Pop(st.buf, st.top));
//	printf("%d\n", Pop(st.buf, st.top));
//	printf("%d\n", Pop(st.buf, st.top));
//
//	Stack st2 = { 0 };
//	Push(st2.buf, st2.top, 1050);
//	printf("%d\n", Pop(st2.buf, st2.top));
//
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//struct Stack
//{
//	int buf[5];
//	int top = 0;
//};
//
////저장되고 꺼내는 위치를 알고 있어야 한다 그 위치를 top이라고 한다. 최깃값은 0이라고 셋팅
//void Push(int buf[], int& top, int data)
//{
//	buf[top++] = data;
//}
//
//int Pop(int buf[], int& top)
//{
//	return buf[--top];
//}
//
//int main()
//{
//	Stack st = {0};
//
//	Push(st.buf, st.top, 100);
//	Push(st.buf, st.top, 200);
//	Push(st.buf, st.top, 300);
//
//	printf("%d\n", Pop(st.buf, st.top));
//	printf("%d\n", Pop(st.buf, st.top));
//	printf("%d\n", Pop(st.buf, st.top));
//
//	int buf5[5];
//	int top5 = 0;
//	Push(buf5, top5, 1050);
//	printf("%d\n", Pop(buf5, top5));
//
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//
////저장되고 꺼내는 위치를 알고 있어야 한다 그 위치를 top이라고 한다. 최깃값은 0이라고 셋팅
//void Push(int buf[], int& top, int data)
//{
//	buf[top++] = data;
//}
//
//int Pop(int buf[], int& top)
//{
//	return buf[--top];
//}
//
//int main()
//{
//	int buf[5];
//	int top = 0;
//
//	Push(buf, top, 100);
//	Push(buf, top, 200);
//	Push(buf, top, 300);
//
//	printf("%d\n", Pop(buf, top));
//	printf("%d\n", Pop(buf, top));
//	printf("%d\n", Pop(buf, top));
//
//	int buf5[5];
//	int top5 = 0;
//	Push(buf5, top5, 1050);
//	printf("%d\n", Pop(buf5, top5));
//
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//
////저장되고 꺼내는 위치를 알고 있어야 한다 그 위치를 top이라고 한다. 최깃값은 0이라고 셋팅
//void Push(int buf[], int& top, int data)
//{
//	buf[top++] = data;
//}
//
//int Pop(int buf[], int& top)
//{
//	return buf[--top];
//}
//
//int main()
//{
//	int buf[5];
//	int top = 0;
//
//	Push(buf, top, 100);
//	Push(buf, top, 200);
//	Push(buf, top, 300);
//
//	printf("%d\n", Pop(buf, top));
//	printf("%d\n", Pop(buf, top));
//	printf("%d\n", Pop(buf, top));
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//
////저장되고 꺼내는 위치를 알고 있어야 한다 그 위치를 top이라고 한다. 최깃값은 0이라고 셋팅
//void Push(int buf[], int& top, int data)
//{
//	buf[top++] = data;
//}
//
//int Pop(int buf[],int& top)
//{
//	return buf[--top];
//}
//
//int main()
//{
//	int buf[5];
//	int top = 0;
//
//	Push(buf, top, 100);
//	Push(buf, top, 200);
//	Push(buf, top, 300);
//
//	printf("%d\n", Pop(buf,top));
//	printf("%d\n", Pop(buf, top));
//	printf("%d\n", Pop(buf, top));
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int buf[5];
//int top = 0;
////저장되고 꺼내는 위치를 알고 있어야 한다 그 위치를 top이라고 한다. 최깃값은 0이라고 셋팅
//void Push(int data)
//{
//	buf[top++] = data;
//}
//
//int Pop()
//{
//	return buf[--top];
//}
//
//int main()
//{
//	Push(100);
//	Push(200);
//	Push(300);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int buf[5];
//int top = 0;
////저장되고 꺼내는 위치를 알고 있어야 한다 그 위치를 top이라고 한다. 최깃값은 0이라고 셋팅
//void Push(int data)
//{
//	buf[top] = data;
//	++top;
//}
//
//int Pop()
//{
//	int data = buf[top - 1];
//	--top;
//	return data;
//}
//
//int main()
//{
//	Push(100);
//	Push(200);
//	Push(300);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//}


//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* c;
//	int* p;
//	void* v;
//
//	p = (int*)malloc(sizeof(int) * 5);
//	c = (char*)p;
//	v = (void*)c;
//
//	printf("%x %x %x\n", p, c, v);
//	printf("%x %x %x\n", p + 1, c + 1, (int*)v + 1);
//	printf("%x %x %x\n", p + 1, c + 1, (char*)v + 1);
//
//	free(p);
//}


//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* c;
//	int* p;
//	void* v;
//
//	p = (int*)malloc(sizeof(int) * 5);
//	c = (char*)p;
//	v = (void*)c;
//	printf("%x %x %x\n", p, c, v);
//	printf("%x %x %x\n", p + 1, c + 1, (char*)v + 1);
//
//	free(p);
//}
