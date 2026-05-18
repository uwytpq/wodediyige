#include <stdio.h>
int main(){
	char str[20]="陈柄坤";
char nstr[20];	
scanf("%s",nstr);
if(strcmp(str,nstr)==0){
	printf("可以呀\n");
	} else{
		printf("不相等\n");
	}
		return 0;

}

