#include<stdio.h>
#include<stdlib.h>
#include<queue>

//이진트리 -> 검색성능이 높다.
//부모노드 - 자식노드 사이의 규칙 -> 탐색 2진트리
//가장 많이 사용하는 2진 트리 - > 레드 블랙 이진트리
//루트노드(root) 가지노드(brench) 리프노드(leaf)
//싸이클이 이뤄지지 않기만 하면 트리라고 부른다.
//이진트리는 자식이 2개다 보다는 차수가 2이다라고 말한다.
//탐색이진트리 검색이진트리

struct Node {
	int data;
	Node* lChild;
	Node* rChild;
};

Node* AllocNode(int data)
{
	Node* n = (Node*)malloc(sizeof(Node));
	n->data = data;
	n->lChild = n->rChild = NULL;
	return n;
}
void Inorder(Node* root)
{
	if (root)
	{
		Inorder(root->lChild);
		printf("%d ", root->data);
		Inorder(root->rChild);
	}
}
void Preorder(Node* root)
{
	if (root)
	{
		printf("%d ", root->data);
		Preorder(root->lChild);
		Preorder(root->rChild);
	}
}
void Postorder(Node* root)
{
	if (root)
	{
		Postorder(root->lChild);
		Postorder(root->rChild);
		printf("%d ", root->data);
	}
}
void levelorder(Node* root)
{
	std::queue<Node*> q;
	if (root == NULL)
		return;

	q.push(root);

	while (!q.empty())
	{
		Node* p = q.front(); q.pop();
		printf("%d ", p->data);//1.
		if (p->lChild)
			q.push(p->lChild);//2.
		if (p->rChild)
			q.push(p->rChild);//3.
	}
}
Node* SearchTree(Node* root, int data)
{
	if (root == NULL)
		return NULL;
	if (root->data > data)
		return SearchTree(root->lChild, data);//왼쪽
	else if (root->data < data)
		return SearchTree(root->rChild, data);//오른쪽
	else
		return root;
}
Node* AddTree(Node* root, int data)
{
	if (root == NULL)
		return AllocNode(data);
	else if (root->data > data)
		root->lChild = AddTree(root->lChild, data);
	else
		root->rChild = AddTree(root->rChild, data);
	return root;
}
int main()
{
	Node* root = NULL;

	root = AllocNode(50);

	root = AddTree(root, 500);
	root = AddTree(root, 30);
	root = AddTree(root, 70);

	root = AddTree(root, 20);
	root = AddTree(root, 40);
	root = AddTree(root, 60);
	root = AddTree(root, 90);

	Node* p = SearchTree(root, 60);
	if (p)
		printf("찾은 원소: %d ", p->data);
	printf("\n");

	Inorder(root);
	printf("\n");
	Preorder(root);
	printf("\n");
	Postorder(root);
	printf("\n");
	levelorder(root);
	printf("\n");

}


//#include<stdio.h>
//#include<stdlib.h>
//#include<queue>
//
////이진트리 -> 검색성능이 높다.
////부모노드 - 자식노드 사이의 규칙 -> 탐색 2진트리
////가장 많이 사용하는 2진 트리 - > 레드 블랙 이진트리
////루트노드(root) 가지노드(brench) 리프노드(leaf)
////싸이클이 이뤄지지 않기만 하면 트리라고 부른다.
////이진트리는 자식이 2개다 보다는 차수가 2이다라고 말한다.
////탐색이진트리 검색이진트리
//
//struct Node {
//	int data;
//	Node* lChild;
//	Node* rChild;
//};
//
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->lChild = n->rChild = NULL;
//	return n;
//}
//void Inorder(Node* root)
//{
//	if (root)
//	{
//		Inorder(root->lChild);
//		printf("%d ", root->data);
//		Inorder(root->rChild);
//	}
//}
//void Preorder(Node* root)
//{
//	if (root)
//	{
//		printf("%d ", root->data);
//		Preorder(root->lChild);
//		Preorder(root->rChild);
//	}
//}
//void Postorder(Node* root)
//{
//	if (root)
//	{
//		Postorder(root->lChild);
//		Postorder(root->rChild);
//		printf("%d ", root->data);
//	}
//}
//void levelorder(Node* root)
//{
//	std::queue<Node*> q;
//	if (root == NULL)
//		return;
//
//	q.push(root);
//
//	while (!q.empty())
//	{
//		Node* p = q.front(); q.pop();
//		printf("%d ", p->data);//1.
//		if (p->lChild)
//			q.push(p->lChild);//2.
//		if (p->rChild)
//			q.push(p->rChild);//3.
//	}
//}
//int main()
//{
//	Node* root = NULL;
//	Node* p = NULL;
//
//	root = AllocNode(50);
//
//	root->lChild = AllocNode(30);
//	root->rChild = AllocNode(70);
//
//	root->lChild->lChild = AllocNode(20);
//	root->lChild->rChild = AllocNode(40);
//	root->rChild->lChild = AllocNode(60);
//	root->rChild->rChild = AllocNode(90);
//
//
//	Inorder(root);
//	printf("\n");
//	Preorder(root);
//	printf("\n");
//	Postorder(root);
//	printf("\n");
//	levelorder(root);
//	printf("\n");
//
//}


//#include<stdio.h>
//#include<stdlib.h>
//
////이진트리 -> 검색성능이 높다.
////부모노드 - 자식노드 사이의 규칙 -> 탐색 2진트리
////가장 많이 사용하는 2진 트리 - > 레드 블랙 이진트리
////루트노드(root) 가지노드(brench) 리프노드(leaf)
////싸이클이 이뤄지지 않기만 하면 트리라고 부른다.
////이진트리는 자식이 2개다 보다는 차수가 2이다라고 말한다.
////탐색이진트리 검색이진트리
//
//struct Node {
//	int data;
//	Node* lChild;
//	Node* rChild;
//};
//
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->lChild = n->rChild = NULL;
//	return n;
//}
//void Inorder(Node* root)
//{
//	if (root)
//	{
//		Inorder(root->lChild);
//		printf("%d ", root->data);
//		Inorder(root->rChild);
//
//	}
//	else
//	{
//
//	}
//}
//int main()
//{
//	Node* root = NULL;
//	Node* p = NULL;
//
//	root = AllocNode(50);
//
//	root->lChild = AllocNode(30);
//	root->rChild = AllocNode(70);
//
//	root->lChild->lChild = AllocNode(20);
//	root->lChild->rChild = AllocNode(40);
//	root->rChild->lChild = AllocNode(60);
//	root->rChild->rChild = AllocNode(90);
//
//
//	Inorder(root);
//}