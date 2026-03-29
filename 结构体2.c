#include <stdio.h>
typedef struct{
		int xue;
		char xing[20];
		int cheng;
	}student;
int main(){
	
	
	student stu[3];
	int i=0;
	float sum=0;
	
	for(i=0;i<3;i++){
		printf("输入学号，姓名,成绩\n");
		scanf("%d",&stu[i].xue);
		scanf("%s",&stu[i].xing);
		scanf("%d",&stu[i].cheng);
	}
	
	for(i=0;i<3;i++){
		sum +=stu[i].cheng;
	}
	
	printf("他们的平均成绩为%.1f\n",sum/3);

	return 0;
}






