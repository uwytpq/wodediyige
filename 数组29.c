#include <stdio.h>
int main(){
	int arr[3][4];
	int i,j,sum=0;
	printf("请输入12个数\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&arr[i][j]);
			sum +=arr[i][j];
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("和为%d",sum); 
	
	return 0;
}












