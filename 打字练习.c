#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
int main(){
	printf("这是一个打字练习,仅限小写英文状态下\n");
	printf("任意键即可开始\n");
	printf("回车来确认输入，并触发下一次\n");
	
	int i=0;
	int ci=0;
	srand((unsigned int )time(NULL));//传入时间种子 
	int ge=0;//字符串个数 
	ge=rand()%5+4;//随机字符串个数
	char yong[ge+5]; //用户输入 
	char *ch=(char*)malloc(ge+1*sizeof(char));
	if(ch==NULL){
		printf("内存申请失败\n");
		return 0;
	}
	
	
	while(1){
		if(kbhit()){
		system("cls");//清除之前的输出，进入打字练习 
		
		for(i=0;i<ge;i++){
		ch[i]='a'+rand()%26;
	}
		ch[i]='\0';
		
		printf("   %-20s",ch);//实例
		printf("你已正确%d个\n",ci) ;
		
	while(kbhit()){
		getch();
	}//清除缓冲区的按键 
	
	while(1){
			scanf("%s",yong);//输入函数 
	
	if(strcmp(ch,yong)==0){
		printf("正确\n");
		ci++;
		break;
	} else{
		printf("错误\n");
		printf("   %-20s",ch);//实例
		printf("你已正确%d个\n",ci) ;
		continue;
		}//判断 
	}//判断循环 
		}//kbhit 
	}//while1
	
}


