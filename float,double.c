/* 文件名：02_float_double.c */
#include <stdio.h>
int main() {
    float price = 99.9f;          // float 类型，加 f 后缀
    double pi = 3.14159265358979; // double 类型，精度更高

    // %f 输出 float 或 double，可控制小数位数
    printf("价格：%.2f\n", price);
    printf("圆周率：%.10f\n", pi);
    return 0;
}
