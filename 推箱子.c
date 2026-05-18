#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

int main(){
	srand((unsigned int)time(NULL));

	
	printf("这是一个推箱子得游戏，开始游玩请按回车\n");
	printf("按键均为英文下得小写\n");
	getchar();
	
	char cch;
	
	while(1){
		system("cls");
	
		printf("开始游戏   k\n");
		printf("游戏介绍   j\n");
		printf("开发人员   r\n");	
		printf("退出       t\n");
		
		cch=getch();
		
		if(cch=='k'){//开始游戏 
			
			system("cls");
			
			int chong=0;//用于判断重开 
			int wen;// 临时存储地图名称 
			char ch[10][15];//地图数组10*10大小 
			int shuch[10][15];//用于承接地图数字文件 
			int mapIned =rand()%10+1;//地图后缀范围 
			wen=mapIned;//用于显示是地图几 
			char filename[20];//文件名，函数 
			FILE *fp = NULL;//声明fp 

			sprintf(filename,"map%d.txt",mapIned);//传入随机文件名 
			fp=fopen(filename,"r");//打开地图文件 
			
			if(fp==NULL){
				printf("地图文件打开失败\n");
				return 0;
				}
			
	

			int i=0,j=0;//用于循环 
			int x,y;//记录人的位置 
			char rch;//用于存储用户输入 
			int bx[100],by[100];//记录箱子的位置 
			int wx[100],wy[100];//记录地点的位置 
			int qx[100],qy[100];//记录墙的位置 
			int zx[100],zy[100];//推入正确后变化 
			int boxcount=0;//用于箱子个数 
			int goalcount=0;//用于正确地点的坐标个数 
			int qiangcount=0;//用于墙的个数 
			int zcount=0;//用来访问正确地点变换后 
			int temp;//用于临时判断元素逻辑关系 
			int oy;//用于临时存储列坐标 
			int ox;//用于临时存储行坐标 
			int ij;//用于遍历箱子数组 
			int cishu=0;//用于判断对局正确得条件 
			
			
			for(i=0;i<10;i++){
				for(j=0;j<15;j++){
					fscanf(fp,"%d",&shuch[i][j]);
				}
			} //读取地图 
			
			for(i=0;i<10;i++){
				for(j=0;j<15;j++){
					if(shuch[i][j]==1){//墙 
						ch[i][j]='#';
						qx[qiangcount]=i;
						qy[qiangcount]=j;
						qiangcount++;
					} else if(shuch[i][j]==0){//空位置 
						ch[i][j]=' ';
					} else if(shuch[i][j]==2){//人 
						ch[i][j]='I';
						x=i;//人坐标 
						y=j;
					} else if(shuch[i][j]==3){//箱子 
						ch[i][j]='O';
						bx[boxcount]=i;//箱子坐标 
						by[boxcount]=j;
						boxcount++;
					} else if(shuch[i][j]==4){//地点 
						ch[i][j]='A';
						wx[goalcount]=i;
						wy[goalcount]=j;
						goalcount++;
					}
				}
			}//替换为对应元素 并记录对应元素的坐标 
			
			fclose(fp);//读完文件后关闭，防止数据受损 
			
		while(1){
				
				system("cls");//清屏 
				
				if(chong==0){
				for(i=1;i<=8;i++){
					for(j=1;j<=13;j++){
						ch[i][j]=' ';
					}
				} //清除墙内的所有元素，以便之后变换元素坐标 
			
				for(i=0;i<qiangcount;i++){
					ch[qx[i]][qy[i]]='#';
				}//输入墙 
				
				for(i=0;i<boxcount;i++){
						ch[bx[i]][by[i]]='O';
					}//变化箱子的坐标 
				
				for(i=0;i<goalcount;i++){
						ch[wx[i]][wy[i]]='A';
					}//正确位置的变化坐标 
					
				for(i=0;i<zcount;i++){
					ch[zx[i]][zy[i]]='@';
				}	
				
				ch[x][y]='I';//变化人的坐标 
				
				for(i=0;i<10;i++){
					for(j=0;j<15;j++){
						printf("%c",ch[i][j]);
						
					}
						printf("\n");
				}//打印地图 
			} else if(chong!=0){
				boxcount=0;
				goalcount=0;
				zcount=0;
				qiangcount=0;
			
				for(i=0;i<10;i++){
					for(j=0;j<15;j++){
					if(shuch[i][j]==1){//墙 
						ch[i][j]='#';
						qx[qiangcount]=i;
						qy[qiangcount]=j;
						qiangcount++;
					} else if(shuch[i][j]==0){//空位置 
						ch[i][j]=' ';
					} else if(shuch[i][j]==2){//人 
						ch[i][j]='I';
						x=i;//人坐标 
						y=j;
					} else if(shuch[i][j]==3){//箱子 
						ch[i][j]='O';
						bx[boxcount]=i;//箱子坐标 
						by[boxcount]=j;
						boxcount++;
					} else if(shuch[i][j]==4){//地点 
						ch[i][j]='A';
						wx[goalcount]=i;
						wy[goalcount]=j;
						goalcount++;
					}
				}
			}//替换为对应元素 并记录对应元素的坐标 
				
					for(i=1;i<=8;i++){
					for(j=1;j<=13;j++){
						ch[i][j]=' ';
					}
				} //清除墙内的所有元素，以便之后变换元素坐标 
			
				for(i=0;i<qiangcount;i++){
					ch[qx[i]][qy[i]]='#';
				}//输入墙 
				
				for(i=0;i<boxcount;i++){
						ch[bx[i]][by[i]]='O';
					}//变化箱子的坐标 
				
				for(i=0;i<goalcount;i++){
						ch[wx[i]][wy[i]]='A';
					}//正确位置的变化坐标 
					
				for(i=0;i<zcount;i++){
					ch[zx[i]][zy[i]]='@';
				}	
				
				ch[x][y]='I';//变化人的坐标 
				
				for(i=0;i<10;i++){
					for(j=0;j<15;j++){
						printf("%c",ch[i][j]);
						
					}
						printf("\n");
				}//打印地图 
				
				chong=0;//重置chong的值下次更新map时走chong==0 
			}
				printf("重新开始 按 k\n");
				printf("这是地图%d\n",wen); 
					
				if(zcount==goalcount){	
					printf("通关\n");
					while(kbhit()){
							getch();
						}
						getch();
						break;
					}
					
				
				rch=getch();
		
				if(rch=='w'){
					temp=x;
					x--;
					if(ch[x][y]=='#'){
						x=temp;
					}//人不能怼墙 
					
					for(i=x;i>=0;i--){
						if(ch[i][y]=='O'){
							continue;
						} else{
							ox=i+1;//存储行坐标 
							break;
						}
					}//沿特定方向检测箱子连通性获取ox
					
					if(ch[ox-1][y]!='#'){
						for(ij=ox;ij<=x;ij++){
							for(i=0;i<boxcount;i++){
								if(bx[i]==ij&&by[i]==y){
									bx[i]--;
								} else{
									continue;
								}
							}
						} 
					} else{
						x+=1;
					}
					
					zcount=0;
					
					for(i=0;i<boxcount;i++){
						for(j=0;j<goalcount;j++){
							if(bx[i]==wx[j]&&by[i]==wy[j]){
								zx[zcount]=bx[i];
								zy[zcount]=by[i];
								zcount++;
							}
						}
					}//判断箱子是否与正确地点重叠  并变换
					
				}else if(rch=='s'){
					temp=x;
					x++;
					if(ch[x][y]=='#'){
						x=temp;
					}//人不能怼墙 
					for(i=x;i<=9;i++){
						if(ch[i][y]=='O'){
							continue;
						} else{
							ox=i-1;//存储行坐标 
							break;
						}
					}//沿特定方向检测箱子连通性获取ox
					
					if(ch[ox+1][y]!='#'){
						for(ij=ox;ij>=x;ij--){
							for(i=0;i<boxcount;i++){
								if(bx[i]==ij&&by[i]==y){
									bx[i]++;
								} else{
									continue;
								}
							}
						} 
					} else{
						x-=1;
					}
					zcount=0;
						for(i=0;i<boxcount;i++){
							for(j=0;j<goalcount;j++){
								if(bx[i]==wx[j]&&by[i]==wy[j]){
									zx[zcount]=bx[i];
									zy[zcount]=by[i];
									zcount++;
							}
						}
					}//判断箱子是否与正确地点重叠  并变换
					
				} else if(rch=='d'){
					temp=y;
					y++;
					if(ch[x][y]=='#'){
						y=temp;
					}//人不能怼墙 
					
					for(i=y;i<=14;i++){
						if(ch[x][i]=='O'){
							continue;
						} else{
							oy=i-1;//存储列坐标 
							break;
						}
					}//沿特定方向检测箱子连通性获取ox
					
					if(ch[x][oy+1]!='#'){
						for(ij=oy;ij>=y;ij--){
							for(i=0;i<boxcount;i++){
								if(bx[i]==x&&by[i]==ij){
									by[i]++;
								} else{
									continue;
								}
							}
						} 
					} else{
						y-=1;
					}
					zcount=0;
					for(i=0;i<boxcount;i++){
							for(j=0;j<goalcount;j++){
								if(bx[i]==wx[j]&&by[i]==wy[j]){
									zx[zcount]=bx[i];
									zy[zcount]=by[i];
									zcount++;
							}
						}
					}//判断箱子是否与正确地点重叠 并变换
					
				} else if(rch=='a'){
					temp=y;
					y--;
					if(ch[x][y]=='#'){
						y=temp;
					}//人不能怼墙 
					
					for(i=y;i>=0;i--){
						if(ch[x][i]=='O'){
							continue;
						} else{
							oy=i+1;//存储列坐标 
							break;
						}
					}//沿特定方向检测箱子连通性获取ox
					
					if(ch[x][oy-1]!='#'){
						for(ij=oy;ij<=y;ij++){
							for(i=0;i<boxcount;i++){
								if(bx[i]==x&&by[i]==ij){
									by[i]--;
								} else{
									continue;
								}
							}
						} 
					} else{
						y=y+1;
					}
					zcount=0;
					for(i=0;i<boxcount;i++){
							for(j=0;j<goalcount;j++){
								if(bx[i]==wx[j]&&by[i]==wy[j]){
									zx[zcount]=bx[i];
									zy[zcount]=by[i];
									zcount++;
							}
						}
					}//判断箱子是否与正确地点重叠 并变换 
					
				} else if(rch=='k'){
					wen=mapIned;
					chong++;//用这个判断是否重开 
					continue;
				}
			}//while1
		} else if(cch=='j'){
			system("cls");
			
			printf(
				"人用 I 表示\n"
				"箱子用 O 表示\n"
				"正确地点用 A 表示\n"
				"推到正确地点后变为 @\n"
				"游戏任务: 将所有箱子推到正确地点\n"
				"地图为随机地图\n"
				"难度大的地图是8，9，10，11\n"
				"游玩愉快，谢谢！！！\n"
				"\n任意键返回\n"
			);
			
			while(kbhit()){
				getch();
			}
			
			getch();
		} else if(cch=='r'){
			system("cls");
			
			printf(
				"游戏主开发 ——陈柄坤\n"
				"\n游戏调试 ———陈柄坤\n"
				"\n地图逻辑 ———陈柄坤\n"
				"\n任意键返回\n"
				"\n逻辑是冰冷的，但创造他的过程是热的\n"
				"\n祝大家永远快乐\n"
				"\n让故事圆满的办法，就是自己写下结局\n" 
			); 
			
			while(kbhit()){
				getch();
			}
			getch();
			
		}else if(cch=='t'){
			system("cls");
			
			printf("已退出游戏\n");
			return 0;
		} else{
			continue;
		}
		
	}//while菜单 
	
}




