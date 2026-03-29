#include <stdio.h>
int main(){
	typedef struct {
		int lian;
		int yue;
		int ri;
	}tianshu;
	
	tianshu Date;
	
	printf("输入年份\n");
	scanf("%d",&Date.lian);
	
	printf("输入月份\n");
	scanf("%d",&Date.yue);
	
	printf("输入日\n");
	scanf("%d",&Date.ri);
	
	printf("今天是%d年，%d月%d日\n",Date.lian,Date.yue,Date.ri);	
	

	return 0;
}







