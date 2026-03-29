#include <stdio.h>

int chen(int a,int b);

int main(){
	printf("请输入正整数\n");
	int x,y;
		
	scanf("%d%d",&x,&y);
	
	int tao =chen(x,y);
	printf("%d",tao);
	
	return 0;	

	
}

	int chen(int a,int b){
		return a+b;
	}









