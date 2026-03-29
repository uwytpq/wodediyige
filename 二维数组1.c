#include <stdio.h>
int main(){
	int arr[10][10];
	int i=0;int j=0;int n=0;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			++n;	
			arr[i][j]=n;
		} 
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%3.d ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("改变后的二维数组\n");
	for(i=0;i<10;i++){
		arr[i][1] += arr[i][0];
		arr[i][0]=0;
	}
		for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%-3.d ",arr[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
