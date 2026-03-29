#include <stdio.h>
#include <string.h>
int main(){

	char xing[20];
	gets(xing);
	

	char min[20];
	gets(min);
	
	 if(strcmp(xing,min)>0){
	 	printf("%s更长\n",xing);
	 } 
	 else if(strcmp(xing,min)<0){
	 	printf("%s更长\n",min);
	 }
	 else{
	 	printf("一样长\n");
	 }
	 
	 
	 
	 
	
	return 0;

}








