#include <stdio.h>
int main(){
	printf("关于考试的程序设计题\n");
	int arr[4]={1,2,3,4};
	int narr[24];
	printf("三重循环排列\n");
	int i=0,j=0,n=0,x=0;
	int a=0,b=0,c=0;
	
	for(i=0;i<4;i++){
		a=arr[i];
		for(j=0;j<4;j++){
			b=arr[j];
			for(n=0;n<4;n++){
				c=arr[n];
				if((a!=b)&&(a!=c)&&(b!=c)){
					narr[x]=a*100+b*10+c;
					x++;
				}
			}
		}
	}
	printf("输出的排列后的数组\n");
	for(i=0;i<24;i++){
		printf("%d\n",narr[i]);
	}
	
	FILE *fp=fopen("shuzupailie","w");
	for(i=0;i<24;i++){
		fprintf(fp,"%d ",narr[i]);
	}
	fclose(fp);
	
	return 0;
}














