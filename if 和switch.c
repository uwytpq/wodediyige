/**
 * 文件名：03_control_flow_simple.c
 * 功能：if-else 和 switch 的基础语法
 */

#include <stdio.h>

int main() {
    // ===== if-else =====
    int a = 10;
    if (a > 0) {
        printf("a 是正数\n");
    } else {
        printf("a 不是正数\n");
    }

    // ===== if-else if-else =====
    int score = 85;
    if (score >= 90)
        printf("优秀\n");
    else if (score >= 60)
        printf("及格\n");
    else
        printf("不及格\n");

    // ===== switch =====
    int day = 3;
    switch (day) {
        case 1: printf("周一\n"); break;
        case 2: printf("周二\n"); break;
        case 3: printf("周三\n"); break;
        default: printf("其他\n");
    }

    return 0;
}
