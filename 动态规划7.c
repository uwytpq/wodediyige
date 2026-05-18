#include <stdio.h>
#include <stdlib.h>
int main(){
	int x=0,y=0;
	scanf("%d %d",&x,&y);
	int **er=(int**)malloc(x*sizeof(int*)); 
	int i=0,j=0;
	for(i=0;i<x;i++){
		er[i]=(int*)malloc(y*sizeof(int));
	}
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			er[i][j]=i*j;
		}
	}
	for(i=0;i<x;i++){
		printf("\n");
		for(j=0;j<y;j++){
			printf("%d ",er[i][j]);
		}
	}
	
	for(j=0;j<y;j++){
		free(er[j]);
	}
	free(er);
	return 0;
}
