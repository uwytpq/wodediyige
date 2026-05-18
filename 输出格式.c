#include <stdio.h>
int main(){
	int a;
	float b;
	double c;
	char d;
	char str[20];
	
	scanf("%d", &a);        // 整数要加 &
	scanf("%f", &b);        // float 用 %f
	scanf("%lf", &c);       // double 用 %lf
	scanf(" %c", &d);       // 字符前加空格，以跳过换行/空格
	scanf("%19s", str);     // 字符串不加 &，限制长度防溢出
	return 0;
}

