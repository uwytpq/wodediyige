/**
 * 文件名：07_pointer.c
 * 功能：指针基础语法
 * 包括：定义指针、取地址、解引用、指针与数组、指针运算
 */

#include <stdio.h>

int main() {
    // 1. 指针的基本用法
    int a = 10;
    int *p = &a;          // p 指向 a 的地址
    printf("a = %d\n", a);
    printf("&a = %p\n", &a);
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);  // 解引用，获取 a 的值

    // 2. 通过指针修改变量
    *p = 20;
    printf("修改后 a = %d\n", a);

    // 3. 指针与数组
    int arr[3] = {100, 200, 300};
    int *q = arr;           // 数组名就是首元素地址，等价于 &arr[0]
    printf("arr[0] = %d\n", *q);
    printf("arr[1] = %d\n", *(q + 1));
    printf("arr[2] = %d\n", *(q + 2));

    // 4. 指针遍历数组
    printf("数组元素：");
    int i=0;
    for ( i = 0; i < 3; i++) {
        printf("%d ", *(q + i));
    }
    printf("\n");

    return 0;
}
