#include <stdio.h>
 void fan(int n){
 	int i=1;
 	for(i=2;i<n+1;i++){
 		if((i%2 !=0)&&(i%3 !=0)){
 			printf("%d ",i);
		 }
	 }
 } 

int main(){
	
	fan(10);
	
	
	
	
	
	return 0;
}











