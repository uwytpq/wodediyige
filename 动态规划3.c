#include <stdio.h>
#include <stdlib.h>
int main(){
	printf("输入一个整数n\n");
	int n=0;
	scanf("%d",&n);
	
	int *arr=(int*)malloc(n*sizeof(int));
	if(arr==NULL){
		printf("内存分配失败\n");
	}
	int i=0;
	for(i=0;i<10;i++){
		arr[i]=i*10;
	}
	
	for(i=0;i<10;i++){
		printf("%d  ",arr[i]);
	}
	free(arr);
	return 0;
}
