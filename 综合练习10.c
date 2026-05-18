#include <stdio.h>
int main(){
	printf("输入一串字符串可包含数字和字母\n");
	char str[100];
	fgets(str,100,stdin);
	int i=0; 
	int a=1,b=0;
	int n=0;
	while(str[i]!='\0'){
		if(str[i]>='0'&&str[i]<='9'){
			a=a*(str[i]-'0');
			b=1;
		}
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
			n+=str[i];
		}
		i++;
	}
	
	printf("ASILE值为%d",n);
	printf("数字的值为%d",b?a:0);
	printf("和为%d",n+(b?a:0));
	
	
	
	
	return 0;
}
