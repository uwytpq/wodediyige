/**
 * 文件名：06_string.c
 * 功能：字符串与字符数组的基础操作（使用 string.h 函数）
 * 包括：定义、输入、输出、strlen、strcpy、strcat、strcmp
 */

#include <stdio.h>
#include <string.h>

int main() {
    // 1. 定义字符串
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[40];

    // 2. 输出
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    // 3. 字符串长度
    printf("str1 长度: %zu\n", strlen(str1));

    // 4. 字符串复制
    strcpy(str3, str1);
    printf("复制后 str3 = %s\n", str3);

    // 5. 字符串拼接
    strcat(str3, " ");
    strcat(str3, str2);
    printf("拼接后 str3 = %s\n", str3);

    // 6. 字符串比较
    if (strcmp(str1, str2) == 0)
        printf("str1 等于 str2\n");
    else
        printf("str1 不等于 str2\n");

    // 7. 输入字符串（不含空格）
    char input[20];
    printf("请输入一个单词（不含空格）：");
    scanf("%19s", input);
    printf("你输入的是：%s\n", input);

    return 0;
}
