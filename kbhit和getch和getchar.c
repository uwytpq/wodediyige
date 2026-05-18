/**
 * 文件名：16_kbhit_getch_getchar.c
 * 功能：演示 kbhit(), getch(), getchar() 的使用及区别
 * 头文件：conio.h (Windows) 用于 kbhit 和 getch
 *        stdio.h 用于 getchar
 */

#include <stdio.h>
#include <conio.h>  // kbhit, getch

int main() {
    printf("=== getchar() 示例 ===\n");
    printf("请输入一个字符，然后按回车：");
    char c1 = getchar();               // 需要按回车才结束
    printf("您输入了：%c\n", c1);
    // 清空缓冲区（吃掉回车）
    while (getchar() != '\n');

    printf("\n=== getch() 示例 ===\n");
    printf("请任意按一个键（无需回车）：");
    char c2 = getch();                 // 立即读取，不显示按键
    printf("\n您按下了：%c (ASCII码：%d)\n", c2, c2);

    printf("\n=== kbhit() + getch() 示例（不阻塞循环） ===\n");
    printf("按任意键继续，5秒内没按则自动退出...\n");
    int time = 0;
    while (time < 50) {                // 模拟延时（约5秒，每0.1秒检测一次）
        if (kbhit()) {                 // 如果有按键按下
            char ch = getch();         // 获取按键
            printf("\n检测到按键：%c\n", ch);
            break;
        }
        Sleep(100);                    // 延时100毫秒（需要 windows.h）
        time++;
        if (time % 10 == 0) printf(".");
    }
    if (time >= 50) printf("\n超时未按键\n");

    return 0;
}
