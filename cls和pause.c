/**
 * 文件名：10_clear_pause.c
 * 功能：清屏和暂停（Windows 控制台）
 * 包含：system("cls") 清屏，system("pause") 暂停
 */

#include <stdio.h>
#include <stdlib.h>   // system 函数

int main() {
    printf("第一行文字\n");
    printf("按回车键清屏...\n");
    getchar();               // 等待用户按回车

    system("cls");           // 清屏（清除所有输出）

    printf("屏幕已清空！\n");
    printf("按任意键退出...\n");
    system("pause");         // 显示“按任意键继续...”并等待

    return 0;
}
