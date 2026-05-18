#include <stdio.h>
int main(){
	int arr[3];
	int i=0;
	for(i=0;i<3;i++){
		scanf("%d",&arr[i]);
	} 
	printf("ÅÅĞò\n");
	int max=arr[0];
	int x=0;
	int j=0;
	for(i=0;i<3;i++){
		for(j=0;j<3-1-i;j++){
			if(arr[j]>arr[j+1]){
				x=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=x;
			}
		}
	}
	
	
	
	
	
	for(i=0;i<3;i++){
		printf("%d",arr[i]);
	}
	
	return 0; 
} 
