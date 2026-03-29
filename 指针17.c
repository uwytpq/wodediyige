#include <stdio.h>
void fan(int *arr,int len,int *max,int *min){
	*max=arr[0];
	*min=arr[0];
	int i=1;
	for(i=1;i<len;i++){
		if(arr[i]>*max){
			*max=arr[i];
		}
		if(arr[i]<*min){
			*min=arr[i];
		}
	
	}
}

int main(){
	int narr[10];
	int n=0;
	int maxn,minn;
	printf("输入10个数\n");
	for(n=0;n<10;n++){
		scanf("%d",&narr[n]);
	}
	fan(narr,10,&maxn,&minn);
	printf("最大值为%d,最小值为%d",maxn,minn);
	
	
	
	
	
	
	return 0;
}









