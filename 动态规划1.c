#include <stdio.h>
#include <stdlib.h>
int main(){
	int *p=(int*)malloc(2*sizeof(int));
	int i=0;
	printf("Œ¥≥ı ºªØµ√\n");
	printf("%d $%d",p[0],p[1]);
	for(i=0;i<2;i++){
		scanf("%d",&p[i]);
	}
	for(i=0;i<2;i++){
		printf("%d\n",p[i]);
	}
	
	return 0;
}
