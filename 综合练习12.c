#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	printf("我现在像跟你玩以个游戏\n");
	printf("我讲随机生成一个四位数,你来用二分法来猜\n");
	printf("范围是1000~9999\n"); 
	printf("若有兴趣请输入ok\n");
	char a[10];

	fgets(a,10,stdin);
	
	int i=0;
	while(a[i]!='\0'){
		if(a[i]=='o'){
			i++;
			if(a[i]=='k'){
				printf("开始了\n");
				break;
			} else{
				return 0;
			}
		} else{
			printf("输入有误，请重新输入\n");
			return 0;
		}
		
	} 
	srand((unsigned int)time(NULL));
	int x=0;
	x=rand()%9000+1000;

	int y=0;/*这是存储用户输入*/
	int n=0;
	int j=1;
	 printf("请输入你猜的数\n");
	 scanf("%d",&y);
	 while(y!=x){
	 	if(1){
	 	printf("蠢货!!猜错了，再猜\n");
	 	if(y<x){
	 		printf("你猜的这个数比它小\n");
		 } else{
		 	printf("你猜的这个数比它大\n");
		 }
	 	scanf("%d",&y);
	 	j++;
	 }
	
	 }
	printf("真不容易呀，傻蛋，猜了%d才猜对\n",j);
	printf("我随机生成的数位%d",x);
	return 0;
}
