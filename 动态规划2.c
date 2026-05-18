#include <stdio.h>
#include <stdlib.h>
int main(){
	int *p=(int*)calloc(5,sizeof(int));
	
	int i=0;
	for(i=0;i<5;i++){
		printf("%d\n",p[i]);
	}
	
	int *new=(int*)realloc(p,10*sizeof(int));
	if(new==NULL){
		printf("ÄÚ´æÀ©Õ¹Ê§°Ü\n");
	} else{
		p=new;
	}
	for(i=0;i<10;i++){
		printf("%d\n",p[i]);
	}
	
	return 0;
}
