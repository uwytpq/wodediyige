#include <stdio.h>

	int main (){
		printf("请输入一个3位数\n");		
		int much = 0;
		scanf ("%d",&much);
		
		if (!(much >=100 && much <=999)){
			printf("不符合要求\n");
			return 0;
		}
		
		int a = 0, b = 0, c = 0;
		a = much/100;
		b = (much-a*100)/10;
		c = much-a*100-b*10;
		
		printf("反转后的数字为%d",c*100+b*10+a);
		
		return 0;
		
	}
	
















