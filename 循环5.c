#include <stdio.h>
int main (){
	printf("请输入两个正整数\n");
	int a,b,r;
	scanf("%d%d",&a,&b);
	
	if (a>b){
		while (b !=0){
			r=a%b;
			a=b;
			b=r;
		}
		printf("%d",a);
	}else if (a<b){
		while (a!=0){
			r=b%a;
			b=a;
			a=r;
		}
		printf("%d",b);
	}else {
		printf("%d，%d它们两的最大公约数为%d\n",a,b,a);
	}
	
	
	return 0;
	
	
	
	
}












