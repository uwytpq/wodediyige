#include <stdio.h>

void maxdazi(int arr[],int len){
	int i=0,n=0,pos=-1;
	for (i=0;i<len;i++){
		for (n=0;n<len-i;n++){
			if(arr[n]>arr[n+1]){
				pos =arr[n];
				arr[n]=arr[n+1];
				arr[n+1]=pos;
			}
			if(arr[n]<arr[n+1])break;
		}
	}
} 

int main (){
	int a[6];
	
	printf("ÇëÊäÈë6¸öÊý\n");
	int m=0;
	
	
	for (m=0;m<6;m++){
		scanf("%d",&a[m]);
	}
	
	maxdazi(a,6);
	
	for (m=0;m<6;m++){
		printf("%d ",a[m]);
	}
	
	
	
	return 0;
	
	
}







