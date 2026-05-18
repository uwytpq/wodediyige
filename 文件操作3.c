#include <stdio.h>
int main(){
	FILE *fp=fopen("data.txt","r");
	if(fp==NULL){
		printf("文件创建失败\n");
		return 0;
	}
	
	char ch[200];
	while(fscanf(fp,"%s",ch)==1){
		printf("%s",ch);
	}


	fclose(fp);
	return 0;
}
