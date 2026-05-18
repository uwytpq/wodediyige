/**
 * 文件名：13_function.c
 * 功能：函数基础
 * 包括：函数定义、声明、调用、参数传递（值传递与指针传递）、返回值
 */

#include <stdio.h>

// 函数声明（告诉编译器函数存在，定义在后面也可以）
int add(int x, int y);
void swap(int *p, int *q);
void printArray(int arr[], int n);

int main() {
    // 1. 调用 add 函数（值传递）
    int a = 10, b = 20;
    int sum = add(a, b);
    printf("add(%d, %d) = %d\n", a, b, sum);

    // 2. 调用 swap 函数（指针传递，可修改实参）
    int x = 5, y = 9;
    printf("交换前：x = %d, y = %d\n", x, y);
    swap(&x, &y);   // 传递地址
    printf("交换后：x = %d, y = %d\n", x, y);

    // 3. 数组作为函数参数（传递的是首地址）
    int arr[5] = {1, 2, 3, 4, 5};
    printf("数组元素：");
    printArray(arr, 5);

    return 0;
}

// 函数定义：返回两个整数的和（值传递，不改变实参）
int add(int x, int y) {
    return x + y;
}

// 函数定义：交换两个整数的值（指针传递，可以修改实参）
void swap(int *p, int *q) {
    int tmp = *p;
    *p = *q;
    *q = tmp;
}

// 函数定义：打印数组元素（数组名退化为指针）
void printArray(int arr[], int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
