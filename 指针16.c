#include <stdio.h>
 void fan(int *p,int *q){
 	int len=*p;
 	*p=*q;
 	*q=len;
 }
	
int main(){
	int a=0,b=0;
	printf("输入a的值\n");
	scanf("%d",&a);
	 printf("输入b的值\n");
	 scanf("%d",&b);
	
	fan(&a,&b);
	printf("交换后a=%d,b=%d",a,b);
	
	
	
	
	
	
	
	
	return 0;
}






