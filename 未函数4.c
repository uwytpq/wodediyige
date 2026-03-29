#include <stdio.h>

int hanshu(int arr[],int len){
	int sum=0,i=0;
	for (i=0;i<len;i++){
		sum += arr[i];
	}
	return sum;
}

int main(){
	int narr[10];
	printf("ÇëÊäÈë10¸öÊı\n");
	int n=0;
	for (n=0;n<10;n++){
		scanf("%d",&narr[n]);
	} 
	
	
	printf("%d",hanshu(narr,10));
	
	
	
	return 0;
}




















