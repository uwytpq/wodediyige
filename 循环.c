#include <stdio.h>
int main() {
    printf("请输入一个整数\n");
    int a = 0;
    scanf("%d",&a);
    
   int i = 1,sum = 0;
   while (i <= a){
   		sum +=i;
   		i++;
   }
   printf("1+...%d=%d",a,sum);
   
   
   
    
    return 0;
    
    
    
}




