#include <stdio.h> 

	int main (){
		printf("请你输入10个数\n");
		int arr[10];
		int a=0;
		for (a=0;a<10;a++){
			scanf("%d",&arr[a]);
		}
		
		
		printf("在输入一个数\n");
		int weizi;
		scanf("%d",&weizi);
		
		int pos=-1,i=0;
		for (i=0;i<10;i++){
			if(weizi==arr[i]){
				pos=i;
				break;
			}
		}
		
		if(pos==-1){
			printf("未找到\n");
			return 0;
		} 
		
		for(i=pos;i<9;i++){
			arr[i]=arr[i+1];
		}
		
		for (i=0;i<9;i++){
			printf(" %d",arr[i]);
		}
	
	
		
		return 0;
		
		
		
	}










