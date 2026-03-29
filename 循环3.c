#include <stdio.h>
int main (){
	int a=1,b=1,c,h=0;
	printf("请输入一个正整数\n");
	scanf("%d",&c);
	
	printf("斐波那契数列前%d项\n",c);
	printf("%d,%d",a,b);
	
	int i=1;
	for (i = 1;i<=c-2;i++){
		h = a+b;
		a = b;
		b = h;
		printf(",%d",h); 
	}
	
	return 0;
	
}








