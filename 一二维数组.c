/**
 * 文件名：05_array_simple.c
 * 功能：一维数组和二维数组的基础语法
 */

#include <stdio.h>

int main() {
    // 一维数组
    int arr[5] = {1, 2, 3, 4, 5};
    printf("一维数组：");
    int i=0;
    for ( i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 修改元素
    arr[0] = 100;
    printf("修改后 arr[0] = %d\n", arr[0]);

    // 二维数组
    int j=0;
    int matrix[2][3] = {{1,2,3}, {4,5,6}};
    printf("二维数组：\n");
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // 修改二维数组元素
    matrix[1][2] = 99;
    printf("修改后 matrix[1][2] = %d\n", matrix[1][2]);

    return 0;
}
