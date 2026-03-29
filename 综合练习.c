#include <stdio.h>

void sort(int *arr,int n){
	int i=0,a=0,swap;
	for(i=0;i<n-1;i++){
		for(a=0;a<n-i-1;a++){
			if(arr[a]>arr[a+1]){
				swap=arr[a];
				arr[a]=arr[a+1];
				arr[a+1]=swap;
			}
		}
	}
}

int main(){
	int narr[10];
	printf("ÊäÈë10¸öÊı\n");
	int j=0;
	for(j=0;j<10;j++){
		scanf("%d",&narr[j]);
	}
	
	sort(narr,10);
	for(j=0;j<10;j++){
		printf("%d ",narr[j]);
	}
	
	
	
	return 0;
}




