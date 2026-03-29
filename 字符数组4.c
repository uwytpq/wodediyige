#include <stdio.h>
int main(){
	char str="hello";
	char *p=str;
	int i=0,j=0;
	for(i=0;i<6;i++){
		if(p!='\0'){
			j++;
			p++;
		} 
	}
	
	printf("%d",j);
	
	return 0;
} 





