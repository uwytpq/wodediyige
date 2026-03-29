#include <stdio.h>
int main(){
	FILE *wen = fopen("data.tet","w");
	int i=0;
	int arr[10];
	
	for (i=0;i<10;i++){
		scanf("%d",&arr[i]);
	} 
	
	for (i=0;i<10;i++){
		fprintf(wen,"%d\n",arr[i]);
	} 
	
	fclose(wen);
	
	int shu;
	wen=fopen("data.tet","r");
	printf("从data.tet读取到的内容\n");
	while(fscanf(wen,"%d",&shu) !=EOF){
		printf("%d ",shu);
	}
	
	fclose(wen);
	
	
	return 0;
}












