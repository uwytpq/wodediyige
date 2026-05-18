#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main(){
	printf("这是一个平滑进入的平台,按对应键即可进入\n");
	char ch[6][10]={
	"语文  a",
	"数学  b", 
	"英语  c", 
	"物理  d",
	"化学  e",
	"生物  f"
	};
	int i;//输出用二维数组感觉会好看一些 
	char zi;
	int temp=0;//用来控制输出换行 
	while(1){
		for(i=0;i<6;i++){
			printf("%s",ch[i]);
			temp++;
			if(temp%3==0){
				printf("\n");
			}
		}//输出菜单 
	
		
		while(!kbhit()){
			Sleep(30);
		}//防止cpu过度空转 
		
		if(kbhit()){
			zi=getch();
			if(zi=='a'){
				system("cls");
				printf("落笔惊风雨，诗成泣鬼神\n");
				printf("任意键即可返回\n");
				while(kbhit()){
					getch();
				}//清除之前缓冲区的按键 
				getch();
				
				//回到菜单 
				
			} else if(zi=='b'){
				system("cls");
				printf("万物皆美，秩序之美\n");
				printf("任意键即可返回\n");
				while(kbhit()){
					getch();
				}//清除之前缓冲区的按键 
					getch();
					
				//回到菜单 
			} else if(zi=='c'){
				system("cls");
				printf("Open your mouth,open the world\n");
				printf("任意键即可返回\n");
				while(kbhit()){
					getch();
				}//清除之前缓冲区的按键 
				getch();
					
				//回到菜单 
			} else if(zi=='d'){
				system("cls");
				printf("力是改变运动的原因\n");
				printf("任意键即可返回\n");
				while(kbhit()){
					getch();
				}//清除之前缓冲区的按键 
				getch();
					
				//回到菜单 
			} else if(zi=='e'){
				system("cls");
				printf("微观反应，宏观奇迹\n");
				printf("任意键即可返回\n");
				while(kbhit()){
					getch();
				}//清除之前缓冲区的按键 
				getch();
					
				//回到菜单 
			} else if(zi=='f'){
				system("cls");
				printf("细胞很小，生命很大\n");
				printf("任意键即可返回\n");
				while(kbhit()){
					getch();
				}//清除之前缓冲区的按键 
				getch();
					
				//回到菜单 
			} else if(zi!='a'&&zi!='b'&&zi!='c'&&zi!='d'&&zi!='d'&&zi!='e'&&zi!='f'){
				printf("即将推出菜单,按回车即可\n");
				printf("任意键即可返回\n");
				getchar();
				return 0;
			}
		}//ifkbhit
		system("cls");
	}//while1
}//main
