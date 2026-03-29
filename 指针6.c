#include <stdio.h>
void han(int *x ,int *y){
	if(*x>*y){
		printf("%d",*x);
	} else if(*x<=*y){
		printf("%d",*y);
	}

}

int main(){
	printf("输入x的值\n");
	int a=0,b=0;
	scanf("%d",&a);
	
	printf("输入b的值\n");
	scanf("%d",&b);
	
	han(&a,&b);
	
	return 0;
}

















