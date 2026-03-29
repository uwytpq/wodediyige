#include <stdio.h>
void fan(int *arr,int len){
	int j=0;
	int i=0;
	for(i=0;i<len;i++){
		if(*(arr+i)==0)continue;
		if(*(arr+i)!=0){
			arr[j]=arr[i];
			j++;
		}
	}
	for(i=j;i<len;i++){
		arr[i]=0;
	}
}





int main(){
	int narr[8];
	int n=0;
	printf("ÊäÈë8¸öÊý\n");
	for(n=0;n<8;n++){
		scanf("%d",&narr[n]);
	}
	
	fan(narr,8);
	for(n=0;n<8;n++){
		printf("%d",narr[n]);
	}

	
	return 0;
}



