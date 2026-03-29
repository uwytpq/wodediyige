#include <stdio.h>
int main(){
	char str[]="I like how you like to paint like no one's watching";
	int i=0,dan=0,j=0,ci=0;
	char word[]="like";
	while(str[i]!='\0'){
		if(str[i]!=' '&&i==0){
			dan=0;
			for(j=0;j<4;j++){
				if(str[i+j]==word[j]){
					dan++;
					}
				}
				if(dan==4){
				ci++;
			 }
			}
			if(str[i]!=' '&&str[i-1]==' '){
				dan=0;
				for(j=0;j<4;j++){
				if(str[i+j]==word[j]){
					dan++;
					}
				}
				if(dan==4){
				ci++;
			 }
			}
		i++;
		}
	
	printf("³öÏÖ%d´Î\n",ci);
	
	
	return 0;
}




