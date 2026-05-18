#include <stdio.h>
	int main (){
		printf ("输入一个字母或数字\n");
		char a ;
		scanf (" %c",&a);
		
		if ( a >= '0' && a <= '9'){
		printf ("这是数字\n",a);
		} else if ( a >= 'A' && a <= 'Z'){
		printf("这是大写字母，小写为%c\n",a+32);
		} else if ( a >= 'a' && a <='z'){
		printf("这是小写字母，大写为%c\n",a-32);
		} else {
		printf("您输入有误，请重新输入！\n");
		}
		
		return 0;
	}




