#include <stdio.h>

int main (){
	printf("请输入两个小数\n");
	float a = 0, b = 0;
	scanf ("%f%f",&a,&b);
	
	printf("请输入运算符号\n");
	char op ;
	scanf(" %c",&op);
	
	if (!(op == '+'|| op == '-' || op == '*' || op == '/' || op == '%')){
		printf("运算符号输入错误\n");
		return 0;
	}
	
	if (op == '/'&&b == 0){
		printf("除数不能为0\n");
		return 0;
	}
	
	if (op == '+'){
		printf("%.2f+%.2f=%.2f",a,b,a+b);
	} else if (op == '-'){
		printf("%.2f-%.2f=%.2f",a,b,a-b);
	} else if (op == '*'){
		printf("%.2f*%.2f=%.2f",a,b,a*b);
	} else if (op == '/'){
		printf("%.2f/%.2f=%.2f",a,b,a/b);
	} else {
		printf("%d % %d = %d",a,b,(int)a%(int)b);
	}
	
	
	return 0;
	
}


