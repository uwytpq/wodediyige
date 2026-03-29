#include <stdio.h>
int main(){
	int arr[6]={1,2,3,4,5,6};
	int *a;
	int *b;
	a=arr;
	b=arr+5;
	int i=0;
	for (i=0;i<6;i++){
		printf("%d ",*a);
		a++;
		
	}
	printf("\n");
	for (i=0;i<6;i++){
		printf("%d ",*b);
		b--;
	}
	
	
	
	
	
	
	
	
	
	return 0;
}





