#include <stdio.h>
#include <string.h>
#define N 100
typedef struct{
	int xue;
	char ming[20];
	float yu;
	float shu;
	float wai;
	float zong;
	float ping;
}student;

int main(){
	int count =0;
	student stu[100];
	char ch[20];
	while(1){
		printf("这是一个综合平台,你可以选择\n");
		printf(
		"1.添加学生\n" 
		"2.显示所有学生\n"
		"3.按总分排序\n" 
		"4.查找学生\n"
		"5.保存到文件\n"
		"6.从文件中读取\n"
		"0.退出\n"
		);
		printf("选择时请输入前面的数字\n");
		printf("请输入\n");
		int x;
		scanf("%d",&x);
		if(x<0||x>8){
			printf("输入有误，请重新输入\n");
			continue;
		} else{
			switch(x){
				case 1:{
					printf("请输入学号，姓名，语文，数学，外语，总分，平均分。输入0可退出\n");
					student nstu[1];
					while(1){
						printf("输入0可退出，输入请输任意数字\n");
						int  x;
						scanf("%d",&x);
						if(x==0){
							break;
							} else{
								printf("输入学生数据\n");
								scanf("%d %s %f %f %f",&nstu[0].xue,nstu[0].ming,&nstu[0].yu,&nstu[0].shu,&nstu[0].wai);
						nstu[0].zong=nstu[0].yu+nstu[0].shu+nstu[0].wai;
						nstu[0].ping=nstu[0].zong/3.0;
						getchar();
						if(count<N){
								stu[count]=nstu[0];
								count++;
							}	/*if*/
							}/*else*/
						}/*while*/
						break;
					}/*case 1*/
				case 2:{
					int i=0;
					for(i=0;i<count;i++){
						printf("（%d）学号%d 姓名%s 语文%.1f 数学%.1f 外语%.1f 总分%.1f 平均分%.1f\n",i+1,stu[i].xue,stu[i].ming,stu[i].yu,stu[i].shu,stu[i].wai,stu[i].zong,stu[i].ping);
					} 
					getchar();
					printf("输入0可退出\n");
					int x=1;
					while(x){
					scanf("%d",&x);
					if(x==0){
						break;
					} else{
						printf("输入有误,请重新输入\n");
					}
				}
				break;
				}/*case 2*/ 
				case 3:{
					int i=0;
					int j=0;
					student nnstu[100];
					for(i=0;i<count;i++){
						nnstu[i]=stu[i];
					}
					for(i=0;i<count;i++){
						for(j=0;j<count-1-i;j++){
							student temp;
							if(nnstu[j].zong<nnstu[j+1].zong){
								temp=nnstu[j];
								nnstu[j]=nnstu[j+1];
								nnstu[j+1]=temp;
							}
						}
					}
					for(i=0;i<count;i++){
						printf("（%d）学号%d 姓名%s 语文%.1f 数学%.1f 外语%.1f 总分%.1f 平均分%.1f\n",i+1,nnstu[i].xue,nnstu[i].ming,nnstu[i].yu,nnstu[i].shu,nnstu[i].wai,nnstu[i].zong,nnstu[i].ping);
					}
					printf("按回车即可退出\n");
					getchar();
					getchar();
					break;
				}/*case 3*/
				case 4:{
					int hao=0;
					printf("请输入你要查找学生的学号\n");
					scanf("%d",&hao);
					int i=0;
					while(1){
						for(i=0;i<count;i++){
						if(stu[i].xue==hao){
							printf("学号%d 姓名%s 语文%.1f 数学%.1f 外语%.1f 总分%.1f 平均分%.1f",stu[i].xue,stu[i].ming,stu[i].yu,stu[i].shu,stu[i].wai,stu[i].zong,stu[i].ping);
						}
					}/*for*/
					printf("\n退出请输入0，继续请输入1\n");
					int x=1;
					scanf("%d",&x);
					if(x==0){
						break;
					} else{
						printf("请输入你要查找学生的学号\n");
						scanf("%d",&hao);
					}
				}/*while*/
					break;
				}/*case 4*/
				case 5:{
					    printf("请输入文件名\n");
					    scanf("%s", ch);
					    int has_dot = 0;
					    int k=0;
					    for( k = 0; ch[k]; k++) {
					        if(ch[k] == '.') {
					            has_dot = 1;
					            break;
					        }
					    }
					    if(!has_dot) {
					        strcat(ch, ".txt");
					    }
					
					    FILE *fp = fopen(ch, "w");
					    if(fp == NULL) {
					        printf("文件打开失败，请检查路径或权限\n");
					        break;
					    }
					    int i=0;
					    for( i = 0; i < count; i++) {
					        fprintf(fp, "%d %s %.1f %.1f %.1f %.1f %.1f\n",
					                stu[i].xue, stu[i].ming, stu[i].yu, stu[i].shu,
					                stu[i].wai, stu[i].zong, stu[i].ping);
					    }
					    fclose(fp);
					    printf("保存成功！已写入 %d 条记录。\n", count);
					    printf("按回车键返回菜单\n");
					    getchar();   // 吃掉上次输入的回车
					    getchar();   // 等待用户按回车
					    break;

				}/*case 5*/
				case 6:{
					FILE *fp=fopen(ch,"r");
					student stu6[100];
					int i=0;
					for(i=0;i<count;i++){
						fscanf(fp,"%d %s %.1f %.1f %.1f %.1f %.1f",&stu6[i].xue,stu6[i].ming,&stu6[i].yu,&stu6[i].shu,&stu6[i].wai,&stu6[i].zong,&stu6[i].ping);
					}
					for(i=0;i<count;i++){
						printf("%d 学号%d 姓名%s 语文%.1f 数学%.1f 外语%.1f 总分%.1f 平均分%.1f\n",i+1,stu6[i].xue,stu6[i].ming,stu6[i].yu,stu6[i].shu,stu6[i].wai,stu6[i].zong,stu6[i].ping);
					}
					printf("退出请输入0\n");
					int x=1;
					scanf("%d",&x);
					if(x==0){
						break;	
					}
				}/*case 6*/
				case 0:{
					return 0;
					break;
				}/*case 0*/
				case 7:{
					printf("这是我留下的彩蛋，很高兴你能尝试我这蹩脚的程序，遇见你是我的幸运，祝你一路顺风\n"
					       "风没有方向，但每一片叶子都会找到自己的摇摆!!!\n"
					);
					getchar();
					return 0;
				}/*case44*/
			} /*switch*/
				
			}/*else*/
		}
	return 0;	
}
	
	
	
	
	












