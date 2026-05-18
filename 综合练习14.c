#include <stdio.h>
typedef struct{
	int a;
	char ming[20];
	float cheng;
}xue;
void pai(xue *p,int n){/*对结构体比较后排序*/ 
	int i=0;/*并输出*/ 
	xue temp;
	int j=0;
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(p[j].cheng<p[j+1].cheng){
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d. %d %s %.1f\n",i+1,p[i].a,p[i].ming,p[i].cheng);
	}
}
void shu(xue *p,int n,const char *q){/*结构体写入文件*/ 
	FILE *fp=fopen(q,"w");
	if(fp==NULL){
		printf("文件打开失败\n");
		return ;
	}
	int i=0;
	for(i=0;i<n;i++){
		fprintf(fp,"%d %s %f",p[i].a,p[i].ming,p[i].cheng);
	}
	fclose(fp);
}

void han(int *p,const char *q,int n){/*这是写入文件的函数*/ 
	FILE *fp=fopen(q,"w");
	if(fp==NULL)
{
	printf("文件打开失败\n");
	return ;
	}	
	int i=0;
	for(i=0;i<10;i++){
		fprintf(fp,"%d ",p[i]);
	}
	fclose(fp);
}

void duqu(int *p){/*这是对那10个整数进一步处理的函数*/ 
	printf("现将对这10个整数进行处理\n");
	int i=0;
	for(i=0;i<10;i++){
		if(p[i]%2==0){
			p[i]=p[i]+1;
		} else{
			p[i]=p[i]*2;
		}
	}
	printf("处理后的数组\n");
	for(i=0;i<10;i++){
		printf("%d ",p[i]);
	} 
}

void fan(int *p,int n){/*这是用函数排序的函数*/ 
	printf("用函数排序\n");
	int i=0;
	int j=0;
	int temp=0;
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(p[j]>p[j+1]){
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
	for(i=0;i<10;i++){/*排完并打印*/ 
		printf("%d ",p[i]);
	}
}

int main(){
	printf("输入10个整数\n");/*输入那10个整数*/ 
	int arr[10];
	int i=0;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("未排序的数组\n");/*用冒泡排序*/ 
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	int temp=0;
	int j=0;

	for(i=0;i<10;i++){
		for(j=0;j<10-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
		printf("\n排序后的数组\n");
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	
	printf("\n");
	fan(arr,10);
	printf("\n");
	han(arr,"zijixunlian.txt",10);
	printf("\n");
	duqu(arr);
	han(arr,"chulihoude.txt",10);
	getchar();
	getchar();
	printf("\n下面是结构体\n");
	printf("输入几组数据\n");
	xue stu[3];
	for(i=0;i<3;i++){
		printf("请输入\n");
		scanf("%d %s %f",&stu[i].a,stu[i].ming,&stu[i].cheng);
	}
	shu(stu,3,"jiegouti.tet");
	pai(stu,3);
	return 0;
}
