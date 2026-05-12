#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
int main(){
	printf("这是一个贪吃蛇小游戏，注意移动只能在英文状态下,按回车即可开始游戏\n");
	getchar(); 
	void hidecursor() {
    CONSOLE_CURSOR_INFO info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}
	int shu=1;/*蛇的节数*/ 
	int x=10,y=9;/*蛇的坐标*/ 
	int ci=0;
	int xx=0;
	int bx[100]={0},by[100]={0};
	bx[xx]=11;
	by[xx]=9;
	int fondx=15,fondy=15;
	srand((unsigned int)time(NULL));
	char map[22][22];/*地图数组*/ 
	char key;
	int i=0,j=0;
	for(j=0;j<22;j++){/*初始地图*/ 
			map[0][j]='#';
		}
		for(j=0;j<22;j++){
			map[21][j]='#';
		}
		for(i=1;i<21;i++){
			map[i][0]='#';
		}
		for(i=0;i<21;i++){
			map[i][21]='#';
		}
	
	/*先来个大while*/ 
	while(1){
	
		system("cls");/*先清屏*/ 
		
		for(i=1;i<21;i++){/*初始化map*/ 
			for(j=1;j<21;j++){
				map[i][j]=' ';
			}
		}
	
		map[x][y]='I';/*x=10,y=9*/
		
		for (xx = shu-1; xx >=0 ; xx--) {
    		map[bx[xx]][by[xx]] = 'O';
		}
		map[fondx][fondy]='A';
		for(i=0;i<22;i++){
			for(j=0;j<22;j++){
				printf("%c",map[i][j]);
				ci++;
				if(ci%22==0){
					printf("\n");
				}
			}
		}/*画地图*/ 
		
		printf("分数为%d（超过100有惊喜）\n",shu);
		Sleep(400);/*暂停0.5s*/
		 
		if(kbhit()){/*检测用户是否输入*/ 
			key=getch();
		}
		if(key=='w'||key=='W'){
			for(xx=shu;xx>0;xx--){
				bx[xx]=bx[xx-1];
			}
			for(xx=shu;xx>0;xx--){
				by[xx]=by[xx-1];
			}
			bx[0]=x;
			by[0]=y;
			x--;
			if(x==0||x==21||y==0||y==21){
				printf("失败"); 
				return 0;
			}
			if(x==fondx&&y==fondy){
				shu++;
				
				while(1){
					fondx=rand()%20+1;
					fondy=rand()%20+1;
					if(fondx==x&&fondy==y){
						continue;
					} else{
						for(xx=shu-1;xx>=0;xx--){
						if(fondx==bx[xx]&&fondy==by[xx]){
							break;
						} 
					}
					}
					if(xx<0){
						break;
					}
				}/*不重叠逻辑*/ 
			}
			}/*前进*/ 
			
		if(key=='A'||key=='a'){
			for(xx=shu;xx>0;xx--){
				bx[xx]=bx[xx-1];
			}
			for(xx=shu;xx>0;xx--){
				by[xx]=by[xx-1];
			}
			bx[0]=x;
			by[0]=y;
			y--;
			if(x==0||x==21||y==0||y==21){
				printf("失败"); 
				return 0;
			}
			if(x==fondx&&y==fondy){
				shu++;
				
				while(1){
					fondx=rand()%20+1;
					fondy=rand()%20+1;
					if(fondx==x&&fondy==y){
						continue;
					} else{
						for(xx=shu-1;xx>=0;xx--){
						if(fondx==bx[xx]&&fondy==by[xx]){
							break;
						} 
					}
					}
					if(xx<0){
						break;
					}
				}/*不重叠逻辑*/ 
			}
			}/*左转*/
		if(key=='D'||key=='d'){
			for(xx=shu;xx>0;xx--){
				bx[xx]=bx[xx-1];
			}
			for(xx=shu;xx>0;xx--){
				by[xx]=by[xx-1];
			}
			bx[0]=x;
			by[0]=y;
			y++;
			if(x==0||x==21||y==0||y==21){
				printf("失败"); 
				return 0;
			}
			if(x==fondx&&y==fondy){
				shu++;
				
					while(1){
					fondx=rand()%20+1;
					fondy=rand()%20+1;
					if(fondx==x&&fondy==y){
						continue;
					} else{
						for(xx=shu-1;xx>=0;xx--){
						if(fondx==bx[xx]&&fondy==by[xx]){
							break;
						} 
					}
					}
					if(xx<0){
						break;
					}
				}/*不重叠逻辑*/ 	
			}
		}/*右转*/
		if(key=='s'||key=='S'){
			for(xx=shu;xx>0;xx--){
				bx[xx]=bx[xx-1];
			}
			for(xx=shu;xx>0;xx--){
				by[xx]=by[xx-1];
			}
			bx[0]=x;
			by[0]=y;
			x++;
			if(x==0||x==21||y==0||y==21){
				printf("失败"); 
				return 0;
			}
			if(x==fondx&&y==fondy){
				shu++;
				
				while(1){
					fondx=rand()%20+1;
					fondy=rand()%20+1;
					if(fondx==x&&fondy==y){
						continue;
					} else{
						for(xx=shu-1;xx>=0;xx--){
						if(fondx==bx[xx]&&fondy==by[xx]){
							break;
						} 
					}
					}
					if(xx<0){
						break;
					}
				}/*不重叠逻辑*/ 
			}
		} /*if*/
	}/*while*/

	
}
	


