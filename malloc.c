#include <stdlib.h>/*动态规划的头文件*/
#include <stdio.h>//输入输出头文件 
int main(){
	int *p=(int*)malloc(10*sizeof(int));/*申请内存，并返回地址，地址给指针，10表示10个int大小的位置*/ 
	if(p==NULL){
		printf("内存申请失败");//申请失败Nmalloc返回 NULL给指针 
		return 1; 
	} 
	
	p[0]=100;//像数组指针一样用 
	p[1]=200;
	
	free(p);//释放内存
	p=NULL;//悬空指针 
	
	return 0;
} 
