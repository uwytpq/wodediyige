/* 文件名：06_scanf.c */
#include <stdio.h>
int main() {
    int a;
    float b;
    char c;
    char str[50];

    printf("请输入一个整数：");
    scanf("%d", &a);                 // 注意 & 符号

    printf("请输入一个浮点数：");
    scanf("%f", &b);                 // float 用 %f，double 用 %lf

    printf("请输入一个字符：");
    scanf(" %c", &c);                // 前面的空格用来吸收换行符

    printf("请输入一个字符串（不含空格）：");
    scanf("%s", str);                // 字符串不用 &，数组名就是地址

    printf("\n你输入的是：\n");
    printf("整数：%d\n", a);
    printf("浮点数：%.2f\n", b);
    printf("字符：%c\n", c);
    printf("字符串：%s\n", str);
    return 0;
}
