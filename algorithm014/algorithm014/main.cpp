#include<stdio.h>

//힙 정렬은 힙 트리 구조를 이용하는 정렬 방법입니다.
//완전이진트리를 사용한다. 이진트리란 노드를 두개씩 이어 붙이는 구조
// 힙은 최솟값이나 최댓값을 빠르게 찾아내기 위해 완전 이진트리 기반을 한다.
// 트리구조 자체가 탐색에 유리한 면을 가지고 있다.

//힙 정렬을 수행하기 위해서 힙 생성 알고리즘을 사용합니다.
//시간 복잡도는 O(N * logN)

const int number = 9;
int heap[9] = { 7,6,5,8,3,5,9,1,6 };

int main()
{
	// 먼저 전체 트리 구조를 최대 힙 구조로 바꿉니다.
	for (int i = 1; i < number; i++) {
		int c = i;
		do {
			int root = (c - 1) / 2;
			if (heap[root] < heap[c]) {
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;
		} while (c != 0);
	}
	// 크기를 줄여가며 반복적으로 힙을 구성
	for (int i = number - 1; i >= 0; i--) {
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		int root = 0;
		int c = 1;
		do {
			c = 2 * root + 1;
			//자식 중에 더 큰 값을 찾기
			if (heap[c] < heap[c + 1] && c < i - 1) {
				c++;
			}
			//루트보다 자식이 더 크다면 교환
			if (heap[root] < heap[c] && c < i) {
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;
		} while (c < i);
	}
 	
	for (int i = 0; i < number; i++) {
		printf("%d ", heap[i]);
	}

	return 0;
}