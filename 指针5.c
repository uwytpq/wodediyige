#include <stdio.h>

int han(int *a,int *b){
	if(*a>*b){
		return *a;
	} else if(*a<*b){
		return *b;
	}
}

int main(){
	printf("输入x的值\n");
	int x=0,y=0;
	scanf("%d",&x);
	
	printf("输入y的值\n");
	scanf("%d",&y);
	
	han(&x,&y);
	
	printf("%d",han(&x,&y));
	
	
	
	
	return 0;
}
















