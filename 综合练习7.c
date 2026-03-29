#include <stdio.h>
typedef struct{
	int shuhao;
	char ming[30];
	char zuo[20];
	float jia;
	int shu;
}Book;
void inputBooks(Book *books,int *n){
	FILE *fp=fopen("books.tet","r");
	if(fp==NULL){
		printf("文件打开失败\n");
		return ;
	}
	int i=0,count=0;
	for(i=0;i<4;i++){
		fscanf(fp,"%d %s %s %f %d",&books[i].shuhao,books[i].ming,books[i].zuo,&books[i].jia,&books[i].shu);
		count++;
	}
	*n=count;
	fclose(fp);
}
void sortBYprice(Book *books,int n){
	int i=0,j=0;
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
		
			if(books[j].jia-books[j+1].jia>0){
				Book temp;
				temp=books[j];
				books[j]=books[j+1];
				books[j+1]=temp;
				}
			}
		}
	}
void writeToFile(Book *books,int n,const char *filename){
	FILE *fp=fopen(filename,"w");
	int i=0;
	for(i=0;i<n;i++){
		fprintf(fp,"%d %s %s %f %d\n",books[i].shuhao,books[i].ming,books[i].zuo,books[i].jia,books[i].shu);
	}
	fclose(fp);
}
int main(){
	Book tu[4];
	int i=0;
	for (i=0;i<4;i++){
		printf("输入书号 书名 作者 价格 数量\n");
		scanf("%d %s %s %f %d",&tu[i].shuhao,tu[i].ming,tu[i].zuo,&tu[i].jia,&tu[i].shu);
	}
	FILE *fp=fopen("books.tet","w");
	for(i=0;i<4;i++){
		fprintf(fp,"%d %s %s %f %d\n",tu[i].shuhao,tu[i].ming,tu[i].zuo,tu[i].jia,tu[i].shu);
	}
	fclose(fp);
	Book ntu[4];
	int x=0;
	inputBooks(ntu,&x);
	sortBYprice(ntu,x);
	writeToFile(ntu,x,"sortedbooks.tet");
	printf("输出前三个\n");
	for(i=0;i<3;i++){
		printf("书号%d 书名%s 作者%s 价格%.2f 数量%d\n",ntu[i].shuhao,ntu[i].ming,ntu[i].zuo,ntu[i].jia,ntu[i].shu);
	}
	return 0;
}









