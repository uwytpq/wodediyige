/**
 * 文件名：02_operators.c
 * 功能：演示C语言的各种运算符
 * 包括：算术、关系、逻辑、赋值、条件(?:)、逗号、sizeof
 */

#include <stdio.h>

int main() {
    // ========== 1. 算术运算符 ==========
    int a = 10, b = 3;
    printf("【算术运算符】\n");
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d   (整数除法，结果截断)\n", a / b);
    printf("a %% b = %d   (取余数)\n\n", a % b);

    // ========== 2. 关系运算符（结果：1为真，0为假） ==========
    printf("【关系运算符】\n");
    printf("a > b  : %d\n", a > b);
    printf("a >= b : %d\n", a >= b);
    printf("a < b  : %d\n", a < b);
    printf("a <= b : %d\n", a <= b);
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n\n", a != b);

    // ========== 3. 逻辑运算符 ==========
    int x = 5, y = 0;
    printf("【逻辑运算符】\n");
    printf("x = %d, y = %d\n", x, y);
    printf("x && y : %d (逻辑与，两个都为真才真)\n", x && y);
    printf("x || y : %d (逻辑或，至少一个真则真)\n", x || y);
    printf("!x     : %d (逻辑非，真变假，假变真)\n\n", !x);

    // ========== 4. 赋值运算符 ==========
    int c = 10;
    printf("【赋值运算符】\n");
    printf("c = %d\n", c);
    c += 5;   // 等价于 c = c + 5
    printf("c += 5 : %d\n", c);
    c -= 3;   // 等价于 c = c - 3
    printf("c -= 3 : %d\n", c);
    c *= 2;
    printf("c *= 2 : %d\n", c);
    c /= 4;
    printf("c /= 4 : %d\n", c);
    c %= 3;
    printf("c %%= 3 : %d\n\n", c);

    // ========== 5. 条件运算符（三元运算符） ==========
    int m = 10, n = 20;
    int max = (m > n) ? m : n;   // 如果 m>n 则取 m，否则取 n
    printf("【条件运算符 ? :】\n");
    printf("m = %d, n = %d, 较大者：%d\n\n", m, n, max);

    // ========== 6. 逗号运算符（按顺序执行，取最后一个表达式的值） ==========
    int p, q, r;
    r = (p = 1, q = p + 2, p + q);   // 先执行 p=1，再 q=3，最后 r=1+3=4
    printf("【逗号运算符】\n");
    printf("r = (p=1, q=p+2, p+q) = %d\n\n", r);

    // ========== 7. sizeof 运算符（获取类型或变量占用的字节数） ==========
    printf("【sizeof 运算符】\n");
    printf("int 占 %zu 字节\n", sizeof(int));
    printf("float 占 %zu 字节\n", sizeof(float));
    printf("double 占 %zu 字节\n", sizeof(double));
    printf("char 占 %zu 字节\n", sizeof(char));
    printf("变量 m 占 %zu 字节\n\n", sizeof(m));

    // ========== 8. 类型转换 ==========
    int ia = 10, ib = 3;
    float result1 = ia / ib;          // 整数除法，结果 3.0
    float result2 = (float)ia / ib;   // 强制类型转换，得到浮点数除法结果 3.3333
    printf("【类型转换】\n");
    printf("整数除法：%d / %d = %.1f\n", ia, ib, result1);
    printf("浮点数除法：(float)%d / %d = %.1f\n", ia, ib, result2);
    
    return 0;
}
