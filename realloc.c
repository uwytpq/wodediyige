#include <stdlib.h>/*动态规划的头文件*/
#include <stdio.h>//输入输出头文件 
int main(){
	int *p=(int*)malloc(5*sizeof(int));
	if(p==NULL){
		printf("内存申请失败");
		return 1; 
	}
	
	int *np=(int*)realloc(p,10*sizeof(int));//扩容arr，但为了防止扩容失败导致p失效，所以用了个新指针 
	if(np==NULL){
		printf("扩容失败\n");
		return 1;
	} else {
		p = np;
	}
	
	
	return 0;
} 
