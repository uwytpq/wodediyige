#include <stdio.h>
typedef struct{
	int xue;
	char name[20];
	int cheng;
}student; 
void fan(student *stu,int n,const char *wenname){
	FILE *fp=fopen(wenname,"w");
	if(fp == NULL){
		printf("文件打开失败\n");
		return ;
	}
	int i=0;
	for(i=0;i<n;i++){
		fprintf(fp,"%d %s %d\n",stu[i].xue,stu[i].name,stu[i].cheng);
	}
	fclose(fp);
}
void han(student *stu,int n,const char *wenname){
	FILE *fp=fopen(wenname,"r");
	if(fp == NULL){
		printf("文件打开失败\n");
		return ;
	}
		int i=0;
		for(i=0;i<n;i++){
			fscanf(fp,"%d %s %d\n",&stu[i].xue,&stu[i].name,&stu[i].cheng);
		}
		fclose(fp);
}
int main(){
	student nstu[3];
	student nnstu[3];
	int a=0;
	printf("数入三组数据，包括学号 姓名 成绩\n");
	for(a=0;a<3;a++){
		scanf("%d %s %d",&nstu[a].xue,&nstu[a].name,&nstu[a].cheng);
	}
	fan(nstu,3,"student.tet");
	han(nnstu,3,"student.tet");
	for(a=0;a<3;a++){
		printf("学号%d 姓名%s 成绩%d\n",nnstu[a].xue,nnstu[a].name,nnstu[a].cheng);
	}
	return 0;
}







