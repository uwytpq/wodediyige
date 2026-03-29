#include <stdio.h>
int main (){
	int a=1,b=1;
	int n;
	int pos=0;
	
	printf("请输入你想生成的项数\n");
	scanf("%d",&n);
	
	if(n<=0){
		printf("输入错误\n");
		return 0;
	}
	
	if((n>=1)||(n>=2)){
		printf("1 1 ");
	}
	
	int i;
	for (i=3;i<=n;i++){
		pos=a+b;
		printf("%d ",pos);
		a=b;
		b=pos;
	}
	
	
	
	
	
	
	
	return 0;
}














