/**
 * 文件名：11_sleep.c
 * 功能：Sleep 函数延时（单位：毫秒）
 * 头文件：windows.h
 */

#include <stdio.h>
#include <windows.h>   // Sleep 函数在此头文件中

int main() {
    printf("开始计时...\n");
    Sleep(2000);       // 暂停 2000 毫秒（2 秒）
    printf("2 秒后输出这一行\n");

    // 循环中延时 1 秒打印一次
    int i;
    for ( i = 1; i <= 3; i++) {
        printf("第 %d 秒\n", i);
        Sleep(1000);
    }

    return 0;
}
