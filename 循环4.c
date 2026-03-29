#include <stdio.h>
int main (){
	printf("请输入一个正整数\n");
	float a;
	scanf("%f",&a);
	
	if (a<0){
		(a = -a);
	}
	
	if (a==0){
		printf("这个数是一位数\n");
		return 0;
	}
	
	int i=0;
	for (i=0;a>=1;i++){
		a = a/10;
	
	}

	printf("这个数是%d位数\n",i);
	return 0;	
	
}









