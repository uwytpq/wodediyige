#include <stdio.h>
typedef struct{
	int xue;
	char xing[20];
	int cheng;
}student; 
void fan(const char *ming,student *stu,int n){
	FILE *fp=fopen(ming,"w");
	if(fp==NULL){
		printf("文件打开失败\n");
		return ;
	}
		int i=0;
		for(i=0;i<n;i++){
			fprintf(fp,"%d %s %d\n",stu[i].xue,stu[i].xing,stu[i].cheng);
		}
		fclose(fp);
}
void han(const char *ming,student *stu,int n){
	FILE *fp=fopen(ming,"r");
	if(fp==NULL){
		printf("文件打开失败\n");
		return ;
	}
	int i=0;
	for(i=0;i<n;i++){
		fscanf(fp,"%d %s %d\n",&stu[i].xue,&stu[i].xing,&stu[i].cheng);
	}
	fclose(fp);
} 
int main(){
	student a[3];
	int x=0;
	for(x=0;x<3;x++){
		printf("输入学号 姓名 成绩\n");
		scanf("%d %s %d",&a[x].xue,&a[x].xing,&a[x].cheng);
	}
	student na[3];
	fan("nstu.tet",a,3);
	han("nstu.tet",na,3);
	printf("再次打印\n");
	for(x=0;x<3;x++){
		printf("学号%d 姓名%s 成绩%d\n",na[x].xue,na[x].xing,na[x].cheng);
	}
	return 0;
}










