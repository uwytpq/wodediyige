#include <stdio.h>
void han(int *x,int *y){
	int new =*x;
	*x = *y;
	*y = new;
}
	
	int main(){
		printf("输入a的值\n");
		int a=0;
		scanf("%d",&a);
		
		printf("输入b的值\n");
		int b=0;
		scanf("%d",&b);
		
		han(&a,&b);
		printf("交换后的值为%d %d",a,b); 
		
		
		
		
		return 0;
	}











