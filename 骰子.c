#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	printf("这是一个投筛子的模拟器,任意按键即可开始");
	int shu=0;//用来随机生成骰子 
	srand((unsigned int) time(NULL));//传入时间种子
	
	int ci;
	char shu1[5][5];//先声明6个骰子面  
	char shu2[5][5];
	char shu3[5][5];
	char shu4[5][5];
	char shu5[5][5];
	char shu6[5][5];
	
	int i=0,j=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			shu1[i][j]=' ';//初始化 
			shu2[i][j]=' ';
			shu3[i][j]=' ';
			shu4[i][j]=' ';
			shu5[i][j]=' ';
			shu6[i][j]=' ';
		}
	}//for初始化里的 
	
	shu1[2][2]='o';//1
	shu2[1][1]='o';//2
	shu2[3][3]='o';
	shu3[1][1]='o';//3
	shu3[2][2]='o';
	shu3[3][3]='o';
	shu4[1][1]='o';//4
	shu4[3][3]='o';
	shu4[1][3]='o';
	shu4[3][1]='o';
	shu5[1][1]='o';//5
	shu5[3][3]='o';
	shu5[1][3]='o';
	shu5[3][1]='o';
	shu5[2][2]='o';
	shu6[1][1]='o'; //6
	shu6[1][2]='o';
	shu6[1][3]='o';
	shu6[3][3]='o';
	shu6[3][2]='o';
	shu6[3][1]='o';
	
	while(1){
	
	if(kbhit()){
	int x=25;
	for(ci=0;ci<10;ci++){
	system("cls");
	shu=rand()%6+1;
	if(shu==1){
		for(i=0;i<5;i++){
			int temp=0;
			for(j=0;j<5;j++){
			printf("%c",shu1[i][j]);
		
			temp++;
			if(temp%5==0){
				printf("\n");
			}
			}
		}
	}/*1*/else if(shu==2){
		for(i=0;i<5;i++){
			int temp=0;
			for(j=0;j<5;j++){
			printf("%c",shu2[i][j]);
			
			temp++;
			if(temp%5==0){
				printf("\n");
			}
			}
		}
	}/*2*/else if(shu==3){
		for(i=0;i<5;i++){
			int temp=0;
			for(j=0;j<5;j++){
			printf("%c",shu3[i][j]);
			
			temp++;
			if(temp%5==0){
				printf("\n");
			}
			}
		}
	}/*3*/else if(shu==4){
		for(i=0;i<5;i++){
			int temp=0;
			for(j=0;j<5;j++){
			printf("%c",shu4[i][j]);
			
			temp++;
			if(temp%5==0){
				printf("\n");
			}
			}
		}
	}/*4*/else if(shu==5){
		for(i=0;i<5;i++){
			int temp=0;
			for(j=0;j<5;j++){
			printf("%c",shu5[i][j]);
			
			temp++;
			if(temp%5==0){
				printf("\n");
			}
			}
		}
	}/*5*/ else if(shu==6){
		for(i=0;i<5;i++){
			int temp=0;
			for(j=0;j<5;j++){
			printf("%c",shu6[i][j]);
			
			temp++;
			if(temp%5==0){
				printf("\n");
			}
			}
		}
	}//6 
		Sleep(x+=20);//逐渐累加暂停 
	
			}//for10
		}//ifkbhit
		while (kbhit()) {
                getch();
            }
    Sleep(50);  
	}//while1
}
