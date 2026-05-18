#include <stdio.h>
#include <stdlib.h>
int main(){
	int *p=(int*)malloc(5*sizeof(int));
	int i=0;
	for(i=0;i<5;i++){
		p[i]=i+1;
	}
	int *new=(int*)realloc(p,5*sizeof(int));
	if(new==NULL){
		printf("ÄÚ´æ·ÖÅäÊ§°Ü\n");
	} else {
		p=new;
	} 
	
	for(i=5;i<10;i++){
		p[i]=i+1;
	}
	
	for(i=0;i<10;i++){
		printf("%d ",p[i]);
	}
	free(p);
	return 0;
}
