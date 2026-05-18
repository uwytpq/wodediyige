/**
 * 文件名：12_bitwise.c
 * 功能：位运算基础
 * 运算符：&  |  ^  ~  <<  >>
 * 说明：这些运算符直接操作整数的二进制位
 */

#include <stdio.h>

int main() {
    // 假设我们使用 unsigned char（1字节，0~255）来简化示例
    unsigned char a = 0b01011010;   // 二进制: 0101 1010 (十进制 90)
    unsigned char b = 0b11001100;   // 二进制: 1100 1100 (十进制 204)

    printf("a = %d (二进制 01011010)\n", a);
    printf("b = %d (二进制 11001100)\n\n", b);

    // 1. 按位与：对应位都为1时结果位为1，否则为0
    //   01011010 & 11001100 = 01001000 (十进制 72)
    unsigned char and_result = a & b;
    printf("a & b = %d (二进制 01001000)\n", and_result);

    // 2. 按位或：对应位有一个为1时结果位为1
    //   01011010 | 11001100 = 11011110 (十进制 222)
    unsigned char or_result = a | b;
    printf("a | b = %d (二进制 11011110)\n", or_result);

    // 3. 按位异或：对应位相同时结果为0，不同时结果为1
    //   01011010 ^ 11001100 = 10010110 (十进制 150)
    unsigned char xor_result = a ^ b;
    printf("a ^ b = %d (二进制 10010110)\n", xor_result);

    // 4. 按位取反：将每一位取反（0变1，1变0）
    //   ~a = 10100101 (十进制 165)
    unsigned char not_a = ~a;
    printf("~a = %d (二进制 10100101)\n", not_a);

    // 5. 左移：所有位向左移动，右边补0
    //   a << 1 = 01011010 << 1 = 10110100 (十进制 180)
    unsigned char left_shift = a << 1;
    printf("a << 1 = %d (二进制 10110100)\n", left_shift);

    // 6. 右移：所有位向右移动，左边补0（对于无符号数）
    //   a >> 1 = 01011010 >> 1 = 00101101 (十进制 45)
    unsigned char right_shift = a >> 1;
    printf("a >> 1 = %d (二进制 00101101)\n", right_shift);

    // 补充：常用技巧
    // 判断奇偶：n & 1 == 1 为奇数，==0 为偶数
    int n = 7;
    if (n & 1)
        printf("\n%d 是奇数\n", n);
    else
        printf("\n%d 是偶数\n", n);

    // 交换两个整数（不用临时变量）
    int x = 5, y = 9;
    printf("交换前：x=%d, y=%d\n", x, y);
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("交换后：x=%d, y=%d\n", x, y);

    return 0;
}
