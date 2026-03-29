#include <stdio.h>
int main(){
	int arr[10];
	printf("ÊäÈë10¸öÊı\n");
	int i=0;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("Ã°ÅİÅÅĞò\n");
	int x=0,y=0,temp=0;
	for(x=0;x<10;x++){
		for(y=0;y<10-1-x;y++){
			if(arr[y]>arr[y+1]){
				temp=arr[y];
				arr[y]=arr[y+1];
				arr[y+1]=temp;
			}
		}
	}
	
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}

	return 0;
}








