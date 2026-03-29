#include <stdio.h>
int han(int *arr,int len){
	int sum=0,i=0;
	for(i=0;i<len;i++){
		sum +=arr[i];
	}
	return sum;
}

int main(){
	int narr[5];
	printf("输入五个整数\n");
	int n=0;
	for(n=0;n<5;n++){
		scanf("%d",&narr[n]);
	}
	
	printf("他们的和为%d",han(narr,5));
	
	
	
	
	
	
	
	return 0;
}






















