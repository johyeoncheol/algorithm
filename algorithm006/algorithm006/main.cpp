//////////////채우기 연습//////////////////
//#include<stdio.h>
//#include<stdlib.h>
//#include<Windows.h>
//
//int image[10][10]
//{
//	0,0,0,0,0,0,0,0,0,0,
//	0,0,0,1,1,1,1,0,0,0,
//	0,0,1,0,1,0,1,0,0,0,
//	0,0,0,0,0,0,1,0,0,0,
//	0,0,0,0,0,0,1,0,0,0,
//	0,0,5,5,5,5,0,0,0,0,
//	0,0,0,0,5,5,0,0,0,0,
//	0,0,0,0,5,0,5,0,0,0,
//	0,0,0,0,5,5,5,5,0,0,
//	0,0,0,0,0,0,5,5,5,0
//};
//
//void PrintImage(int image[][10])
//{
//	system("cls");
//	for(int i = 0 ; i<10 ;++i)
//	{
//		for (int j = 0; j < 10; ++j)
//			printf("%3d", image[i][j]);
//		printf("\n");
//	}
//	Sleep(300);
//}
//void _Fill(int image[][10], int i, int j, int newColor, int oldColor)
//{
//	if (i < 0 || i >= 10 || j < 0 || j >= 10)
//		return;
//	if (image[i][j] != oldColor)
//		return;
//	image[i][j] = newColor;
//	PrintImage(image);
//	_Fill(image, i - 1, j, newColor, oldColor);
//	_Fill(image, i , j+1, newColor, oldColor);
//	_Fill(image, i +1, j, newColor, oldColor);
//	_Fill(image, i , j-1, newColor, oldColor);
//}
//void Fill(int image[][10], int i, int j, int newColor)
//{
//	if (newColor != image[i][j])
//		_Fill(image, i, j, newColor, image[i][j]);
//}
//int main()
//{
//	Fill(image, 1, 4, 6);
//	PrintImage(image);
//}

//#include<stdio.h>
//int image[10][10]
//{
//	0,0,0,0,0,0,0,0,0,0,
//	0,0,0,1,1,1,1,0,0,0,
//	0,0,1,0,1,0,1,0,0,0,
//	0,0,0,0,0,0,1,0,0,0,
//	0,0,0,0,0,0,1,0,0,0,
//	0,0,5,5,5,5,0,0,0,0,
//	0,0,0,0,5,5,0,0,0,0,
//	0,0,0,0,5,0,5,0,0,0,
//	0,0,0,0,5,5,5,5,0,0,
//	0,0,0,0,0,0,5,5,5,0
//};
//
//void _Fill(int image[][10], int i, int j, int newColor, int oldColor)
//{
//	if (i < 0 || i >= 10 || j < 0 || j >= 10)
//		return;
//	if (image[i][i] != oldColor)
//		return;
//}
//void Fill(int image[][10], int i, int j, int newColor) 
//{
//	if(newColor != image[i][j])
//		_Fill(image, i, j, newColor, image[i][j]);
//}
//int main()
//{
//	Fill(image, 1, 4, 6);
//}