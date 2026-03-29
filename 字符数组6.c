#include <stdio.h>
int main(){
	printf("输入一串字符\n");
	char str[20];
	fgets(str,20,stdin);
	
	char ch;
	char nstr[20];
	printf("输入一个字符\n");
	scanf("%c",&ch);
	
	int i=0,j=0;
	
	while(str[i]!='\0'){
		if(str[i]!=ch){
			nstr[j]=str[i];
			j++;
		}
		i++;
	} 
	
	

	printf("%s",nstr);
	
	
	
	return 0;

}







