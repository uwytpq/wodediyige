#include <stdio.h>
int main() {
   int arr[10];
   printf("请输入10个数\n");
   
   int i = 0;
   for (i = 0;i < 10;i++){
   		scanf("%d",&arr[i]);		
   }
   
   int max = arr[0];
   int min = arr[0];
   		
   	for (i=1;i<10;i++){
   		if (arr[i]>max){
   			max = arr[i];
		   } 
		if (arr[i]<min){
			min = arr[i];
			}
	   }
   
   printf("最大值为%d,最小值为%d",max,min);
   
   
   
   
   
   
   
   
    
    return 0;
}












