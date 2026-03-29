#include <stdio.h>

int han(char*str){
	int s=0;
	while(str!='H'){
		s++; 
	}
	return s;
}
 
int main(){
	char nstr[20];
	gets(nstr);
	
	printf("³¤¶ÈÎª%d",han(&nstr));
	
	
	
	
	
	
	
	
	return 0;
}






