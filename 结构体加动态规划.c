#include <stdlib.h>/*动态规划的头文件*/
#include <stdio.h>//输入输出头文件 
#include <string.h>//字符串头文件 
 int main(){
 	typedef struct{
 		int id;
 		char name[20];
 		float score;
	 }Student;
 	
 	int n=0;
 	printf("输入学生人数\n");
 	scanf("%d",&n);
 	
	Student *stu=(Student*)malloc(n*sizeof(Student));
	if(stu==NULL){
		printf("内存申请失败\n");
		return 1;
	}
 	
 	stu->id=1001;
 	strcpy(stu->name,"chenbingkun");
 	stu->score=85.5;
 	
 	printf("%d %s %.1f",stu[0].id,stu[0].name,stu[0].score);
 	
 	free(stu);
 	stu=NULL;
 	
 	return 0;
 }


