#include <stdio.h>
int han(int *arr,int len){
	int i=0,max=arr[0];
	for(i=1;i<len;i++){
		if(arr[i]>max){
			max=arr[i];
		} 
	}
	return max;
}

int main(){
	int narr[10];
	printf("输入10个数\n");
	int n=0;
	for (n=0;n<10;n++){
		scanf("%d",&narr[n]);
	}
	
	printf("最大的为%d\n",han(narr,10));
	
	
	
	
	
	
	
	
	return 0;
}








