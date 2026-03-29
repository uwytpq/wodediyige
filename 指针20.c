#include <stdio.h>
int fan(int arr[],int n){
	int sum=0,i=0;
	for(i=0;i<n;i++){
		sum +=arr[i];
	}
	return sum;
}

int main(){
	int narr[5]={1,2,3,4,5};
	printf("%d",fan(narr,5));
		
	
	
	
	
	return 0;
}








