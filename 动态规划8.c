#include <stdio.h>
#include <string.h>

void paixu(int *arr,int n){
	int i=0;
	int j=0;
	int temp;
	for(i=0;i<n;I++){
		for(j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main(){
	printf("请输入你想要得数组大小\n")
	int n=0;
	scanf("%d",&n);
	int *p=(int*)ralloc(n,sizeof(int));
	if(p==NULL){
		printf("neicunfenpeishibai\n");
		return 1;
	}
	int i=0;
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	} 
	printf("这是你输入得十个数\n");
	int count=0;
	for(i=0;i<n;i++){
		printf("%d ",p[i]);
		count++;
		if(count==4){
			printf("\n");
		}
	}
	printf("这是排序后的数组\n");
	paixu(p,10);
	printf("按回车进入下一步\n");
	getchar();
	
	printf("请输入二维数组得x\n");
	int x=0,y=0;
	scanf("%dd",&x);
	printf("请输入二维数组的y\n");
	scanf("%d",&y);
	int **q=(int*)ralloc(x,sizeof(int*));
	for(i=0;i<x;i++){
		int *p[i]=(int*)ralloc(y,sizeof(int));
	}
	for(i=0;i<x;i++){
		printf("输入第%d的%d个元素",i,y)
	}
	
	return 0;
}
