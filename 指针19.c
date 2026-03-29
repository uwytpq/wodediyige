#include <stdio.h>

void fan(int arr){
	int *p=arr;
	*p+=50;
}
 int main(){
 	int a=50;
 	
 	fan(a);
 	printf("%d",a);
 	
 	
 	
 	
 	return 0;
 }





