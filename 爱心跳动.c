#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

void drawHeart(int size) {
	int i, j;
	for (i = size/2; i <= size; i += 2) {
		for (j = 1; j < size - i; j += 2)
			printf(" ");
		for (j = 1; j <= i; j++)
			printf("*");
		for (j = 1; j <= size - i; j++)
			printf(" ");
		for (j = 1; j <= i; j++)
			printf("*");
			
		printf("\n");
	}
	for (i = size; i >= 1; i--) {
		for (j = i; j < size; j++)
			printf(" ");
		for (j = 1; j <= (i * 2) - 1; j++)
			printf("*");
		
		printf("\n");
	} 
}

int main() {
	int sizeState = 0;
	
	printf("爱心无限跳动！\n");
	printf("** 按任意件即可暂停程序**\n\n");
	system("pause");
	system("cls");
	
	while (1) {
		if (_kbhit()){
			break;
		}
		
		system("cls");
		printf("爱心正在跳动 （按任意键暂停）...\n\n");
		
		if (sizeState == 0) {
			drawHeart(6);
			sizeState = 1;
		} else {
			drawHeart(10);
			sizeState = 0;
		}
		
		Sleep(300);
	}
	
	system("cls");
	printf("爱心停止跳动。\n");
	system("pause");
	return 0;
}














