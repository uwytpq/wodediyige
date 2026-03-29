#include <stdio.h>
void han(int *x){
	int new =*x;
	*x=5+*x;
}

int main(){
	printf("输入一个正整数\n");
	int a=0;
	scanf("%d",&a);
	
	han(&a);
	printf("%d",a);
	
	
	
	return 0;
} 










