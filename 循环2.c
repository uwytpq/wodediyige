#include <stdio.h>
int main(){
	printf("输入一个正整数\n");
	int a ,i=1,sum=1; 
	scanf("%d",&a);
	
	
	for (i = 1;i<=a;i++){
		sum = sum*i;
	} 
	
	printf("a的阶乘为%d",sum);
	
	return 0;
	
	
	
}




