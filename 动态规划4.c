#include <stdio.h>
#include <stdlib.h>
	typedef struct{
		int xue;
		char xing[20];
		float chen;
	}student;
int main(){

	printf("输入学生的数量\n");
	int n=0;
	scanf("%d",&n);
	
	student *stu=(student*)malloc(n*sizeof(student));
	if(stu==NULL){
		printf("内存分配失败\n");
		return 1;
	}
	int i=0;
	printf("输入学生信息\n");
	for(i=0;i<n;i++){
		scanf("%d %s %f",&stu[i].xue,stu[i].xing,&stu[i].chen);
	}
	
	float ping,a;
	
	for(i=0;i<n;i++){
		a+=stu[i].chen;
	}
	ping=a/3;
	for(i=0;i<n;i++){
		printf("%d %s %.1f\n",stu[i].xue,stu[i].xing,stu[i].chen);
	}
	printf("平均分%.1f\n",ping);
	return 0;
}
