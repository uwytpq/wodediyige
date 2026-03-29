#include <stdio.h>
int main() {
    
    printf("输入一个正整数\n");
    int a = 0,i = 1,sum = 0;
    scanf("%d",&a);
    
    for (i= 1;i <= a;i++){
    	sum +=i;
    
	}
    	printf("从1加到a的和为%d",sum);
    
    
    
    return 0;
}
