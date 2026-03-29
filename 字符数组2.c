#include <stdio.h>
#include <string.h>
int main(){
	printf("输入一串字符\n");
	char ch[100];
	gets(ch);
	
	
	
	
	int a=0,b=0,c=0,d=0;
	int i=0;
	for (i=0;i<strlen(ch);i++){
		if((ch[i] >='A')&&(ch[i] <='Z')){
			a++;
		} else if((ch[i] >='a')&&(ch[i] <='z')){
			b++;
		} else if((ch[i] >='0')&&(ch[i]<='9')){
			c++;
		} else {
			d++;
		}
	
	}
	
	
		printf("大写有%d,小写有%d,数字有%d,其它有%d\n",a,b,c,d);
		
	return 0;
}










