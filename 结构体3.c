#include <stdio.h>
typedef struct {
		int xue;
		char ming[20];
		int cheng;
	}student;
	
	void fan(student *p,int newcheng){
		(*p).cheng = newcheng;
	}
	
	
int main(){
	student stu;
	scanf("%d",&stu.xue);
	scanf("%s",stu.ming);
	scanf("%d",&stu.cheng);
	
	printf("学号%d,姓名%s,成绩%d\n",stu.xue,stu.ming,stu.cheng);
	
	fan(&stu,100);
	
	printf("更正后的成绩为%d",stu.cheng);
	return 0;
}











 
 
