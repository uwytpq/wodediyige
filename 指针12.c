#include <stdio.h>
void han(int *a,int *b){
	int i=0;
	for(i=0;i<6;i++){
		a[i]=b[5-i];
	}
}

int main(){
	int arr[6];
	printf("ÊäÈë6¸öÊý\n");
	int n=0;
	for(n=0;n<6;n++){
		scanf("%d",&arr[n]);
	}
	
	int new[6];
	
	
	han(new,arr);
	
	for(n=0;n<6;n++){
		printf("%d ",new[n]);
	}
	
	
	
	
	
	
	return 0;
}








