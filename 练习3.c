#include <stdio.h>
#include <ctype.h>

int main (){
	printf ("输入一个成绩\n");
	int a = 0;
	scanf (" %d",&a);
	
	printf ("输入您的评级\n");
	char b ;
	scanf (" %c",&b);
	
	if (a<0||a>100){
		printf("您成绩输入有误\n");
		return 0;
	}
	
	if (!((b>='a'&&b<='e')||(b>='A'&&b<='E'))){
		
		printf("评级输入错误\n");
		return 0;
	}
	
	char c = toupper(b);
	
	 if (c == 'A'&&a>=90){
	 	printf("匹配\n");
	 } else if (c == 'B'&&a>=75){
	 	printf("匹配\n"); 
	 } else if (c == 'C'&&a>=60){
	 	printf("匹配\n");
	 } else if (c=='D'&&a>=40){
	 	printf("匹配\n");
	 } else if (c =='E'&&a<40){
	 	printf("匹配\n");
	 } else{
	 	printf("不匹配\n");
	 }
	  
	return 0;
}





