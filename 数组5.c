#include <stdio.h>
int main (){
	printf("请输入10个数\n");
	int arr[5],i=0,b=0,pos=-1;
	for (i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("请在输入一个数\n");
	int a=0;
	scanf("%d",&a); 

	for (i=0;i<10;i++){
		if(arr[i]!=a){
			continue;
		}else if(arr[i]==a){
			b++;
			pos=i;
		} 
	}
	if (pos==-1){
		printf("没有相同的数\n");
	}
	
	
	printf ("一共有%d个相同的数\n",b);
	
	int narr[10];
	int ni=0;
	for (i=0;i<10;i++){
		if(arr[i]!=a){
			narr[ni]=arr[i];
			ni++;
		}
	}
	
printf("删除后的数组为\n");
for (ni=0;ni<10-b;ni++){
	printf(" %d\n",narr[ni]);
}	

printf("%d\n",ni);
	return 0;
	
}











