#include <stdio.h>
int main (){
	int arr[9]={1,3,5,7,9,11,13,15,17};
	int x=0;
	printf("输入一个未知数\n");
	scanf("%d",&x);
	
	int narr[10];
	int i=0,a=0,b=0;
	for (i=0;i<;i++){
		if((x>arr[i])&&(x<arr[i+1])){
			narr[b]=arr[i];
			narr[b+2]=arr[i+1];
			b++;
		}
		
	}
	
	for (b=0;b<10;b++){
		printf("%d ",narr[b]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}













