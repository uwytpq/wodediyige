#include <stdio.h>

int countChar(const char *str,char ch){
	int i=0,j=0;
	for(i=0;i<20;i++){
		if(str[i]=='ch'){
			j++;
		}
	}
	return j;
}

int main(){
	char nch[20];
	printf("ÊäÈë×Ö·û\n")
	scanf("%s",&nch[20]);
	
	countChar(nch,'a');
	printf("%d",j);
	
	return 0;
}






