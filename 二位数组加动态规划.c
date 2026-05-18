#include <stdio.h>//输入输出头文件 
#include <stdlib.h>//动态规划头文件 
int main(){
	int x=3,y=4;
	int **erarr=(int**)malloc(x*sizeof(int*));//为erarr申请内存，先申请每一行，在申请每一列 
	int i=0;
	for(i=0;i<3;i++){
		erarr[i]=(int*)malloc(y*sizeof(int));
	}
	
	for(i=0;i<3;i++){//同理先释放y的在释放x的 
		free(erarr[i]);
	}
	
	free(erarr);
	
	return 0;
}
