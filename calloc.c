#include <stdlib.h>/*动态规划的头文件*/
#include <stdio.h>//输入输出头文件 
int main(){
	int *p=(int*)calloc(10,sizeof(int));//申请并初始为零 分配多少可用变量
	if(p==NULL){//一样 
		printf("内存申请失败\n");
		return 1;
	}
	
	int i=0;
	for(i=0;i<10;i++){//打印出来看看 
		printf("%d ",p[i]);
	} 
	
	
	free(p);
	p=NULL;
	return 0;
} 




