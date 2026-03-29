#include <stdio.h>
int main(){
	int arr[3][3];
	printf("我能帮你计算三阶行列式\n");
	int i=0;
	int j=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	int a;
	a=arr[0][0]*arr[1][1]*arr[2][2]+arr[1][0]*arr[2][1]*arr[0][2]+arr[0][1]*arr[1][2]*arr[0][2]-arr[2][0]*arr[1][1]*arr[0][2]-arr[0][1]*arr[1][0]*arr[2][2]-arr[0][0]*arr[1][2]*arr[2][1];
	
	
	
	
	printf("答案为%.1f\n",a);
	
	
	
	
	
	
	
	
	return 0;
}
