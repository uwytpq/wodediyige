#include <stdio.h>
int main() {
   char str[20];
   int i=0,j=0;
   printf("输入一串字符串\n");
   fgets(str,20,stdin);
   while(str[i]!='\0'){
   	if(str[i]==' '){
   		j++;
	   }
	   i++;
   }
   printf("单词个数为%d",j+1);
   
   
   
    return 0;
}
