#include <stdio.h>
int main() {
   int arr[10];
   printf("请输入10个数\n");
   
   int i = 0,a=0,sum = 0;
   for (i = 0;i < 10;i++){
   		scanf("%d",&arr[i]);		
   }
   
  	for (i=0;i<10;i++){
  		sum +=arr[i];
	  }
  
  int b = 0;
  
  printf("平均值为%.1f",(float)sum/10.0);
  
  for (i=0;i<10;i++){
  	if (arr[i]>=(float)sum/10.0){
  		b++;
	  }
  }
  
  
  printf("有%d个",b);
  
   
   
    return 0;
}













