#include <stdio.h>
int main (){
	printf("ÇëÊäÈë10¸öÊı\n");
	int arr[10];
	int i=0;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	int pos;
	int ci=0;
	for (ci=0;ci<9;ci++){
		
		for (i=0;i<9-ci;i++){
		if(arr[i]>arr[i+1]){
			pos = arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=pos;
			}	
		}
	
	}
	
	
	
	
	
	
	
	for (i=0;i<10;i++){
		printf(" %d",arr[i]);
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}












