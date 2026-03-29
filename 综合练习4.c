#include <stdio.h>
typedef struct{
	char name[20];
	int yu;	int shu;int wai;
}student;
int main(){
	printf("输入学生的人数\n");
	int n=0;
	scanf("%d",&n);
	student stu[n];
	int i=0;
	for(i=0;i<n;i++){
		printf("输入姓名 语文 数学 外语\n");
		scanf("%s %d %d %d",stu[i].name,&stu[i].yu,&stu[i].shu,&stu[i].wai);
	}
	printf("学生成绩表\n");
	for(i=0;i<3;i++){
		printf("姓名%s 总分%d 平均分%.1f\n",stu[i].name,(stu[i].shu+stu[i].wai+stu[i].yu),(float)((stu[i].shu+stu[i].wai+stu[i].yu)/3.0));
	}
	int max=stu[0].shu+stu[0].wai+stu[0].yu;
	int y=0,x=0;
	for (y=0;y<n;y++){
		if(max<(stu[y].shu+stu[y].wai+stu[y].yu)){
			max=stu[y].shu+stu[y].wai+stu[y].yu;
			x=y;
			
		}
	}
	printf("总分最高是  %s %d\n",stu[x].name,max);
	printf("不及格超过1们的学生\n");
	int a=0,j=0;
	for(a=0;a<n;a++){
		if(stu[a].shu<60){
			j++;
		}
		if(stu[a].wai<60){
			j++;
		}
		if(stu[a].yu<60){
			j++;
		}
		if(j>=1){
			printf("不及格  %s\n",stu[a].name);
		}	
		j=0;
		}
	return 0;
}











