#include <stdio.h>
#include <stdlib.h>
int main(){
	int n=0;
	scanf("%d",&n);
	double *p=(double*)calloc(n,sizeof(double));
	int i=0;
	for(i=0;i<n;i++){
		printf("%d ",p[i]);
	}
	
	getchar();
	getchar();
	for(i=0;i<n;i++){
		p[i]=i;
	} 
	printf("\n");
	for(i=0;i<n;i++){
		printf("%d ",p[i]);
	} 
	free(p);
	return 0;
}
