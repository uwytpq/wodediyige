/**
 * 文件名：15_preprocessor.c
 * 功能：预处理指令示例
 * 包括：宏定义 (#define)、宏函数、条件编译 (#ifdef, #ifndef, #endif)、取消宏 (#undef)
 */

#include <stdio.h>

// 1. 定义常量宏（注意：宏名通常大写，结尾不加分号）
#define PI 3.14159
#define MAX_SIZE 100

// 2. 定义宏函数（注意：参数要加括号防止运算符优先级问题）
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// 3. 条件编译：如果未定义 DEBUG 宏，则定义它
#ifndef DEBUG
#define DEBUG 1
#endif

int main() {
    // 使用常量宏
    printf("PI = %f\n", PI);
    printf("MAX_SIZE = %d\n", MAX_SIZE);

    // 使用宏函数
    int num = 5;
    printf("SQUARE(%d) = %d\n", num, SQUARE(num));
    printf("MAX(10, 20) = %d\n", MAX(10, 20));

    // 条件编译：如果 DEBUG 宏被定义（且值非0），则输出调试信息
#if DEBUG
    printf("调试模式：程序运行中...\n");
#endif

    // 取消宏定义
    #undef PI
    // 下面这行如果取消注释会编译错误，因为 PI 已经被取消定义
    // printf("PI = %f\n", PI);

    // 重新定义 PI
    #define PI 3.14
    printf("重新定义的 PI = %f\n", PI);

    // 使用 #if 根据宏值进行条件编译
    #if MAX_SIZE > 50
        printf("MAX_SIZE 大于 50\n");
    #else
        printf("MAX_SIZE 不大于 50\n");
    #endif

    return 0;
}
