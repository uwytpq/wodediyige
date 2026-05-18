#include <stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int *a=arr;
	
	int i=0;
	for(i=0;i<5;i++){
		printf("%d ",*a);
		a++;
	}
	
	
	return 0;
}



